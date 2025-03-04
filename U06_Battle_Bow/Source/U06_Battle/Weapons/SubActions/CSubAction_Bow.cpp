// Fill out your copyright notice in the Description page of Project Settings.


#include "Weapons/SubActions/CSubAction_Bow.h"
#include "Global.h"
#include "AIController.h"     // AI�� Enemy ������ sword,warp,bow
#include "GameFramework/Character.h"
#include "GameFramework/PlayerController.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "Components/CStateComponent.h"
#include "Weapons/Attachments/CAttachment_Bow.h"



void UCSubAction_Bow::BeginPlay(class ACharacter* InOwner, class ACAttachment* InAttachment,class UCDoAction* InDoAction)
{
	Super::BeginPlay(InOwner, InAttachment, InDoAction);

	// Player���� ���Ȱ� ����
	{
		SpringArm = CHelpers::GetComponent<USpringArmComponent>(InOwner);
		Camera    = CHelpers::GetComponent<UCameraComponent>(InOwner);
	}
    // Curve����
	{
       FOnTimelineVector timeline;
		timeline.BindUFunction(this,"OnAiming");
		Timeline.AddInterpVector(Curve,timeline);
		Timeline.SetPlayRate(AimingSpeed);
	}
    // CAttachment_Bow���� Bend�� �ּҸ� ������
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
   CheckTrue(State->IsSubActionMode()); // SubAction�� �϶��� ����

   // ���� Owner��  Enemy���� Check
	if (!!Owner->GetController<AAIController>())
	{
		bInAction = true;
		State->OnSubActionMode();
		return;
	}
   // Player���õȰ��� ó��
	CheckNull(SpringArm);
	CheckNull(Camera);
	
	bInAction = true;
	State->OnSubActionMode();

	// 1. Aim�� ����Ǹ� ����ġ �Ͽ� �ֱ����� ī�޶������� OriginData������ ����
	//     ����ī�޶� �����͸� OriginData������ ����
	{
   		OriginData.TargetArmLength    = SpringArm->TargetArmLength;
   		OriginData.SocketOffset       = SpringArm->SocketOffset;
   		OriginData.bEnableCameraLag   = SpringArm->bEnableCameraLag;
   		OriginData.CameraLocation     = Camera->GetRelativeLocation();
   	//FString str = FString::Printf(L"Camera T: %f %f", SpringArm->TargetArmLength, AimData.TargetArmLength);
   	//CLog::Print(str);
	}
    // 2. FAimData�� �ִ� ������ ����
   {
   		SpringArm->TargetArmLength    = AimData.TargetArmLength;
   		SpringArm->SocketOffset       = AimData.SocketOffset;
   		SpringArm->bEnableCameraLag   = AimData.bEnableCameraLag;
   		Camera->SetRelativeLocation(AimData.CameraLocation);
   }
	
    // Timeline ����
    Timeline.PlayFromStart();
}

void UCSubAction_Bow::Released()
{
	CheckFalse(State->IsSubActionMode()); // SubAction�� �ƴϸ� ����

	// ���� Owner��  Enemy���� Check
	if (!!Owner->GetController<AAIController>())
	{
		bInAction = false;
		State->OffSubActionMode();
		return;
	}
    // Play�ΰ��� ���콺Ű �Է�
	CheckNull(SpringArm);
	CheckNull(Camera);
	
	bInAction = false;
	State->OffSubActionMode();

	// ���������ͷ� ����
	{
		SpringArm->TargetArmLength  = OriginData.TargetArmLength;
		SpringArm->SocketOffset     = OriginData.SocketOffset;
		SpringArm->bEnableCameraLag = OriginData.bEnableCameraLag;
		Camera->SetRelativeLocation(OriginData.CameraLocation);
	}

//	Timeline.ReverseFromEnd();
	
}
// Timeline���� ���ε���  : FOV���� --> float,vector,
//  Output.X = (90~45��)   FOV��
//  Output.Y = (0-100��) Pitch
void UCSubAction_Bow::OnAiming(FVector Output)
{
	Camera->FieldOfView = Output.X;

	if (!!Bend)   // Bend�� ���� ��ġ��  CAnimInstance_Bow
		*Bend = Output.Y;
}
