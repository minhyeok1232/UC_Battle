// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CStateComponent.generated.h"

UENUM()
enum class EStateType : uint8
{
	Idle=0, BackStep,Roll,Equip,Hit,Dead,Action,Max
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FStateTypeChanged, EStateType, InPrevType, EStateType, InNewType);

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class U06_BATTLE_API UCStateComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	UCStateComponent();

protected:
	virtual void BeginPlay() override;

public:
    void SetIdleMode();
    void SetBackStepMode();
    void SetRollMode();
    void SetEquipMode();
    void SetHitMode();
    void SetActionMode();
    void SetDeadMode();
private:
    void ChangeType(EStateType InType); // State°¡ ¹Ù²î¸é BroadCast
public:
    void  OnSubActionMode();
    void  OffSubActionMode();


public:
    FStateTypeChanged OnStateTypeChanged;

private:
    class ACharacter* OwnerCharacter;
    EStateType Type = EStateType::Idle;
    bool   bInSubActionMode = false;

public:
    FORCEINLINE bool IsIdleMode()     { return Type == EStateType::Idle; }
    FORCEINLINE bool IsBackStepMode() { return Type == EStateType::BackStep; }
    FORCEINLINE bool IsRollMode()     { return Type == EStateType::Roll; }
    FORCEINLINE bool IsEquipMode()    { return Type == EStateType::Equip; }
    FORCEINLINE bool IsHitMode()      { return Type == EStateType::Hit; }
    FORCEINLINE bool IsActionMode()   { return Type == EStateType::Action; }
    FORCEINLINE bool IsDeadMode()     { return Type == EStateType::Dead; }
    FORCEINLINE bool IsSubActionMode() { return bInSubActionMode; }


};
