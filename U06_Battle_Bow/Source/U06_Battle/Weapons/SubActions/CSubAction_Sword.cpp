// Fill out your copyright notice in the Description page of Project Settings.
#include "Weapons/SubActions/CSubAction_Sword.h"
#include "Global.h"
#include "GameFramework/Character.h"
#include "Components/CStateComponent.h"
#include "Components/CMovementComponent.h"
#include "Weapons/CAttachment.h"
#include "Weapons/CDoAction.h"

UCSubAction_Sword::UCSubAction_Sword()
{

}
void UCSubAction_Sword::BeginPlay(ACharacter* InOwner, ACAttachment* InAttachment, UCDoAction* InDoAction)
{
	//Super::BeginPlay(InOwner, InAttachment, InDoAction); // 3개의 변수 세팅
    Owner = InOwner;
    Attachment = InAttachment;
    DoAction = InDoAction;
    State =    CHelpers::GetComponent<UCStateComponent>(Owner);
    Movement = CHelpers::GetComponent<UCMovementComponent>(Owner);
}

void UCSubAction_Sword::Pressed()
{
    // IdleMode가 아니면 return
    CheckFalse(State->IsIdleMode());
    // SubAction중이면  return
    CheckTrue(State->IsSubActionMode());
    bInAction = true;
    State->SetActionMode();
    State->OnSubActionMode();
    if (!!GhostTrailClass)
        GhostTrail = CHelpers::Play_GhostTrail(GhostTrailClass,Owner);
    ActionData.DoAction(Owner);  // 모타쥬에서 Begin_SubAction(), End_SubAction();
}

void UCSubAction_Sword::Released()
{
    bInAction = false;
}

void UCSubAction_Sword::Begin_SubAction_Implementation()
{
    Super::Begin_SubAction_Implementation();  // don't work


  

    // 기존 DoAction에 있던 Bind를 삭제
    Attachment->OnAttachmentBeginOverlap.Remove(DoAction, "OnAttachmentBeginOverlap");
    // 바인딩
    Attachment->OnAttachmentBeginOverlap.AddDynamic(this, &UCSubAction_Sword::OnAttachmentBeginOverlap);

    bMoving = true; // Tick에서 참일때 Moving함
    Start = Owner->GetActorLocation();
    End = Start + Owner->GetActorForwardVector() * Distance;
    float radius = Owner->GetCapsuleComponent()->GetScaledCapsuleRadius();

    if (0)
    {
        if (DrawDebug == EDrawDebugTrace::ForDuration)
        {
            DrawDebugSphere(Owner->GetWorld(), End, radius * 2, 20, FColor::Magenta, false, 2);
            DrawDebugDirectionalArrow(Owner->GetWorld(), Start, End, 25, FColor::Green, false, 5, 0, 3);
        }
        return;
    }

    // 통과하지 않고 멈추게 하기위해 콜리젼 프로파일를 변경

    // Trace를 총해 Check

    float height = Owner->GetCapsuleComponent()->GetScaledCapsuleHalfHeight();
    FRotator rotation = Owner->GetActorRotation();


    TArray<TEnumAsByte<EObjectTypeQuery>> object;
    object.Add(EObjectTypeQuery::ObjectTypeQuery3); // 1.WorldStatic 2.WorldDynamic 3.Pawn

    TArray<AActor*> ignores;
    ignores.Add(Owner);  // Player or Enemey

    TArray<FHitResult> hitResults;
    {
        UKismetSystemLibrary::BoxTraceMultiForObjects(Owner->GetWorld(), Start, End, FVector(0, radius, height),
            rotation, object, false, ignores, DrawDebug, hitResults, true);
    }

   // for(FHitResult hitResult : hitResults) // 속도문제
   // Sword_Subaction
   //                      무시      겹침      블록
   //   1. Visibility       0
   //   2. Camera           0
   //   3. WorldStatic                         0
   //   4. WorldDynamic               0
   //   5. Pawn                       0
   //   6. PhysicsBody                         0
   //   7. Vehicle                             0
   //   8. Destructable                        0
 //


    for (const FHitResult& hitResult : hitResults)
    {
        ACharacter* character = Cast<ACharacter>(hitResult.GetActor());
        if (!!character)
        {
            character->GetCapsuleComponent()->SetCollisionProfileName("Sword_Subaction");
            Overlapped.Add(character);
        }
    }

    // Line Trace를 이용하여 히트된것을 Check

    FHitResult lineHitResult;
    // TraceTypeQuery1 : Visibility
    UKismetSystemLibrary::LineTraceSingle(Owner->GetWorld(), Start, End, ETraceTypeQuery::TraceTypeQuery1,
        false, ignores, DrawDebug, lineHitResult, true);

    if (lineHitResult.bBlockingHit)
    {
        FVector direction = (End - Start).GetSafeNormal2D();
        End = lineHitResult.Location - (direction * radius * 2);

        if (DrawDebug == EDrawDebugTrace::ForDuration)
        {
            DrawDebugSphere(Owner->GetWorld(), End, radius * 2, 20, FColor::Magenta, false, 2);
            DrawDebugDirectionalArrow(Owner->GetWorld(), Start, End, 25, FColor::Green, false, 5, 0, 3);
        }

    }

    for (ACharacter* character : Overlapped)
    {
        character->GetCapsuleComponent()->SetCollisionProfileName("Pawn");

    }
    Overlapped.Empty();



}

void UCSubAction_Sword::End_SubAction_Implementation()
{
    Super::End_SubAction_Implementation();
    bMoving = false;
    State->SetIdleMode();
    State->OffSubActionMode();

    Movement->Move();
    Movement->DisableFixedCamera();
    if (!!GhostTrail)
        GhostTrail->Destroy();

    Hit.Empty();





    // 기존 DoAction에 있던 Bind를 삭제
    Attachment->OnAttachmentBeginOverlap.Remove(this, "OnAttachmentBeginOverlap");
    // 바인딩
    Attachment->OnAttachmentBeginOverlap.AddDynamic(DoAction, &UCDoAction::OnAttachmentBeginOverlap);

}

void UCSubAction_Sword::Tick_Implementation(float InDeltaTime)
{
    Super::Tick_Implementation(InDeltaTime);
    CheckFalse(bMoving);

    FVector location = Owner->GetActorLocation();
    float   radius = Owner->GetCapsuleComponent()->GetScaledCapsuleRadius();

    // 현재 위치가 End점에서 Capusle의 절반위치에 도달하면 멈추게 함
    if (location.Equals(End, radius))
    {
        bMoving = false;
        Start = End = FVector::ZeroVector;
        return;
    }

    FVector direction = (End - Start).GetSafeNormal2D();

    Owner->AddActorWorldOffset(direction * Speed, true);


 //   if(bMoving)
}
void UCSubAction_Sword::OnAttachmentBeginOverlap(ACharacter* InAttacker, AActor* InAttackCuaser, ACharacter* InOther)
{
    CheckNull(InOther);

    for (ACharacter* character : Hit)
        CheckTrue(character == InOther);
   
    bMoving = false;
    Hit.AddUnique(InOther);
    HitData.SendDamage(Owner, InAttackCuaser, InOther);
}

void UCSubAction_Sword::OnAttachmentEndCollision()
{
}