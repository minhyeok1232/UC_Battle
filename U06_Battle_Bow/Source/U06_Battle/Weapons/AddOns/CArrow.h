// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CArrow.generated.h"


// Arrow : Create는 다수 ( 데이터장변수 CDoaction_Bow)
// 델리게이터로 CDoaction_Bow연결  Hit시, Destrory될때 Arrows배열에 지우기 위해 (CoreDump 발생?)

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FProjectileHit, class AActor*, InCauser, class ACharacter*, InOtherCharacter);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FProjectileEndPlay, class ACArrow*, InDestroyer);
UCLASS()
class U06_BATTLE_API ACArrow : public AActor
{
	GENERATED_BODY()

private:
	UPROPERTY(VisibleDefaultsOnly)
		class UCapsuleComponent* Capsule;

	UPROPERTY(VisibleDefaultsOnly)
		class UProjectileMovementComponent* Projectile;
private:
	UPROPERTY(EditDefaultsOnly, Category = "LifeSpan")
		float LifeSpanAfterCollision = 1.0f;
	
public:	
	ACArrow();

protected:
	virtual void BeginPlay() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
private:
	UFUNCTION()
	void OnComponentHit(UPrimitiveComponent* HitComponent, AActor* OtherActor,
		UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);

public:
	void  Shoot(const FVector& InFoward);
	
public:
	FProjectileHit       OnHit;
	FProjectileEndPlay   OnEndPlay;
private:
	TArray<AActor*> Ignores;
public:
	FORCEINLINE  void AddIgnoreActor(AActor* InActor) { Ignores.AddUnique(InActor); }
};


