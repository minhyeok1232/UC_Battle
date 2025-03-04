#include "Notifies/CAnimNotifyState_CameraAnim.h"
#include "Global.h"
#include "GameFramework/Character.h"
#include "GameFramework/PlayerController.h"
#include "Camera/PlayerCameraManager.h"
#include "Camera/CameraAnim.h"
#include "Weapons/AddOns/CCameraModifier.h"  // CameraAnim( 3개위치)



FString UCAnimNotifyState_CameraAnim::GetNotifyName_Implementation() const
{
	return "CameraAnim";
}

void UCAnimNotifyState_CameraAnim::NotifyBegin(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float TotalDuration)
{
	Super::NotifyBegin(MeshComp, Animation, TotalDuration);
	
	CheckNull(MeshComp);
	CheckNull(MeshComp->GetOwner());
	CheckNull(CameraAnim);

	ACharacter* character = Cast<ACharacter>(MeshComp->GetOwner());
	CheckNull(character);

	APlayerController* controller = character->GetController<APlayerController>();
	CheckNull(controller);

	// 모디파이어
	UCameraModifier* modifier = controller->PlayerCameraManager->AddNewCameraModifier(UCCameraModifier::StaticClass());
	Modifier = Cast<UCCameraModifier>(modifier);

	// 나를 기준으로 CamraAnim
	ACharacter* target = character;
	if (Target.IsNull() == false)  // SoftRefernence로 대상 잡혀져 있는 경우
		target = Target.Get();

	// CA_Fist에 등록된 3개(0,0,0)
	FVector location = target->GetActorLocation();
	float   yaw = controller->GetControlRotation().Yaw;


	location = location + FRotator(0, yaw, 0).RotateVector(LocationOffset);
	Modifier->SetLocation(location);
	Modifier->SetRotation(FRotator(PitchOffset, yaw, 0));
	controller->SetControlRotation(FRotator(0, controller->GetControlRotation().Yaw, 0));

	// 카메라 모디파이어를 이용하여 위치,회전 수정
	// (0,0,0)        (300,0,100) (300,0,100) (300,0,100)
	// (location) -->   ?              ?          ?

	controller->PlayerCameraManager->PlayCameraAnim(CameraAnim, PlayRatio, 1, BlendInTime,
		BlendOutTime, false, false, 0,
		ECameraShakePlaySpace::UserDefined, controller->GetControlRotation());


}

void UCAnimNotifyState_CameraAnim::NotifyEnd(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation)
{
	Super::NotifyEnd(MeshComp, Animation);

	CheckNull(MeshComp);
	CheckNull(MeshComp->GetOwner());

	ACharacter* character = Cast<ACharacter>(MeshComp->GetOwner());
	CheckNull(character);

	APlayerController* controller = character->GetController<APlayerController>();
	CheckNull(controller);

	controller->PlayerCameraManager->RemoveCameraModifier(Modifier);

}
