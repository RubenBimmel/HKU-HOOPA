// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "SquadGameGameMode.h"
#include "SquadGamePlayerController.h"
#include "SquadGameCharacter.h"
#include "UObject/ConstructorHelpers.h"

ASquadGameGameMode::ASquadGameGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = ASquadGamePlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}