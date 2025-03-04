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
		float TargetArmLength = 150.0f; // �⺻ 300-400
	UPROPERTY(EditAnywhere)        
		FVector SocketOffset = FVector(0,30,10); // ī�޶� ���� �浹 ����
	UPROPERTY(EditAnywhere)
		bool bEnableCameraLag = false;  // ��/ȭ�� : false --> Ŀ�޶� TargetAmLeng
	UPROPERTY(EditAnywhere)  // ī�޶� ���� �浹����
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
		float  AimingSpeed = 200.0f; // TimeLine�� ��뵥����

public:
	virtual void BeginPlay(class ACharacter* InOwner, class ACAttachment* InAttachment, class UCDoAction* InDoAction) override;
	virtual void Tick_Implementation(float InDeltaTime) override;
public: // ���콺
	virtual void Pressed()  override;
	virtual void Released() override;

private:  // TimeLine���� Binding�� �Լ�
	UFUNCTION()
       void OnAiming(FVector output);
private:  // Actor������  UTimelineComponent ��밡�� , UObject������ ���ȵ� 
	FTimeline Timeline;
private:
	FAimData  OriginData;  // Aim�Ǳ��� ī�޶� ���� ������ ����
private:
	class USpringArmComponent* SpringArm;  // Char���� ���Ȱ��� ����
	class UCameraComponent*    Camera;     // Char���� ���Ȱ��� ����
private:
	float* Bend = nullptr;
};
