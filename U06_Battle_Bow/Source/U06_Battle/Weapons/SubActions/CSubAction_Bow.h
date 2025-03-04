// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Weapons/CSubAction.h"
#include  "Components/TimelineComponent.h"
#include "CSubAction_Bow.generated.h"

USTRUCT(BlueprintType)
struct FAimData
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere)
		float TargetArmLength = 150.0f; // 기본 300-400
	UPROPERTY(EditAnywhere)        
		FVector SocketOffset = FVector(0,30,10); // 카메라에 의해 충돌 방지
	UPROPERTY(EditAnywhere)
		bool bEnableCameraLag = false;  // 총/화살 : false --> 커메라 TargetAmLeng
	UPROPERTY(EditAnywhere)  // 카메라에 의해 충돌반지
		FVector CameraLocation = FVector(0, 0, 0);
};
UCLASS(Blueprintable)
class U06_BATTLE_API UCSubAction_Bow : public UCSubAction
{
	GENERATED_BODY()
private:
	UPROPERTY(EditAnywhere, Category = "Aiming")
		class UCurveVector* Curve;   // X,Y,Z  LinearColor :4, Float : 1
	UPROPERTY(EditAnywhere, Category = "Aiming")
		FAimData  AimData;
	UPROPERTY(EditAnywhere, Category = "Aiming")
		float  AimingSpeed = 200.0f; // TimeLine시 사용데이터

public:
	virtual void BeginPlay(class ACharacter* InOwner, class ACAttachment* InAttachment, class UCDoAction* InDoAction) override;
	virtual void Tick_Implementation(float InDeltaTime) override;
public: // 마우스
	virtual void Pressed()  override;
	virtual void Released() override;

private:  // TimeLine사용시 Binding될 함수
	UFUNCTION()
       void OnAiming(FVector output);
private:  // Actor에서는  UTimelineComponent 사용가능 , UObject에서는 사용안됨 
	FTimeline Timeline;
private:
	FAimData  OriginData;  // Aim되기전 카메라 관련 정보를 저장
private:
	class USpringArmComponent* SpringArm;  // Char에서 사용된것을 보관
	class UCameraComponent*    Camera;     // Char에서 사용된것을 보관
private:
	float* Bend = nullptr;
};
