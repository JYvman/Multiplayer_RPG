#include "RPGRangedAbility.h"
#include "GameFramework/Actor.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/World.h"
#include "DrawDebugHelpers.h"

URPGRangedAbility::URPGRangedAbility()
{
    InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
}

void URPGRangedAbility::ActivateAbility(
    const FGameplayAbilitySpecHandle Handle,
    const FGameplayAbilityActorInfo* ActorInfo,
    const FGameplayAbilityActivationInfo ActivationInfo,
    const FGameplayEventData* TriggerEventData)
{
    if (!CommitAbility(Handle, ActorInfo, ActivationInfo)) return;

    if (ActorInfo->AvatarActor.IsValid())
    {
        SpawnProjectile(ActorInfo->AvatarActor.Get());
    }

    EndAbility(Handle, ActorInfo, ActivationInfo, true, false);
}

void URPGRangedAbility::SpawnProjectile(AActor* Instigator)
{
    if (!ProjectileClass)
    {
        UE_LOG(LogTemp, Warning, TEXT("ProjectileClass is not set!"));
        return;
    }

    if (!Instigator || !GetWorld())
    {
        UE_LOG(LogTemp, Warning, TEXT("Invalid Instigator or World!"));
        return;
    }

    // Spawn the projectile slightly ahead of the instigator
    FVector SpawnLocation = Instigator->GetActorLocation() + Instigator->GetActorForwardVector() * 100.0f;
    FRotator SpawnRotation = Instigator->GetActorRotation();

    // Attempt to spawn the projectile
    AActor* Projectile = GetWorld()->SpawnActor<AActor>(
        ProjectileClass, SpawnLocation, SpawnRotation
    );

    if (Projectile)
    {
        UE_LOG(LogTemp, Log, TEXT("Ranged projectile spawned by: %s"), *Instigator->GetName());

        // Optionally draw a debug line
        DrawDebugLine(
            GetWorld(),
            SpawnLocation,
            SpawnLocation + Instigator->GetActorForwardVector() * 500.0f,
            FColor::Green,
            false,
            2.0f,
            0,
            2.0f
        );
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("Failed to spawn projectile!"));
    }
}
