// Fill out your copyright notice in the Description page of Project Settings.

#include "SquadGameAIController.h"
#include "AI/Navigation/NavigationSystem.h"

AActor* ASquadGameAIController::playerCharacter;

void ASquadGameAIController::Possess(APawn * pawn)
{
	Super::Possess(pawn);

	ASquadGameCharacter* AICharacter = Cast<ASquadGameCharacter>(pawn);
}

void ASquadGameAIController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (playerCharacter)
	{
		const FVector DestLocation = playerCharacter->GetActorLocation();
		APawn* const MyPawn = GetPawn();
		if (MyPawn)
		{
			UNavigationSystem* const NavSys = GetWorld()->GetNavigationSystem();
			float const Distance = FVector::Dist(DestLocation, MyPawn->GetActorLocation());

			// We need to issue move command only if far enough
			if (NavSys && (Distance > playerMaxDistance))
			{
				NavSys->SimpleMoveToLocation(this, DestLocation);
			}
			else if (Distance < playerTargetDistance)
			{
				NavSys->SimpleMoveToLocation(this, MyPawn->GetActorLocation());
			}
		}
	}
}
