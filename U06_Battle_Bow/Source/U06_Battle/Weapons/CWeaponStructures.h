// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CWeaponStructures.generated.h"

//-----------------------------------------------
// 무기장착관련 
//-----------------------------------------------
USTRUCT()
struct FEquipmentData
{
	GENERATED_BODY()

public:
    UPROPERTY(EditAnywhere)
        class UAnimMontage* Montage;
    UPROPERTY(EditAnywhere)
        float PlayRate = 1.0f;
    UPROPERTY(EditAnywhere)
        bool  bCanMove = true;
    UPROPERTY(EditAnywhere)
        bool  bUseControlRotation = true;

};
//-----------------------------------------------
// 공격관련 데이터
//-----------------------------------------------
USTRUCT()
struct FDoActionData
{
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
        class UAnimMontage* Montage;
    UPROPERTY(EditAnywhere)
        float PlayRate = 1.0f;
    UPROPERTY(EditAnywhere)
        bool  bCanMove = true;
    UPROPERTY(EditAnywhere)
        bool  bFixedCamera;
    // 파티클 , 나이아가라
    UPROPERTY(EditAnywhere)
        class UFXSystemAsset* Effect;
    UPROPERTY(EditAnywhere)
        FVector EffectLocation = FVector::ZeroVector;
    UPROPERTY(EditAnywhere)
        FVector EffectScale = FVector::OneVector;
public:
    void  DoAction(class ACharacter* InOwner);
};
//-----------------------------------------------
// Hit관련 데이터
// 1. Animation, 2. Sound, 3. 경직 4. Camera Shake
//-----------------------------------------------
USTRUCT()
struct FHitData
{
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
        class UAnimMontage* Montage;
    UPROPERTY(EditAnywhere)
        float PlayRate = 1.0f;
    UPROPERTY(EditAnywhere)
        float Power = 0.0f;         // Damage
    UPROPERTY(EditAnywhere)
        float Launch = 100.0f;
    UPROPERTY(EditAnywhere)
        float StopTime = 0.0f;    // Hit Stop
    UPROPERTY(EditAnywhere)
        class USoundWave* Sound;

    UPROPERTY(EditAnywhere)
        class UFXSystemAsset* Effect;
    UPROPERTY(EditAnywhere)
        FVector EffectLocation = FVector::ZeroVector;
    UPROPERTY(EditAnywhere)
        FVector EffectScale = FVector::OneVector;

public:
    void SendDamage(class ACharacter* InAttacker, AActor* InAttackCauser, class ACharacter* InOther, int32 InHitIndex=0);
    void PlayMontage(class ACharacter* InOwner);
    void PlayHitStop(UWorld* InWorld);
    void PlaySoundWave(class ACharacter* InOwner);
    void PlayEffect(UWorld* InWorld, const FVector& InLocation);
    void PlayEffect(UWorld* InWorld, const FVector& InLocation, const FRotator& InRotation);

public:
    TArray<APawn*>  StopPawns;
};
//-----------------------------------------------
// TakeDamage()를 Call할때 User가 정의힌 데이터를 보낼려면
// FDamageEvent를 상속 받아서 정의하면 된다
//-----------------------------------------------
USTRUCT()
struct FActionDamageEvent : public FDamageEvent
{
    GENERATED_BODY()
public:
    FHitData* HitData; // Hit데이터의 구조체
    int32     HitIndex = 0;
};


/**
 * 
 */
UCLASS()
class U06_BATTLE_API UCWeaponStructures : public UObject
{
	GENERATED_BODY()
	
};
