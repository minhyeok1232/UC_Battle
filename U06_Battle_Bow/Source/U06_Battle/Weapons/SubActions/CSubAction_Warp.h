// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Weapons/CSubAction.h"
#include "CSubAction_Warp.generated.h"

/**
 * 
 */
UCLASS()
class U06_BATTLE_API UCSubAction_Warp : public UCSubAction
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly,Category="Camera")
		TSubclassOf<class ACameraActor> CameraActorClass;
	UPROPERTY(EditDefaultsOnly,Category="Camera")
		TEnumAsByte<ECameraProjectionMode::Type> ProjectionMode;
	UPROPERTY(EditDefaultsOnly,Category="Camera")
	    float FieldOfView = 90.0f ;
	UPROPERTY(EditDefaultsOnly,Category="Camera")
	    float CameraRelativeHeight= 1000.0f;
	UPROPERTY(EditDefaultsOnly,Category="Camera")
	    float OrthoWidth = 2000.0f;
private:  // Camera swiching��
	UPROPERTY(EditDefaultsOnly,Category="Camera")
	    float  BlendIn = 0.0f;

	UPROPERTY(EditDefaultsOnly,Category="Camera")
	    float BlendOut = 0.0f;
private:
	UPROPERTY(EditDefaultsOnly,Category="Camera")
	    FRotator  CameaAngle = FRotator(-90.0f,0.0f,0.0f);
public:
	UCSubAction_Warp();
public:
	virtual void BeginPlay(class ACharacter* InOwner, class ACAttachment* InAttachment, class UCDoAction* InDoAction) override;
	virtual void Tick_Implementation(float InDeltaTime) override;
public: // ���콺
	virtual void Pressed() override;
	virtual void Released() override;
private:
	class APlayerController* PlayerController;
	class ACameraActor*      CameraActor;
};
