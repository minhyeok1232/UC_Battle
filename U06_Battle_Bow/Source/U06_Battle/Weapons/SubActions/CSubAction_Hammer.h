// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Weapons/CSubAction.h"
#include "Weapons/CWeaponStructures.h"
#include "CSubAction_Hammer.generated.h"

/**
 * 
 */
UCLASS()
class U06_BATTLE_API UCSubAction_Hammer : public UCSubAction
{
	GENERATED_BODY()
	
private:  // Hammer에서는 HitData대신 Aura에서 나이이가라와 연결해서 사용
    UPROPERTY(EditDefaultsOnly, Category = "Aura")
        TSubclassOf<class ACAura> AuraClass;
    UPROPERTY(EditDefaultsOnly, Category = "Aura")
        FVector AuraLocation;
private:
    UPROPERTY(EditDefaultsOnly, Category = "Action")
        FDoActionData ActionData;

private:
    UPROPERTY(EditDefaultsOnly, Category = "Add-On")
        TSubclassOf<class ACGhostTrail> GhostTrailClass;

public:
    virtual void Pressed() override;

public:
   virtual void Begin_SubAction_Implementation() override;
   virtual void End_SubAction_Implementation() override;

private:
    UPROPERTY()
    class ACGhostTrail* GhostTrail;  //GhostTrailClass에서 정의된 고스트트레일 저장 변수 

};
