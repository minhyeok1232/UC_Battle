// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Weapons/CDoAction.h"
#include "CDoAction_Bow.generated.h"

/**
 * 
 */
UCLASS()
class U06_BATTLE_API UCDoAction_Bow : public UCDoAction
{
	GENERATED_BODY()

private: // Begin/End : ȭ���� ��������� Create��
	UPROPERTY(EditAnywhere,Category="Arrow")
	  TSubclassOf<class ACArrow> ArrowClass;

public:
	UCDoAction_Bow();


	
public:
	virtual void BeginPlay
	(
		class ACharacter* InOwner,
		class ACAttachment* InAttachment,
		class UCEquipment* InEquipment,
		class TArray<FDoActionData>& InDoActionData,
		class TArray<FHitData>& InHitData
	) override;
	virtual void Tick(float InDeltaTime) override;; // ��ӹ޴°����� ó��
public: // �⺻���� �Ұ��� �� Ŭ������ ����, �������� ��ӹ޴°����� ó��
	virtual void DoAction() override;         
	virtual void Begin_DoAction() override;
	virtual void End_DoAction()  override;public:

public:
	virtual void OnBeginEquip() override;
	virtual void OnEndEquip() override;
	virtual void OnUnEquip()    override;
private:
	UFUNCTION()  // ACArrow -> CollisionCheck , Destrory �Ͼ��  Tarray���� ���� Arrows���� �ʿ�
		void OnArrowHit(class AActor* InCasuser, class ACharacter* InOtherCharacter);
	UFUNCTION()
		void OnArrowEndPlay(class ACArrow* InDestroyer);
private:   // Equip��
	void   CreateArrow();
	void   GetAttachedArrow(class  ACArrow*& arrow ); // Ȱ�� �߻����� Ȱ�� Create, �׷��� Check�ʿ�
public:   // ȭ������ Bend���� ����ġ  : Notify
	void   End_BowString();
	
private:
		class USkeletalMeshComponent* SkeletalMesh;
		class UPoseableMeshComponent* PoseableMesh;

private:  // ��Ƽ���� Bowstring
	bool    bAttachedString = true;
	FVector OriginLocation;
private:
	float* Bend = nullptr;
	const  bool* bEquipped;
	TArray<class ACArrow*> Arrows;	// ArrowClass���� assign�����͸� Spawn�� ���Ƴ�� ����ü
};
