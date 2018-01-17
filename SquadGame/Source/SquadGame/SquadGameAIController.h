// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "SquadGameCharacter.h"
#include "SquadGameAIController.generated.h"

/**
 * 
 */
UCLASS()
class SQUADGAME_API ASquadGameAIController : public AAIController
{
	GENERATED_BODY()
	
public:
	virtual void Possess(APawn* pawn) override;
	virtual void Tick(float DeltaTime) override;
	static AActor* playerCharacter;
	const float playerMaxDistance = 400.0f;
	const float playerTargetDistance = 200.0f;
};
