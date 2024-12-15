#pragma once

#include "CoreMinimal.h"
#include "Abilities/GameplayAbility.h"
#include "RPGRangedAbility.generated.h"

/**
 * URPGRangedAbility
 *
 * Handles logic for ranged abilities, including spawning projectiles.
 */
UCLASS()
class MULTIPLAYERRPG_API URPGRangedAbility : public UGameplayAbility
{
    GENERATED_BODY()

public:
    /** Default constructor */
    URPGRangedAbility();

    /**
     * The class of the projectile to spawn when this ability is activated.
     * Must be set in Blueprint or C++ before use.
     */
    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Ranged Ability", meta = (AllowPrivateAccess = "true"))
    TSubclassOf<AActor> ProjectileClass;

protected:
    /**
     * Activates the ability.
     * @param Handle - Handle for this ability instance.
     * @param ActorInfo - Information about the actor using the ability.
     * @param ActivationInfo - Information about this activation instance.
     * @param TriggerEventData - Optional event data for the ability.
     */
    virtual void ActivateAbility(
        const FGameplayAbilitySpecHandle Handle,
        const FGameplayAbilityActorInfo* ActorInfo,
        const FGameplayAbilityActivationInfo ActivationInfo,
        const FGameplayEventData* TriggerEventData
    ) override;

private:
    /**
     * Spawns the ranged projectile.
     * @param Instigator - The actor initiating the ranged ability.
     */
    void SpawnProjectile(AActor* Instigator);
};
