// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include  "Weapons/CWeaponStructures.h"
#include "CRotate_Object.generated.h"

UCLASS()
class U06_BATTLE_API ACRotate_Object : public AActor
{
	GENERATED_BODY()
	
public:	
	ACRotate_Object();

protected:
	virtual void BeginPlay() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
public:	
	virtual void Tick(float DeltaTime) override;

private:  // 컴포넌트
	UPROPERTY(VisibleAnywhere)
		class UCapsuleComponent* Capsule;
	UPROPERTY(VisibleAnywhere)
		class UParticleSystemComponent* Particle;

private:  // 원을 만들때 필요한 변수
	UPROPERTY(EditDefaultsOnly, Category = "Spawn")
		float Speed = 300.0f;
	UPROPERTY(EditDefaultsOnly, Category = "Spawn")
		FVector2D Distance = FVector2D(150,200);
	UPROPERTY(EditDefaultsOnly, Category = "Spawn")
		bool  bNegative;
	UPROPERTY(EditDefaultsOnly, Category = "Spawn")
		float DamageInterval = 0.1f;

private:
	UPROPERTY(EditDefaultsOnly, Category = "Damage")
		FHitData HitData;	
private: // Collider 바인딩
	UFUNCTION()
	void OnComponentBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
		UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
	UFUNCTION()
	void OnComponentEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
		UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
private:
	UFUNCTION()
		void SendMessage();
private:
	float Angle = 0.0f;
	FTimerHandle TimerHandle;
	TArray<ACharacter*> Hits;
	class  ACharacter* Owner;
};
