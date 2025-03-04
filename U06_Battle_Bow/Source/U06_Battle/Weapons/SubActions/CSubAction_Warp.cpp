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
	// None대신 기본 Class가 디파인
	CameraActorClass = ACameraActor::StaticClass();
}

void UCSubAction_Warp::BeginPlay(class ACharacter* InOwner, class ACAttachment* InAttachment,
                                 class UCDoAction* InDoAction)
{
	// State/Move Component, Attach,Doaction --> Setting
	Super::BeginPlay(InOwner, InAttachment, InDoAction);

	// 현재 플레이어 콘트로러를 변수 저장
	PlayerController = InOwner->GetController<APlayerController>();
	// TopView로 사용될 카메라엑터 Spawn
    CameraActor = InOwner->GetWorld()->SpawnActor<ACameraActor>(CameraActorClass);
	// Pitch회전(위에서 아래로 보기)
	CameraActor->SetActorRotation(CameaAngle); 
	
	//카메라를 가져오고 Projection Mode
	UCameraComponent* camera = CHelpers::GetComponent<UCameraComponent>(CameraActor);
	camera->ProjectionMode = ProjectionMode;
	camera->OrthoWidth = OrthoWidth;   // AspectRatio : 1(가로) 0.75, 0.8
	camera->FieldOfView = FieldOfView;

}
void UCSubAction_Warp::Pressed()
{
	CheckNull(PlayerController);
	CheckTrue(State->IsSubActionMode());
	bInAction = true;
    State->OnSubActionMode();
	Movement->EnableTopViewCamera();

	// 우리가 만든 CamreaActor로 View변환
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

	// Ownere View변환
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




