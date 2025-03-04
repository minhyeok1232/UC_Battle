#include "Weapons/SubActions/CSubAction_Warp.h"
#include "Global.h"
#include "GameFramework/Character.h"
#include "GameFramework/PlayerController.h"
#include "Components/CStateComponent.h"
#include "Components/CMovementComponent.h"
#include "Camera/CameraActor.h"
#include "Camera/CameraComponent.h"


UCSubAction_Warp::UCSubAction_Warp()
{
	// None��� �⺻ Class�� ������
	CameraActorClass = ACameraActor::StaticClass();
}

void UCSubAction_Warp::BeginPlay(class ACharacter* InOwner, class ACAttachment* InAttachment,
                                 class UCDoAction* InDoAction)
{
	// State/Move Component, Attach,Doaction --> Setting
	Super::BeginPlay(InOwner, InAttachment, InDoAction);

	// ���� �÷��̾� ��Ʈ�η��� ���� ����
	PlayerController = InOwner->GetController<APlayerController>();
	// TopView�� ���� ī�޶��� Spawn
    CameraActor = InOwner->GetWorld()->SpawnActor<ACameraActor>(CameraActorClass);
	// Pitchȸ��(������ �Ʒ��� ����)
	CameraActor->SetActorRotation(CameaAngle); 
	
	//ī�޶� �������� Projection Mode
	UCameraComponent* camera = CHelpers::GetComponent<UCameraComponent>(CameraActor);
	camera->ProjectionMode = ProjectionMode;
	camera->OrthoWidth = OrthoWidth;   // AspectRatio : 1(����) 0.75, 0.8
	camera->FieldOfView = FieldOfView;

}
void UCSubAction_Warp::Pressed()
{
	CheckNull(PlayerController);
	CheckTrue(State->IsSubActionMode());
	bInAction = true;
    State->OnSubActionMode();
	Movement->EnableTopViewCamera();

	// �츮�� ���� CamreaActor�� View��ȯ
	//PlayerController->SetViewTarget(CameraActor);
	PlayerController->SetViewTargetWithBlend(CameraActor,BlendIn);
}
void UCSubAction_Warp::Released()
{
	CheckNull(PlayerController);
	CheckFalse(State->IsSubActionMode());
	bInAction = false;
	State->OffSubActionMode();
	Movement->DisableTopViewCamera();

	// Ownere View��ȯ
	// PlayerController->SetViewTarget(Owner);
	PlayerController->SetViewTargetWithBlend(Owner,BlendOut);
}
void UCSubAction_Warp::Tick_Implementation(float InDeltaTime)
{
	Super::Tick_Implementation(InDeltaTime);
	CheckNull(PlayerController);
	CheckNull(CameraActor);



	
	FVector NewLocation = Owner->GetActorLocation() + FVector(0,0,this->CameraRelativeHeight);
	CameraActor->SetActorLocation(NewLocation);
}




