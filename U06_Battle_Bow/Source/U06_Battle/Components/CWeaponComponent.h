// CS 숙제
// 1. const의 사용법 정리
//    1) 변수에서의 const  :  const int* p , const *int p, int* const p 등등
//    2) 함수에서의 const  :  const가 함수앞에 있는 경우, 함수뒤에 있는 경우
//
// 2. vector를 만들어 보기    : AnyData
//    1) push_back()함수구현
//    2) at()함수 구현            
//
// 3. VTABLE 정리
//
// 4. class의 소멸자에서 virtual이 붙으면? (상속관계로 설명및 불려지는 순서 정리 하기)
//    
// 5. 메모리구조에서 함수를 Call했을때 스텍에 쌓여지는 순서

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Weapons/CWeaponData.h"
#include "CWeaponComponent.generated.h"

// 무기
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
// 컴포넌트 or 시리얼라이즈
//-------------------------------
private:
	UPROPERTY(EditAnywhere, Category = "DataAsset")
		class UCWeaponAsset* DataAssets[(int32)EWeaponType::Max];

private: // 데이터에셋에서 생성된 클래스를 저장 -->PlugIn 
	UPROPERTY()
		class UCWeaponData* Datas[(int32)EWeaponType::Max];

public: // ABP,Player,Enemy
	FWeaponTypeChanged OnWeaponTypeChanged;


//------------------------------
// 언리얼 제공함수
//------------------------------
public:	
	UCWeaponComponent();
protected:
	virtual void BeginPlay() override;
public:
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;



//------------------------------
// User정의 함수
//------------------------------
public:  // Player의 InputCommand에서 호출
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

public: // Bow인 AI에서도 사용하기위해 BP Callable로 만듬
	UFUNCTION(BlueprintCallable)
		void  SubAction_Pressed();
	UFUNCTION(BlueprintCallable)
		void  SubAction_Released();


//------------------------------
// User정의 내부 변수
//------------------------------
private:
	class ACharacter* OwnerCharacter;
	EWeaponType Type = EWeaponType::Max;
	class UCMovementComponent* Movement;
	class UCStateComponent* State;

//------------------------------
// inline함수
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

