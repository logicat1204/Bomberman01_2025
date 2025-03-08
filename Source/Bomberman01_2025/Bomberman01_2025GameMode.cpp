// Copyright Epic Games, Inc. All Rights Reserved.

#include "Bomberman01_2025GameMode.h"
#include "Bomberman01_2025Character.h"
#include "UObject/ConstructorHelpers.h"
#include "Bloque.h"
#include "Muro.h"

ABomberman01_2025GameMode::ABomberman01_2025GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

void ABomberman01_2025GameMode::BeginPlay()
{
	Super::BeginPlay();

	GEngine->AddOnScreenDebugMessage(-1, -1, FColor::Red, TEXT("Bloque Spawning"));

	// Create a new Enemigo
	//ABloque* bloque01 = GetWorld()->SpawnActor<ABloque>(ABloque::StaticClass(), FVector(934.0f, 1370.0f, 100.0f), FRotator(0.0f, 0.0f, 0.0f));
	//ABloque* bloque02 = GetWorld()->SpawnActor<ABloque>(ABloque::StaticClass(), FVector(734.0f, 1370.0f, 50.0f), FRotator(0.0f, 0.0f, 0.0f));
	int numeroMuroConMovimiento = 0;
	int numeroBloqueConMovimiento = 0;
	int minX = 350;
	int maxX = 2550;
	int minY = 450;
	int maxY = 1150;
	int cordZ = 0;
	for (int i = 0; i < 10; i++)
	{
		// Generar coordenadas aleatorias dentro de los rangos especificados
		int randomX = FMath::RandRange(minX, maxX);
		int randomY = FMath::RandRange(minY, maxY);
		ABloque* bloque = GetWorld()->SpawnActor<ABloque>(
			ABloque::StaticClass(),//Funciones que transforman los enteros a float static_cast 
			FVector(static_cast<float>(randomX), static_cast<float>(randomY), static_cast<float>(cordZ)),
			FRotator(0.0f, 0.0f, 0.0f)
		);
		if (bloque->bPuedeMoverse)
		{
			numeroBloqueConMovimiento++;
		}

		if (numeroBloqueConMovimiento >= 2)
		{
			bloque->bPuedeMoverse = false;
		}

	}
	for (int i = 0; i < 20; i++)
	{
		// Generar coordenadas aleatorias dentro de los rangos especificados
		int randomX = FMath::RandRange(minX, maxX);
		int randomY = FMath::RandRange(minY, maxY);
		AMuro* muro = GetWorld()->SpawnActor<AMuro>(
			AMuro::StaticClass(),//Funciones que transforman los enteros a float static_cast 
			FVector(static_cast<float>(randomX), static_cast<float>(randomY), static_cast<float>(cordZ)),
			FRotator(0.0f, 0.0f, 0.0f)
		);
		if (muro->mPuedeMoverse)
		{
			numeroMuroConMovimiento++;
		}

		if (numeroMuroConMovimiento >= 4)
		{
			muro->mPuedeMoverse = false;
		}

	}

}