// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Bomberman01_2025GameMode.generated.h"

UCLASS(minimalapi)
class ABomberman01_2025GameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	ABomberman01_2025GameMode();

public:
	virtual void BeginPlay() override;
};