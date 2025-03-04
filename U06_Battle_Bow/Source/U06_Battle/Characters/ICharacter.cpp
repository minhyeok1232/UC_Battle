#include "Characters/ICharacter.h"
#include "Global.h"
#include "GameFramework/Character.h"
#include "Components/SkeletalMeshComponent.h"
#include "Materials/MaterialInstanceDynamic.h"

void IICharacter::Create_DynamicMaterial(ACharacter* InCharacter)
{
	// 머터리얼은 인스턴스가 되어 있어야 함
	// 현재 머터리얼을 다이내믹머터리얼 인스턴스
	for (int32 i = 0; i < InCharacter->GetMesh()->GetMaterials().Num(); i++)
	{
		UMaterialInterface* material = InCharacter->GetMesh()->GetMaterials()[i];
		InCharacter->GetMesh()->SetMaterial(i, UMaterialInstanceDynamic::Create(material, InCharacter));
	}
}

void IICharacter::Change_Color(ACharacter* InCharacter, FLinearColor InColor)
{
	for (UMaterialInterface* material : InCharacter->GetMesh()->GetMaterials())
	{
		UMaterialInstanceDynamic* instance = Cast<UMaterialInstanceDynamic>(material);
		if (!!instance)
			instance->SetVectorParameterValue("BodyColor", InColor);
	}
}
