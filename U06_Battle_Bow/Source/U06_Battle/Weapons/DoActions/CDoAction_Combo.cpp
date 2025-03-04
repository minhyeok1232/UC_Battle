#include "Weapons/DoActions/CDoAction_Combo.h"
#include "Global.h"
#include "GameFramework/Character.h"
#include "Components/CStateComponent.h"


void UCDoAction_Combo::DoAction()
{
	if (this->DoActionDatas.Num() == 0)
	{
		CLog::MessageDialog(" DoAction table[combo] missing");
		return;
	}
    
	// Combo�� ��Ƽ���̿��� bEnable�� Trueȣ ��
	if (bEnable)
	{
		bEnable = false;
		bExist  = true; // Combo���� 0
		return;
	}

	CheckFalse(State->IsIdleMode());
	Super::DoAction();  // bBeginAction = true;

	DoActionDatas[Index].DoAction(OwnerCharacter);
}
void UCDoAction_Combo::Begin_DoAction()
{
	Super::Begin_DoAction(); // bBeginAction = true;

	CheckFalse(bExist);
	bExist = false;      // Combo���� X

	DoActionDatas[++Index].DoAction(OwnerCharacter);


}

void UCDoAction_Combo::End_DoAction()
{
	Super::End_DoAction();
	Index = 0;
}

void UCDoAction_Combo::OnAttachmentBeginOverlap(class ACharacter* InAttacker, AActor* InAttackerCauser, class ACharacter* InOther)
{
	Super::OnAttachmentBeginOverlap(InAttacker, InAttackerCauser, InOther);
	CheckNull(InOther);
	// InAttacker->GetController() : Player
	// InAttackerCauser = Sword;
	//InOther->TakeDamage(20.0f, FDamageEvent(), InAttacker->GetController(), InAttackerCauser);

	// ���������� Hit�Ȱ��� ���� : Fist
	for (ACharacter* hit : Hit)
		CheckTrue(hit == InOther); // ������ Hit�� ����� return

	Hit.AddUnique(InOther);

	bool b = (HitDatas.Num() - 1 < Index); // Index�� HitData���� ũ�� return
	if (b)
	{
		Hit.Empty();
		return;
	}
	// SendDame���� TakeDamage()�� Call : why ������ event�� �ѱ�� ����
	HitDatas[Index].SendDamage(InAttacker, InAttackerCauser, InOther);


}
void UCDoAction_Combo::OnAttachmentEndOverlap(class ACharacter* InAttacker, class ACharacter* InOther)
{
	Super::OnAttachmentEndOverlap(InAttacker,  InOther);

	// Player�� �ٶ󺸰� 
	// FRoator -> FQuat ( Matrix)
	// m11 m12 m13 m14     ---> RightVector(X)    11,12,13
	// m21 m22 m23 m24     ---> UpVector(Y)       21,22,23
	// m31 m32 m33 m34     ---> FowardVector(Z)   31,32,33
	// m41 m42 m43 m44
	//-----------------------------------------------------
	// -   -   -  0        //  C   -   S  0   //  C   S    -
	// -   C   S  0        //  -   -   0  0   //  S   C    -
	// -  -S   C  0        //  -S  -   C  0   //  -   -    - 
	// Tx Ty  Tz  1        //  Tx Ty  Tz  1   //  Tx  Ty   Tz


	Hit.Empty();

}

