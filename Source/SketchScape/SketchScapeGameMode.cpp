// Copyright Epic Games, Inc. All Rights Reserved.

#include "SketchScapeGameMode.h"
#include "SketchScapeCharacter.h"
#include "UObject/ConstructorHelpers.h"

ASketchScapeGameMode::ASketchScapeGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
