// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Weapons/CWeaponstructures.h"
#include "NiagaraDataInterfaceExport.h"
#include "CAura.generated.h"

// ���̾ư���  : ��⿡ ���̺귯�� �߰� : PublicDependencyModuleNames.Add("Niagara");     
// INiagaraParticleCallbackHandler  : Interface
// --> ������(����), ��ƼŬ�� �̿��Ͽ� : Hit
// Callback : �������� ���� �ҷ����� �ٽ� ����ġ (���������ͺ��� ����)
// --> �Լ�������
UCLASS()
class U06_BATTLE_API ACAura : public AActor, public INiagaraParticleCallbackHandler

{
	GENERATED_BODY()

private:
	UPROPERTY(VisibleAnywhere)
		class USceneComponent* Root;   
	UPROPERTY(VisibleAnywhere)
		class UBoxComponent* Box;
	UPROPERTY(VisibleAnywhere)
		class UNiagaraComponent* Niagara;
private: // Hit���� ������
	UPROPERTY(EditDefaultsOnly, Category = "Damage")
	FHitData HitData;
	UPROPERTY(EditDefaultsOnly, Category = "Damage")
	float DamageInterval = 0.1f;


	
public:	
	ACAura();

protected:     
	virtual void BeginPlay() override;

private:
	UFUNCTION()   // ���̾ư��� Effect����� Noti���� �Լ��� ���ε�
		void OnSystemFinished(class UNiagaraComponent* PSyetem);


//public:
//	/** This function is called once per tick with the gathered particle data. It will not be called if there is no particle data to call it with. */
//	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Niagara")
//		void ReceiveParticleData(const TArray<FBasicParticleData>& Data, UNiagaraSystem* NiagaraSystem);
public:  // ���̾ư��� ��ƼŬ�� ���� ������ Callback�� ���� �ҷ����� --> ���� ����� ����
		virtual void ReceiveParticleData_Implementation(const TArray<FBasicParticleData>& Data, UNiagaraSystem* NiagaraSystem)  override;

private: // �ݸ����� �ݸ��� ���ε���
	UFUNCTION()
	void OnComponentBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp,
		int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION()
	void OnComponentEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp,
		int32 OtherBodyIndex);
private:
	TArray<class ACharacter*> Hit;  // BeginOverlap���� ��Ʈ�� ������ ����
	FTimerHandle TimerHandle;
};
