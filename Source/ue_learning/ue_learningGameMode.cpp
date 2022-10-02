// Copyright Epic Games, Inc. All Rights Reserved.

#include "ue_learningGameMode.h"
#include "ue_learningCharacter.h"
#include "UObject/ConstructorHelpers.h"

Aue_learningGameMode::Aue_learningGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
