// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CAttachment.generated.h"

// CAttachement --> BP_CAttachement_Sword
//                  BP_CAttachement_Hammer
// 무기는 --> 필요한 부서에 장착시킨다
// CAttachment를 상속받은 BP_Sword를 만들고
// 그블프에다가 무기를 붙여  놓고, 여기에서제공 AttachTo()함수를
// 이용하여  메쉬에 등록

// Collision관련 델리게이터  : DoAction --> Attachemt
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FAttachmentBeginCollision);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FAttachmentEndCollision);

// Hit관련 델리게이터
DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FAttachmentBeginOverlap, class ACharacter*, InAttacker, AActor*, InAttackCauser, class ACharacter*, InOther);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FAttachmentEndOverlap, class ACharacter*, InAttacker, class ACharacter*, InOther);


UCLASS()
class U06_BATTLE_API ACAttachment : public AActor
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
		class USceneComponent* Root;
    UPROPERTY(BlueprintReadOnly, Category = "Game")
        class ACharacter* OwnerCharacter;           // Parent저장
    UPROPERTY(BlueprintReadOnly, Category = "Game")
        TArray<class UShapeComponent*> Collisions;  // Collison 저장
public:	
	ACAttachment();

protected:
	virtual void BeginPlay() override;
public:
    UFUNCTION(BlueprintNativeEvent)
        void OnBeginEquip();                 // Call User defined C++ Source
    virtual void OnBeginEquip_Implementation() {};   // C에서는 정의 
    UFUNCTION(BlueprintNativeEvent)
        void OnEndEquip();
    virtual    void OnEndEquip_Implementation() {};
    UFUNCTION(BlueprintNativeEvent)
        void OnUnEquip();
    virtual void OnUnEquip_Implementation() {};

public: // C++에서는 Hit된것은 항상 바인딩해서 사용
    UFUNCTION()
        void OnComponentBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    UFUNCTION()
        void  OnComponentEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);



// BP에서 C의 함수 AttachTo를 Call
protected:
    UFUNCTION(BlueprintCallable, Category = "Attach") // Sword,Hammer...
        void AttachTo(FName InSocketName);
    UFUNCTION(BlueprintCallable, Category = "Attach") // Sword,Hammer...
        void AttachToCollision(FName InSocketName);



public:
    void    SetUp();
    //델리게이터변수
public:  
    FAttachmentBeginCollision OnAttachmentBeginCollision;  // DoAction
    FAttachmentEndCollision   OnAttachmentEndCollision;    // DoAction
    FAttachmentBeginOverlap   OnAttachmentBeginOverlap;    // DoAction
    FAttachmentEndOverlap     OnAttachmentEndOverlap;      // DoAction

public:
    void OnCollisions();
    void OffCollisions();


protected:
    class UCMovementComponent* Movement; // Char에서 사용된 무브컴프
    class UCStateComponent*    State;    // Char에서 사용된 무브컴프
    
};
