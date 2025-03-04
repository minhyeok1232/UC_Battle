// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ICharacter.h"
#include "Components/CStateComponent.h"
#include "GameFramework/Character.h"
#include "Weapons/CWeaponstructures.h"
#include "CEnemy.generated.h"

UCLASS()
class U06_BATTLE_API ACEnemy 
	: public ACharacter
	, public IICharacter  // Dead
{
	GENERATED_BODY()

public:
	ACEnemy();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void  Tick(float DeltaTime) override;
	virtual void  SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	virtual float TakeDamage(float DamageAmount, struct FDamageEvent const& DamageEvent,
		                     class AController* EventInstigator, AActor* DamageCauser) override;
protected:
	UPROPERTY(VisibleAnywhere)
		class UCMovementComponent* Movement;
	UPROPERTY(VisibleAnywhere)
		class UCStateComponent*    State;
	UPROPERTY(VisibleAnywhere)
		class UCMontageComponent* Montages;
	UPROPERTY(VisibleAnywhere)
		class UCStatusComponent*   Status;

private:
	UPROPERTY(EditAnywhere)
		FLinearColor OriginColor = FLinearColor::Black;

private:
	UFUNCTION()
		void  OnStateTypeChanged(EStateType InPrevType, EStateType InNewType);
	UFUNCTION()  // SetTimer()에 바인딩
		void  RestoreColor(); 
private:
	    void BackStep();
		void Roll();
		void Hit();
		void Dead();

public:  // 인터페이스에서 상속 받은 함수 override
	    virtual void End_Hit()   override;
	    virtual void End_Dead()  override;

public:
	struct FDamageData
	{
		float	power = 0.0f;
		class	ACharacter* Character;
		class	AActor*    Causer;
		struct  FActionDamageEvent* Event;
	};
	FDamageData    Damage;  //FActionDamageEvent의 데이터와, TakeDamage()변수들 저장 
	FTimerHandle   RestoreColor_TimerHandle;
};
