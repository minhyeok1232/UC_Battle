
#include "Notifies/CAnimNotify_End_BowString.h"
#include "Global.h"
#include "Components/CWeaponComponent.h"
#include "Weapons/CDoAction.h"
#include "Weapons/DoActions/CDoAction_Bow.h"

FString UCAnimNotify_End_BowString::GetNotifyName_Implementation() const
{
	return "End_BowString";
}

void UCAnimNotify_End_BowString::Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation)
{
	Super::Notify(MeshComp, Animation);
	CheckNull(MeshComp);
	CheckNull(MeshComp->GetOwner());

	// WeaponComponent를 통해서 명령전달 : 굳이 Interface사용(X)
	UCWeaponComponent* weapon = CHelpers::GetComponent<UCWeaponComponent>(MeshComp->GetOwner());
	CheckNull(weapon);
	CheckNull(weapon->GetDoAction());

	UCDoAction_Bow* bow = Cast<UCDoAction_Bow>(weapon->GetDoAction());
	CheckNull(bow);

	bow->End_BowString();

}
