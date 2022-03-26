// Copyright Epic Games, Inc. All Rights Reserved.

#include "FirstMultiPlayerGameMode.h"
#include "FirstMultiPlayerCharacter.h"
#include "UObject/ConstructorHelpers.h"

AFirstMultiPlayerGameMode::AFirstMultiPlayerGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
