// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h" // Incluye las funcionalidades básicas de Unreal Engine.
#include "GameFramework/Actor.h" // Incluye la clase base AActor, de la cual heredará AMuro.
#include "Muro.generated.h" // Incluye las macros generadas por Unreal para esta clase.

// Declaración anticipada de la clase UStaticMeshComponent.
// Esto evita incluir el archivo de encabezado completo y mejora el tiempo de compilación.
class UStaticMeshComponent;

// Declaración de la clase AMuro, que hereda de AActor.
UCLASS() // Macro de Unreal para exponer la clase al editor y al sistema de reflexión.
class BOMBERMAN01_2025_API AMuro : public AActor
{
	GENERATED_BODY() // Macro generada por Unreal para manejar la creación de la clase.

public:
	// Constructor por defecto.
	AMuro();

	// Puntero al componente de malla estática que representará visualmente el muro.
	UStaticMeshComponent* MallaMuro;

protected:
	// Llamado cuando el juego comienza o cuando el actor es creado.
	virtual void BeginPlay() override;

public:
	// Llamado en cada fotograma (frame).
	virtual void Tick(float DeltaTime) override;

	// Variables para controlar el movimiento y la rotación del muro.
	float FloatSpeed; // Velocidad de flotación (movimiento en el eje Z).
	float RotationSpeed; // Velocidad de rotación.
	bool mPuedeMoverse; // Indica si el muro puede moverse o no.
};