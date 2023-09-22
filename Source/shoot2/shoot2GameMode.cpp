// Copyright Epic Games, Inc. All Rights Reserved.

#include "shoot2GameMode.h"
#include "shoot2Character.h"
#include "UObject/ConstructorHelpers.h"

Ashoot2GameMode::Ashoot2GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
