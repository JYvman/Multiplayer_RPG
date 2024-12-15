#pragma once

#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "AbilitySystemComponent.h"
#include "Net/UnrealNetwork.h"
#include "GameplayEffect.h"
#include "GameplayEffectExtension.h"
#include "RPGAttributeSet.generated.h"

/** Helper macro to simplify defining attributes */
#define ATTRIBUTE_ACCESSORS(ClassName, PropertyName) \
GAMEPLAYATTRIBUTE_PROPERTY_GETTER(ClassName, PropertyName) \
GAMEPLAYATTRIBUTE_VALUE_GETTER(PropertyName) \
GAMEPLAYATTRIBUTE_VALUE_SETTER(PropertyName) \
GAMEPLAYATTRIBUTE_VALUE_INITTER(PropertyName)

/**
 * URPGAttributeSet
 *
 * Defines the character's attributes and handles gameplay effects applied to these attributes.
 */
UCLASS()
class MULTIPLAYERRPG_API URPGAttributeSet : public UAttributeSet
{
    GENERATED_BODY()

public:
    /** Default constructor */
    URPGAttributeSet()
    {
        Health.SetBaseValue(100.0f);
        Health.SetCurrentValue(100.0f);
        MaxHealth.SetBaseValue(100.0f);
        MaxHealth.SetCurrentValue(100.0f);
    }

    /** Handles replication of attributes */
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    /** Handles post gameplay effect execution logic */
    virtual void PostGameplayEffectExecute(const FGameplayEffectModCallbackData& Data) override;

    /** Current health of the character */
    UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_Health)
    FGameplayAttributeData Health;
    ATTRIBUTE_ACCESSORS(URPGAttributeSet, Health);

    /** Maximum health of the character */
    UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_MaxHealth)
    FGameplayAttributeData MaxHealth;
    ATTRIBUTE_ACCESSORS(URPGAttributeSet, MaxHealth);

private:
    /** Replication notification for Health */
    UFUNCTION()
    void OnRep_Health(const FGameplayAttributeData& OldHealth);

    /** Replication notification for MaxHealth */
    UFUNCTION()
    void OnRep_MaxHealth(const FGameplayAttributeData& OldMaxHealth);
};
