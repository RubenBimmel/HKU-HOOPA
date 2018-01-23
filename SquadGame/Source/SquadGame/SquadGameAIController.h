// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "SquadGameAIController.generated.h"

/**
 * 
 */
UCLASS()
class SQUADGAME_API ASquadGameAIController : public AAIController
{
	GENERATED_BODY()
	
public:
	ASquadGameAIController();
	void Possess(APawn* Pawn) override;
	void Tick(float DeltaTime) override;
	static APawn* playerCharacter;
};
