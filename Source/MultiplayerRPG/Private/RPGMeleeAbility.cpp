#include "RPGMeleeAbility.h"
#include "GameFramework/Actor.h"
#include "Kismet/GameplayStatics.h"
#include "AbilitySystemComponent.h"
#include "Engine/World.h"
#include "DrawDebugHelpers.h"

URPGMeleeAbility::URPGMeleeAbility()
{
    InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
}

void URPGMeleeAbility::ActivateAbility(
    const FGameplayAbilitySpecHandle Handle,
    const FGameplayAbilityActorInfo* ActorInfo,
    const FGameplayAbilityActivationInfo ActivationInfo,
    const FGameplayEventData* TriggerEventData)
{
    if (!CommitAbility(Handle, ActorInfo, ActivationInfo)) return;

    if (ActorInfo->AvatarActor.IsValid())
    {
        PerformMeleeAttack(ActorInfo->AvatarActor.Get());
    }

    EndAbility(Handle, ActorInfo, ActivationInfo, true, false);
}

void URPGMeleeAbility::PerformMeleeAttack(AActor* Instigator)
{
    if (!Instigator || !GetWorld())
    {
        UE_LOG(LogTemp, Warning, TEXT("Invalid instigator or world in PerformMeleeAttack."));
        return;
    }

    FVector Origin = Instigator->GetActorLocation();
    float MeleeRange = 200.0f;
    TArray<FOverlapResult> OverlapResults;

    FCollisionShape CollisionShape = FCollisionShape::MakeSphere(MeleeRange);
    FCollisionQueryParams QueryParams;
    QueryParams.AddIgnoredActor(Instigator);

    // Perform the overlap
    bool bHasHit = GetWorld()->OverlapMultiByObjectType(
        OverlapResults,
        Origin,
        FQuat::Identity,
        FCollisionObjectQueryParams(ECollisionChannel::ECC_Pawn),
        CollisionShape,
        QueryParams
    );

    if (bHasHit)
    {
        for (FOverlapResult Result : OverlapResults)
        {
            AActor* Target = Result.GetActor();
            if (Target)
            {
                UGameplayStatics::ApplyDamage(Target, 20.0f, Instigator->GetInstigatorController(), Instigator, nullptr);
                UE_LOG(LogTemp, Log, TEXT("Melee hit: %s"), *Target->GetName());
            }
        }
    }

    // Debug visualization
    DrawDebugSphere(GetWorld(), Origin, MeleeRange, 12, FColor::Red, false, 1.0f);
}
