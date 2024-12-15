#pragma once

#include "CoreMinimal.h"
#include "Abilities/GameplayAbility.h"
#include "RPGMeleeAbility.generated.h"

/**
 * URPGMeleeAbility
 *
 * Handles melee combat ability logic for the character. Inherits from UGameplayAbility
 * and overrides its ActivateAbility function to perform specific melee attack actions.
 */
UCLASS()
class MULTIPLAYERRPG_API URPGMeleeAbility : public UGameplayAbility
{
    GENERATED_BODY()

public:
    /** Default constructor */
    URPGMeleeAbility();

protected:
    /**
     * Called when the ability is activated.
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
     * Executes the melee attack logic.
     * @param Instigator - The actor performing the melee attack.
     */
    void PerformMeleeAttack(AActor* Instigator);
};
