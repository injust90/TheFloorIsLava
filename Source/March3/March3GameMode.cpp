// Copyright Epic Games, Inc. All Rights Reserved.

#include "March3GameMode.h"
#include "March3Character.h"
#include "UObject/ConstructorHelpers.h"

AMarch3GameMode::AMarch3GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
