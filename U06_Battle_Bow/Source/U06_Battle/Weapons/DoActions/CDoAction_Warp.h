// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Weapons/CDoAction.h"
#include "CDoAction_Warp.generated.h"

// UObject�ε� ��ӵȰ��� ����ȭ�Ǿ� �ֱ⶧���� ������ ����ȭ����
UCLASS(Blueprintable)
class U06_BATTLE_API UCDoAction_Warp : public UCDoAction
{
	GENERATED_BODY()
	
public:  // Decal, AI(���ݱ��)
	void BeginPlay
	(
		class ACharacter* InOwner,
		class ACAttachment* InAttachment,
		class UCEquipment* InEquipment,
		class TArray<FDoActionData>& InDoActionData,
		class TArray<FHitData>& InHitData
	) override;
	void Tick(float InDeltaTime)  override;

public:
	void DoAction()       override;
	void Begin_DoAction() override;
	void End_DoAction()   override;
private:
	bool GetCursorLocationAndRotation(FVector& OutLocation, FRotator& OutRotation);

private:
	class UDecalComponent*         Decal;
	class APlayerController*       PlayerController;
	class UCAIBehaviorComponent*   Behavior;  // AI�� ��� Comp
	FVector MoveToLocation = FVector::ZeroVector;
};
