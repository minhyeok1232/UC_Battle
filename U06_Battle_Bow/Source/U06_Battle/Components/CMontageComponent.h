// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/DataTable.h"
#include "Components/CStateComponent.h"
#include "CMontageComponent.generated.h"

// csv�� ���������̺��� ����� ���� ����
// DT_Player.csv����

USTRUCT()
struct FMontagesData : public FTableRowBase
{
	GENERATED_BODY()
public:  // UE���� �Է°����ϵ���
	UPROPERTY(EditAnywhere)
		int32 Index;
	UPROPERTY(EditAnywhere)
		EStateType Type;
	UPROPERTY(EditAnywhere)
		class UAnimMontage* Montage;
	UPROPERTY(EditAnywhere)
		float    PlayRate = 1.0f;

};

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class U06_BATTLE_API UCMontageComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	UCMontageComponent();

protected:
	virtual void BeginPlay() override;
private:
	UPROPERTY(EditAnywhere, Category = "DataTable")
		UDataTable* DataTable;
private:  //������ ��Ÿ�����, PlayAnimMontage
	UFUNCTION()
		void OnMontageNotifyBegin(FName NotifyName, const FBranchingPointNotifyPayload& BranchingPointPayload);
	UFUNCTION()
		void OnMontageEnded(UAnimMontage* Montage, bool bInterrupted);

public:
	FMontagesData*      GetMontage(EStateType InType,int32 Index = 0);
	class UAnimMontage* GetHitMontage(int32 Index = 0);
public:
	void PlayBackStepMode();    // CPlayer BackStep() Call  --> PlayAnimMontage
	void PlayDeadMode();        // CPlayer���� Hit()�Ǵ� Call
	void PlayRollMode();        // CPlayer Roll() Call      --> PlayAnimMontage

public:
	void PlayAnimMontage(UAnimMontage* MontageToPlay, float InPlayRate);
private:
	void PlayAnimMontage(EStateType InType);


private:
	TArray<FMontagesData*>   Datas;
	//FMontagesData* Datas[(int32)EStateType::Max];
	class ACharacter* OwnerCharacter;
};
