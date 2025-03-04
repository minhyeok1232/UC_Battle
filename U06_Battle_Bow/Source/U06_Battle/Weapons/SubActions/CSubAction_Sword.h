// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Weapons/CSubAction.h"
#include "Weapons/CWeaponStructures.h"
#include "Kismet/KismetSystemLibrary.h"
#include "CSubAction_Sword.generated.h"

/**
 * 
 */
UCLASS()
class U06_BATTLE_API UCSubAction_Sword : public UCSubAction
{
	GENERATED_BODY()
public:
    UCSubAction_Sword();
public:
    virtual void BeginPlay(class ACharacter* InOwner, class ACAttachment* InAttachment, class UCDoAction* InDoAction) override;

private:
    UPROPERTY(EditDefaultsOnly, Category = "Trace")  // Tick에서 이용
        float Distance = 1000.0f;
    UPROPERTY(EditDefaultsOnly, Category = "Trace")
        float Speed = 20.0f;
    UPROPERTY(EditDefaultsOnly, Category = "Trace")
        TEnumAsByte<EDrawDebugTrace::Type> DrawDebug;

private:
    UPROPERTY(EditDefaultsOnly, Category = "Action")
        FDoActionData ActionData;
    UPROPERTY(EditDefaultsOnly, Category = "Action")
        FHitData HitData;
private:
    UPROPERTY(EditAnywhere, Category = "Add-On")
        TSubclassOf<class ACGhostTrail> GhostTrailClass;
public: // 마우스
    virtual void Pressed()   override;
    virtual void Released()  override;
private:
    UFUNCTION()
        void OnAttachmentBeginOverlap(class ACharacter* InAttacker, AActor* InAttackCuaser, class ACharacter* InOther);
    UFUNCTION()
        void OnAttachmentEndCollision();
public:
    virtual void Begin_SubAction_Implementation() override;
    virtual void End_SubAction_Implementation() override;
    virtual void Tick_Implementation(float InDeltaTime) override;

private:
    class  ACGhostTrail* GhostTrail;
    TArray<class ACharacter*> Hit;          // Hit된 Actor보관
    TArray<class ACharacter*> Overlapped;   // Overlapped된 Actor보관
private:   // 순간이동시 필요 데이타
    bool   bMoving = false;
    FVector Start;
    FVector End;
};
