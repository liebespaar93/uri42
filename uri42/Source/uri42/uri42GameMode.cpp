// Copyright Epic Games, Inc. All Rights Reserved.

#include "uri42GameMode.h"
#include "uri42Character.h"
#include "UObject/ConstructorHelpers.h"

Auri42GameMode::Auri42GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
