// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CGhostTrail.generated.h"

UCLASS()
class U06_BATTLE_API ACGhostTrail : public AActor
{
	GENERATED_BODY()
	
public:	
	ACGhostTrail();

private:  // Ghost에 입힐 색상관련
    UPROPERTY(EditDefaultsOnly, Category = "Capture")
        float StartDelay = 0.25f;
    UPROPERTY(EditDefaultsOnly, Category = "Capture")
        float Interval = 0.1f;
    UPROPERTY(EditDefaultsOnly, Category = "Capture")
        FLinearColor Color = FLinearColor(0, 1, 6, 1);
    UPROPERTY(EditDefaultsOnly, Category = "Capture")
        float Exponent = 1.0f;
    UPROPERTY(EditDefaultsOnly, Category = "Capture")
        FVector Scale = FVector(1.05f, 1.05f, 1.05f);
    UPROPERTY(EditDefaultsOnly, Category = "Capture")
        FVector ScaleAmount = FVector::ZeroVector;

private:  // Component
	UPROPERTY(VisibleDefaultsOnly)  //스켈레탈 Mesh를 복사해서
		class UPoseableMeshComponent* Mesh;  
private:
    UFUNCTION()
        void    RestoreMesh();

protected:
	virtual void BeginPlay() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override; // TimerHandle 제거

private:
	class        ACharacter* Owner;
    class        UMaterialInstanceDynamic* Material;
	FTimerHandle TimerHandle;   // Loop로 무한정 run한후, Destrory될때 Clear


};
