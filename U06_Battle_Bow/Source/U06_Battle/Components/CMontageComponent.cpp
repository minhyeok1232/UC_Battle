// Fill out your copyright notice in the Description page of Project Settings.


#include "Components/CMontageComponent.h"
#include "Global.h"
#include "GameFramework/Character.h"
//https://forums.unrealengine.com/t/play-montage-in-c-with-onblendout-oninterrupted-etc/447184


UCMontageComponent::UCMontageComponent()
{

}


// Called when the game starts
void UCMontageComponent::BeginPlay()
{
	Super::BeginPlay();

	if (!DataTable)
	{
		CLog::Warning(" Data table not defined!!!");
		return;
	}
	// 생성자에서 사용(X)
	OwnerCharacter = Cast<ACharacter>(GetOwner());

    // Binding
   //Mesh->GetAnimInstance()->OnPlayMontageNotifyBegin.RemoveDynamic(this, &UMCombatComponent::OnMontageNotifyBegin);
    OwnerCharacter->GetMesh()->GetAnimInstance()->OnMontageEnded.AddDynamic(this, &UCMontageComponent::OnMontageEnded);
    OwnerCharacter->GetMesh()->GetAnimInstance()->OnPlayMontageNotifyBegin.AddDynamic(this, &UCMontageComponent::OnMontageNotifyBegin);



	// 데이터테이블 읽기

	TArray<FMontagesData*> OutRowArray;
	DataTable->GetAllRows("", OutRowArray);
    for (FMontagesData* data : OutRowArray)
    {
            Datas.Add(data);
    }

    /*
    for (int32 i = 0; i < (int32)EStateType::Max; i++)
    {
        for (FMontagesData* data : OutRowArray)
        {
            if ((EStateType)i == data->Type)
            {

                Datas[i] = data;
            }

        }

    }
    */

    if (0)
    {
        for (FMontagesData* data : OutRowArray)
        {
            if (data == nullptr)
                continue;
            FString str;
            str.Append(StaticEnum<EStateType>()->GetValueAsString(data->Type));
            str.Append(" / ");
            str.Append(data->Montage->GetPathName());
            CLog::Log(str);

        }
    }

}

void UCMontageComponent::OnMontageNotifyBegin(FName NotifyName, const FBranchingPointNotifyPayload& BranchingPointPayload)
{
  //  FString str = NotifyName.ToString();
  //  CLog::Print(str);
}

void UCMontageComponent::OnMontageEnded(UAnimMontage* Montage, bool bInterrupted)
{
  //if (bInterrupted)
	//	CLog::Print("Interrupted Ended");
	//else
	// 	CLog::Print("Normal Ended");

   //CheckNull(OwnerCharacter);
   //
   //UActorComponent* comp = OwnerCharacter->GetComponentByClass(UCStateComponent::StaticClass());
   //Cast<UCStateComponent>(comp)->SetIdleMode();

}

FMontagesData* UCMontageComponent::GetMontage(EStateType InType, int32 Index)
{
    FMontagesData* montage = nullptr;
    int32 count = -1;

    for (FMontagesData* data : Datas)
    {
        if (data->Type != InType)
            continue;
        count++;
        if (count == Index)
        {
            montage = data;
            break;
        }
    }
    return montage;
}

UAnimMontage* UCMontageComponent::GetHitMontage(int32 Index)
{
   UAnimMontage* montage = nullptr;
   int32 count = -1;

   for (FMontagesData* data : Datas)
   {
       if (data->Type != EStateType::Hit)
           continue;
       count++;
       if (count == Index)
       {
           montage = data->Montage;
           break;
       }
   }
   return montage;
}

void UCMontageComponent::PlayBackStepMode()
{
    PlayAnimMontage(EStateType::BackStep);
}

void UCMontageComponent::PlayDeadMode()
{
    PlayAnimMontage(EStateType::Dead);
}

void UCMontageComponent::PlayRollMode()
{
    PlayAnimMontage(EStateType::Roll);
}

void UCMontageComponent::PlayAnimMontage(UAnimMontage* InMontageToPlay, float InPlayRate)
{
    CheckNull(OwnerCharacter);
    OwnerCharacter->GetMesh()->GetAnimInstance()->Montage_Play(InMontageToPlay, InPlayRate);

}

void UCMontageComponent::PlayAnimMontage(EStateType InType)
{
    CheckNull(OwnerCharacter);
    FMontagesData* data = GetMontage(InType); // Datas배열에 들어간 포인터
    CheckNull(data);
    //블프
    //OwnerCharacter->PlayAnimMontage(data->Montage, data->PlayRate);
    OwnerCharacter->GetMesh()->GetAnimInstance()->Montage_Play(data->Montage, data->PlayRate);

}

