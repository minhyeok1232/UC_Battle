// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CMovementComponent.generated.h"

UENUM()
enum class ESpeedType : uint8
{
	Walk=0, Run, Sprint, Max
};



// BP에서 추가되지 못하게 처리
//UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
UCLASS(ClassGroup = (Custom))
class U06_BATTLE_API UCMovementComponent : public UActorComponent
{
	GENERATED_BODY()

private:  // ActorComponent는 블프에디터에서 고칠수 있게
	UPROPERTY(EditAnywhere, Category = "Speed")
		float Speed[(int32)ESpeedType::Max] = { 200,400,600 };

public:	
	UCMovementComponent();

protected:
	virtual void BeginPlay() override;

public: // WASD Key
	void OnMoveForward(float InAxis);
	void OnMoveRight(float InAxis);
	void OnHorizontalLook(float InAxis);
	void OnVerticalLook(float InAxis);

public:  // Camera방향 회전
	void EnableControlRotation();
	void DisableControlRotation();

public:  // 걷는 속도
	void OnWalk();
	void OnRun();
	void OnSprint();
	void SetSpeed(ESpeedType InType);

private:
	class ACharacter* OwnerCharacter;
	bool  bCanMove       = true;  //
	bool  bFixedCamera   = true;  //
	bool  bTopViewCamera = false;

public:
	FORCEINLINE bool CanMove() { return bCanMove; }
	FORCEINLINE void Move() { bCanMove = true; }
	FORCEINLINE void Stop() { bCanMove = false; }

	FORCEINLINE float GetWalkSpeed() { return Speed[(int32)ESpeedType::Walk]; }
	FORCEINLINE float GetRunSpeed() { return Speed[(int32)ESpeedType::Run]; }
	FORCEINLINE float GetSprintSpeed() { return Speed[(int32)ESpeedType::Sprint]; }

	FORCEINLINE bool GetFixedCamera() { return bFixedCamera; }
	FORCEINLINE void EnableFixedCamera() { bFixedCamera = true; }
	FORCEINLINE void DisableFixedCamera() { bFixedCamera = false; }

	FORCEINLINE void EnableTopViewCamera()  { bTopViewCamera = true; }
	FORCEINLINE void DisableTopViewCamera() { bTopViewCamera = false; }


};
