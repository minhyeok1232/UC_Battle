// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NiagaraDataInterfaceExport.h"
#include "Weapons/CWeaponstructures.h"
#include "CThornObject.generated.h"

UCLASS()
class U06_BATTLE_API ACThornObject : public AActor, public INiagaraParticleCallbackHandler
{
	GENERATED_BODY()
/////////////////////////////////////
/// Component
////////////////////////////////////
private: 
	UPROPERTY(VisibleDefaultsOnly)
		class USceneComponent* Root;
	UPROPERTY(VisibleDefaultsOnly)
		class UStaticMeshComponent* MeshComp;  // UNiagaraSystem
	UPROPERTY(VisibleDefaultsOnly)
		class UNiagaraComponent* Niagara;  // UNiagaraSystem
	
private:
	UPROPERTY(EditDefaultsOnly, Category = "Hit")
	FHitData HitData;

private:
	UPROPERTY(EditDefaultsOnly, Category = "Niagara")
		class UStaticMesh*  NiagaraMesh;   // ������X,
	UPROPERTY(EditDefaultsOnly, Category = "Niagara")
		FRotator  NiagaraMeshRotation;
private:
	UPROPERTY(EditDefaultsOnly, Category = "Niagara")
		class UFXSystemAsset*  CollisionEffect;
	UPROPERTY(EditDefaultsOnly, Category = "Niagara")
		FTransform  CollisionEffectTransform;  // 
public:	
	ACThornObject();
protected:
	virtual void BeginPlay() override;
private:
	UFUNCTION()   // ���̾ư��� Effect����� Noti���� �Լ��� ���ε�
		void OnSystemFinished(class UNiagaraComponent* PSyetem);

public:  // ���̾ư��� ��ƼŬ�� ���� ������ Callback�� ���� �ҷ����� --> ���� ����� ����
	virtual void ReceiveParticleData_Implementation(const TArray<FBasicParticleData>& Data, UNiagaraSystem* NiagaraSystem)  override;

private:
	FVector         BoxExtent;

};
