// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Weapons/CWeaponstructures.h"
#include "NiagaraDataInterfaceExport.h"
#include "CAura.generated.h"

// 나이아가라  : 모듈에 라이브러리 추가 : PublicDependencyModuleNames.Add("Niagara");     
// INiagaraParticleCallbackHandler  : Interface
// --> 에미터(입자), 파티클을 이용하여 : Hit
// Callback : 누군가에 의해 불려지고 다시 원위치 (델리게이터보다 먼저)
// --> 함수포인터
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
private: // Hit관련 데이터
	UPROPERTY(EditDefaultsOnly, Category = "Damage")
	FHitData HitData;
	UPROPERTY(EditDefaultsOnly, Category = "Damage")
	float DamageInterval = 0.1f;


	
public:	
	ACAura();

protected:     
	virtual void BeginPlay() override;

private:
	UFUNCTION()   // 나이아가라 Effect종료시 Noti해줄 함수를 바인딩
		void OnSystemFinished(class UNiagaraComponent* PSyetem);


//public:
//	/** This function is called once per tick with the gathered particle data. It will not be called if there is no particle data to call it with. */
//	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Niagara")
//		void ReceiveParticleData(const TArray<FBasicParticleData>& Data, UNiagaraSystem* NiagaraSystem);
public:  // 나이아가라 파티클에 대한 정보를 Callback을 통해 불려진다 --> 에셋 모듈을 정의
		virtual void ReceiveParticleData_Implementation(const TArray<FBasicParticleData>& Data, UNiagaraSystem* NiagaraSystem)  override;

private: // 콜리더의 콜리젼 바인딩용
	UFUNCTION()
	void OnComponentBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp,
		int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION()
	void OnComponentEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp,
		int32 OtherBodyIndex);
private:
	TArray<class ACharacter*> Hit;  // BeginOverlap에서 히트된 데이터 저장
	FTimerHandle TimerHandle;
};
