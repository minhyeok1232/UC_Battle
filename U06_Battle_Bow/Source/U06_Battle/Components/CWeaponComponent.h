// CS ����
// 1. const�� ���� ����
//    1) ���������� const  :  const int* p , const *int p, int* const p ���
//    2) �Լ������� const  :  const�� �Լ��տ� �ִ� ���, �Լ��ڿ� �ִ� ���
//
// 2. vector�� ����� ����    : AnyData
//    1) push_back()�Լ�����
//    2) at()�Լ� ����            
//
// 3. VTABLE ����
//
// 4. class�� �Ҹ��ڿ��� virtual�� ������? (��Ӱ���� ����� �ҷ����� ���� ���� �ϱ�)
//    
// 5. �޸𸮱������� �Լ��� Call������ ���ؿ� �׿����� ����

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Weapons/CWeaponData.h"
#include "CWeaponComponent.generated.h"

// ����
UENUM(BlueprintType)
enum class EWeaponType : uint8
{
	Fist,Sword,Hammer,Tornado,Warp,Around,Bow,Max
};
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FWeaponTypeChanged, EWeaponType, InPrevType, EWeaponType, InNewType);

UCLASS( ClassGroup=(Custom) )
class U06_BATTLE_API UCWeaponComponent : public UActorComponent
{
	GENERATED_BODY()
//-------------------------------
// ������Ʈ or �ø��������
//-------------------------------
private:
	UPROPERTY(EditAnywhere, Category = "DataAsset")
		class UCWeaponAsset* DataAssets[(int32)EWeaponType::Max];

private: // �����Ϳ��¿��� ������ Ŭ������ ���� -->PlugIn 
	UPROPERTY()
		class UCWeaponData* Datas[(int32)EWeaponType::Max];

public: // ABP,Player,Enemy
	FWeaponTypeChanged OnWeaponTypeChanged;


//------------------------------
// �𸮾� �����Լ�
//------------------------------
public:	
	UCWeaponComponent();
protected:
	virtual void BeginPlay() override;
public:
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;



//------------------------------
// User���� �Լ�
//------------------------------
public:  // Player�� InputCommand���� ȣ��
	void SetUnarmedMode();
	void SetFistMode();
	void SetSwordMode();
	void SetHammerMode();
	void SetTornadoMode();
	void SetWarpMode();
	void SetAroundMode();
	void SetBowMode();
private:
	bool IsIdleMode();
	void SetMode(EWeaponType InType);
	void ChangeType(EWeaponType InType);
private:
	void  CheckTopViewCamera(EWeaponType InType);

public: // DoAction
	void DoAction();


public:
	class ACAttachment* GetAttachment();
	class UCEquipment*  GetEquipment();
	class UCDoAction*   GetDoAction();
	class UCSubAction*  GetSubAction();
	class UCSubAction*  GetSubAction(EWeaponType InType);

public: // Bow�� AI������ ����ϱ����� BP Callable�� ����
	UFUNCTION(BlueprintCallable)
		void  SubAction_Pressed();
	UFUNCTION(BlueprintCallable)
		void  SubAction_Released();


//------------------------------
// User���� ���� ����
//------------------------------
private:
	class ACharacter* OwnerCharacter;
	EWeaponType Type = EWeaponType::Max;
	class UCMovementComponent* Movement;
	class UCStateComponent* State;

//------------------------------
// inline�Լ�
//------------------------------
public:
	FORCEINLINE bool IsUnarmedMode() { return Type == EWeaponType::Max; }
	FORCEINLINE bool IsFistMode()    { return Type == EWeaponType::Fist; }
	FORCEINLINE bool IsSwordMode()   { return Type == EWeaponType::Sword; }
	FORCEINLINE bool IsHammerMode()  { return Type == EWeaponType::Hammer; }
	FORCEINLINE bool IsTornadoMode() { return Type == EWeaponType::Tornado; }
	FORCEINLINE bool IsWarpMode()    { return Type == EWeaponType::Warp; }
	FORCEINLINE bool IsAroundMode()  { return Type == EWeaponType::Around; }
	FORCEINLINE bool IsBowMode()     { return Type == EWeaponType::Bow; }
};

