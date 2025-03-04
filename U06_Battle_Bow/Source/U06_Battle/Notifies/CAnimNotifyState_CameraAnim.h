// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "CAnimNotifyState_CameraAnim.generated.h"

/**
 * 
 */
UCLASS()
class U06_BATTLE_API UCAnimNotifyState_CameraAnim : public UAnimNotifyState
{
	GENERATED_BODY()
	
private:
	UPROPERTY(EditAnywhere, Category = "Camera")
		class UCameraAnim* CameraAnim; // CA_Fist (블프)
	UPROPERTY(EditAnywhere, Category = "Camera")
		float PlayRatio = 5.0f;
	UPROPERTY(EditAnywhere, Category = "Camera")
		float BlendInTime = 0.0f;
	UPROPERTY(EditAnywhere, Category = "Camera")
		float BlendOutTime = 0.0f;

private: // SoftObject : Spawn되지 않는 상태에서 선택을 할 수 있음
	UPROPERTY(EditAnywhere, Category = "Camera")
		TSoftObjectPtr<class ACharacter> Target;


private:
	UPROPERTY(EditAnywhere, Category = "Modifier")
		FVector LocationOffset = FVector(-400, 0, 90);

	UPROPERTY(EditAnywhere, Category = "Modifier")
		float PitchOffset = -15.0f;


public:
	FString GetNotifyName_Implementation() const override;   // Notify명
	virtual void NotifyBegin(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float TotalDuration) override;
	virtual void NotifyEnd(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation) override;

private:
	class UCCameraModifier* Modifier;  // 카메라의 FOV,Location,Rotation
};
