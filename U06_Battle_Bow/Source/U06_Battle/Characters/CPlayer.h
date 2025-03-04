// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "ICharacter.h"
#include "Components/CStateComponent.h"
#include "CPlayer.generated.h"

UCLASS()
class U06_BATTLE_API ACPlayer 
	: public ACharacter
	, public IICharacter
{
	GENERATED_BODY()
// Comonent : 시리얼라이즈
private:
	UPROPERTY(VisibleAnywhere)
		class USpringArmComponent* SpringArm;
	UPROPERTY(VisibleAnywhere)
		class UCameraComponent* Camera;
private:
	UPROPERTY(VisibleAnywhere)
		class UCMovementComponent* Movement;
	UPROPERTY(VisibleAnywhere)
		class UCStateComponent* State;
	UPROPERTY(VisibleAnywhere)
		class UCMontageComponent* Montages;
	UPROPERTY(VisibleAnywhere)
		class UCWeaponComponent* Weapon;


// 기본제공함수 : 
public:
	ACPlayer();
protected:
	virtual void BeginPlay() override;
public:	
	virtual void Tick(float DeltaTime) override;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
// User정의함수 : 
private:
	UFUNCTION()
		void OnStateTypeChanged(EStateType InPrevType, EStateType InNewType);

private:
	void  OnAvoid();
private:
	void  BackStep();
	void  Roll();
	void  Hitted();
public: // 인터페이스에서 상속받는 함수들
	virtual void End_Avoid() override;  
	virtual void End_Hit()   override;
	virtual void End_Dead()  override;
public:  // Sub Action
	void    OnRightButton();
	void    OffRightButton();
};
