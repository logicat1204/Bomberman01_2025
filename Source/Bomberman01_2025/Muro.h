// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h" // Incluye las funcionalidades b�sicas de Unreal Engine.
#include "GameFramework/Actor.h" // Incluye la clase base AActor, de la cual heredar� AMuro.
#include "Muro.generated.h" // Incluye las macros generadas por Unreal para esta clase.

// Declaraci�n anticipada de la clase UStaticMeshComponent.
// Esto evita incluir el archivo de encabezado completo y mejora el tiempo de compilaci�n.
class UStaticMeshComponent;

// Declaraci�n de la clase AMuro, que hereda de AActor.
UCLASS() // Macro de Unreal para exponer la clase al editor y al sistema de reflexi�n.
class BOMBERMAN01_2025_API AMuro : public AActor
{
	GENERATED_BODY() // Macro generada por Unreal para manejar la creaci�n de la clase.

public:
	// Constructor por defecto.
	AMuro();

	// Puntero al componente de malla est�tica que representar� visualmente el muro.
	UStaticMeshComponent* MallaMuro;

protected:
	// Llamado cuando el juego comienza o cuando el actor es creado.
	virtual void BeginPlay() override;

public:
	// Llamado en cada fotograma (frame).
	virtual void Tick(float DeltaTime) override;

	// Variables para controlar el movimiento y la rotaci�n del muro.
	float FloatSpeed; // Velocidad de flotaci�n (movimiento en el eje Z).
	float RotationSpeed; // Velocidad de rotaci�n.
	bool mPuedeMoverse; // Indica si el muro puede moverse o no.
};