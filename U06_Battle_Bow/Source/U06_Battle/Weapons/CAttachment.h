// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CAttachment.generated.h"

// CAttachement --> BP_CAttachement_Sword
//                  BP_CAttachement_Hammer
// ����� --> �ʿ��� �μ��� ������Ų��
// CAttachment�� ��ӹ��� BP_Sword�� �����
// �׺������ٰ� ���⸦ �ٿ�  ����, ���⿡������ AttachTo()�Լ���
// �̿��Ͽ�  �޽��� ���

// Collision���� ����������  : DoAction --> Attachemt
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FAttachmentBeginCollision);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FAttachmentEndCollision);

// Hit���� ����������
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
        class ACharacter* OwnerCharacter;           // Parent����
    UPROPERTY(BlueprintReadOnly, Category = "Game")
        TArray<class UShapeComponent*> Collisions;  // Collison ����
public:	
	ACAttachment();

protected:
	virtual void BeginPlay() override;
public:
    UFUNCTION(BlueprintNativeEvent)
        void OnBeginEquip();                 // Call User defined C++ Source
    virtual void OnBeginEquip_Implementation() {};   // C������ ���� 
    UFUNCTION(BlueprintNativeEvent)
        void OnEndEquip();
    virtual    void OnEndEquip_Implementation() {};
    UFUNCTION(BlueprintNativeEvent)
        void OnUnEquip();
    virtual void OnUnEquip_Implementation() {};

public: // C++������ Hit�Ȱ��� �׻� ���ε��ؼ� ���
    UFUNCTION()
        void OnComponentBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    UFUNCTION()
        void  OnComponentEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);



// BP���� C�� �Լ� AttachTo�� Call
protected:
    UFUNCTION(BlueprintCallable, Category = "Attach") // Sword,Hammer...
        void AttachTo(FName InSocketName);
    UFUNCTION(BlueprintCallable, Category = "Attach") // Sword,Hammer...
        void AttachToCollision(FName InSocketName);



public:
    void    SetUp();
    //���������ͺ���
public:  
    FAttachmentBeginCollision OnAttachmentBeginCollision;  // DoAction
    FAttachmentEndCollision   OnAttachmentEndCollision;    // DoAction
    FAttachmentBeginOverlap   OnAttachmentBeginOverlap;    // DoAction
    FAttachmentEndOverlap     OnAttachmentEndOverlap;      // DoAction

public:
    void OnCollisions();
    void OffCollisions();


protected:
    class UCMovementComponent* Movement; // Char���� ���� ��������
    class UCStateComponent*    State;    // Char���� ���� ��������
    
};
