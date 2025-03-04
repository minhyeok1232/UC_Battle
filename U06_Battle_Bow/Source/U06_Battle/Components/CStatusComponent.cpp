#include "Components/CStatusComponent.h"
#include "Global.h"
#include "GameFramework/Character.h"

UCStatusComponent::UCStatusComponent()
{

}

void UCStatusComponent::BeginPlay()
{
	Super::BeginPlay();
	// 생성자에서 사용(X)
	OwnerCharacter = Cast<ACharacter>(GetOwner());
	Health = MaxHealth;
	
}

void UCStatusComponent::Damage(float InAmount)
{
	Health += (InAmount * -1.0f);
	Health = FMath::Clamp(Health, 0.0f, MaxHealth);
}

