// Copyright Epic Games, Inc. All Rights Reserved.
#include "Muro.h"
#include "Bomberman01_2025GameMode.h"
#include "Bomberman01_2025Character.h"
#include "UObject/ConstructorHelpers.h"

ABomberman01_2025GameMode::ABomberman01_2025GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
