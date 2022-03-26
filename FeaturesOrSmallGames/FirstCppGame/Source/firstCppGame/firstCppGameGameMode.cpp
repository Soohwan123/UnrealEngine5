// Copyright Epic Games, Inc. All Rights Reserved.

#include "firstCppGameGameMode.h"
#include "firstCppGameCharacter.h"
#include "UObject/ConstructorHelpers.h"

AfirstCppGameGameMode::AfirstCppGameGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
