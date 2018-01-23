// Fill out your copyright notice in the Description page of Project Settings.

#include "SquadGameAIController.h"
#include "Engine/World.h"
#include "AI/Navigation/NavigationSystem.h"

APawn* ASquadGameAIController::playerCharacter;


ASquadGameAIController::ASquadGameAIController() {

}

void ASquadGameAIController::Possess(APawn* pawn) {
	Super::Possess(pawn);
}

void ASquadGameAIController::Tick(float DeltaSeconds) 
{
	APawn* MyPawn = GetPawn();
	Super::Tick(DeltaSeconds);
	if (MyPawn)
	{
		if (playerCharacter) {
			UNavigationSystem* const NavSys = GetWorld()->GetNavigationSystem();

			FVector DestLocation = playerCharacter->GetActorLocation();
			FVector PawnLocation = MyPawn->GetActorLocation();
			float const Distance = FVector::Dist(DestLocation, PawnLocation);

			// We need to issue move command only if far enough in order for walk animation to play correctly
			if (NavSys)
			{
				if (Distance > 400.0f)
				{
					NavSys->SimpleMoveToLocation(this, DestLocation);
				}
				else if (Distance < 200.0f)
				{
					NavSys->SimpleMoveToLocation(this, PawnLocation);
				}
			}
		}
	}
}


