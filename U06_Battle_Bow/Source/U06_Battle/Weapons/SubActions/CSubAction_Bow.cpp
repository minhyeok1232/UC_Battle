// Fill out your copyright notice in the Description page of Project Settings.


#include "Weapons/SubActions/CSubAction_Bow.h"
#include "Global.h"
#include "AIController.h"     // AI시 Enemy 공격이 sword,warp,bow
#include "GameFramework/Character.h"
#include "GameFramework/PlayerController.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "Components/CStateComponent.h"
#include "Weapons/Attachments/CAttachment_Bow.h"



void UCSubAction_Bow::BeginPlay(class ACharacter* InOwner, class ACAttachment* InAttachment,class UCDoAction* InDoAction)
{
	Super::BeginPlay(InOwner, InAttachment, InDoAction);

	// Player에서 사용된거 보관
	{
		SpringArm = CHelpers::GetComponent<USpringArmComponent>(InOwner);
		Camera    = CHelpers::GetComponent<UCameraComponent>(InOwner);
	}
    // Curve관련
	{
       FOnTimelineVector timeline;
		timeline.BindUFunction(this,"OnAiming");
		Timeline.AddInterpVector(Curve,timeline);
		Timeline.SetPlayRate(AimingSpeed);
	}
    // CAttachment_Bow에서 Bend의 주소를 가져옴
	ACAttachment_Bow* bow = Cast<ACAttachment_Bow>(InAttachment);
	if (!!bow)
		Bend = bow->GetBend();
	
}

void UCSubAction_Bow::Tick_Implementation(float InDeltaTime)
{
	Super::Tick_Implementation(InDeltaTime);
	Timeline.TickTimeline(InDeltaTime);
}

void UCSubAction_Bow::Pressed()
{
   CheckTrue(State->IsSubActionMode()); // SubAction중 일때는 리턴

   // 현재 Owner가  Enemy인지 Check
	if (!!Owner->GetController<AAIController>())
	{
		bInAction = true;
		State->OnSubActionMode();
		return;
	}
   // Player관련된것을 처리
	CheckNull(SpringArm);
	CheckNull(Camera);
	
	bInAction = true;
	State->OnSubActionMode();

	// 1. Aim이 종료되면 원위치 하여 주기위래 카메라정보를 OriginData변수에 저장
	//     현재카메라 데이터를 OriginData변수에 저장
	{
   		OriginData.TargetArmLength    = SpringArm->TargetArmLength;
   		OriginData.SocketOffset       = SpringArm->SocketOffset;
   		OriginData.bEnableCameraLag   = SpringArm->bEnableCameraLag;
   		OriginData.CameraLocation     = Camera->GetRelativeLocation();
   	//FString str = FString::Printf(L"Camera T: %f %f", SpringArm->TargetArmLength, AimData.TargetArmLength);
   	//CLog::Print(str);
	}
    // 2. FAimData에 있는 값으로 변경
   {
   		SpringArm->TargetArmLength    = AimData.TargetArmLength;
   		SpringArm->SocketOffset       = AimData.SocketOffset;
   		SpringArm->bEnableCameraLag   = AimData.bEnableCameraLag;
   		Camera->SetRelativeLocation(AimData.CameraLocation);
   }
	
    // Timeline 동작
    Timeline.PlayFromStart();
}

void UCSubAction_Bow::Released()
{
	CheckFalse(State->IsSubActionMode()); // SubAction이 아니면 리턴

	// 현재 Owner가  Enemy인지 Check
	if (!!Owner->GetController<AAIController>())
	{
		bInAction = false;
		State->OffSubActionMode();
		return;
	}
    // Play인경우는 마우스키 입력
	CheckNull(SpringArm);
	CheckNull(Camera);
	
	bInAction = false;
	State->OffSubActionMode();

	// 기존데이터로 변경
	{
		SpringArm->TargetArmLength  = OriginData.TargetArmLength;
		SpringArm->SocketOffset     = OriginData.SocketOffset;
		SpringArm->bEnableCameraLag = OriginData.bEnableCameraLag;
		Camera->SetRelativeLocation(OriginData.CameraLocation);
	}

//	Timeline.ReverseFromEnd();
	
}
// Timeline에서 바인딩값  : FOV값이 --> float,vector,
//  Output.X = (90~45도)   FOV값
//  Output.Y = (0-100도) Pitch
void UCSubAction_Bow::OnAiming(FVector Output)
{
	Camera->FieldOfView = Output.X;

	if (!!Bend)   // Bend의 실제 위치는  CAnimInstance_Bow
		*Bend = Output.Y;
}
