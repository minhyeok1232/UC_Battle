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

private: // Begin/End : 화살을 계속적으로 Create함
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
	virtual void Tick(float InDeltaTime) override;; // 상속받는곳에서 처리
public: // 기본으로 할것은 현 클래스에 정의, 나머지는 상속받는곳에서 처리
	virtual void DoAction() override;         
	virtual void Begin_DoAction() override;
	virtual void End_DoAction()  override;public:

public:
	virtual void OnBeginEquip() override;
	virtual void OnEndEquip() override;
	virtual void OnUnEquip()    override;
private:
	UFUNCTION()  // ACArrow -> CollisionCheck , Destrory 일어나면  Tarray저장 변수 Arrows정리 필요
		void OnArrowHit(class AActor* InCasuser, class ACharacter* InOtherCharacter);
	UFUNCTION()
		void OnArrowEndPlay(class ACArrow* InDestroyer);
private:   // Equip시
	void   CreateArrow();
	void   GetAttachedArrow(class  ACArrow*& arrow ); // 활을 발사하자 활을 Create, 그래서 Check필요
public:   // 화살줄의 Bend값을 원위치  : Notify
	void   End_BowString();
	
private:
		class USkeletalMeshComponent* SkeletalMesh;
		class UPoseableMeshComponent* PoseableMesh;

private:  // 노티파이 Bowstring
	bool    bAttachedString = true;
	FVector OriginLocation;
private:
	float* Bend = nullptr;
	const  bool* bEquipped;
	TArray<class ACArrow*> Arrows;	// ArrowClass에서 assign데이터를 Spawn후 감아놀는 구조체
};
