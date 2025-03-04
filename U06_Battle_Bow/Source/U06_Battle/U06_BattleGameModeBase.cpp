// Copyright Epic Games, Inc. All Rights Reserved.

#include "U06_BattleGameModeBase.h"
#include "Global.h"
#include  "Characters/CPlayer.h"

// GameBaseMode 
// 1. AutoPosess
AU06_BattleGameModeBase::AU06_BattleGameModeBase()
{
	CHelpers::GetClass<APawn>(&DefaultPawnClass, "Blueprint'/Game/Player/BP_CPlayer.BP_CPlayer_C'");

}
