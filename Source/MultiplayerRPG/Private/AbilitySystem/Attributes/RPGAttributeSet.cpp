// Fill out your copyright notice in the Description page of Project Settings.

#include "AbilitySystem/Attributes/RPGAttributeSet.h"
#include "GameplayEffect.h"
#include "GameplayEffectExtension.h"
#include "GameplayEffectTypes.h"
#include "GameplayAbilitySpec.h"
#include "Net/UnrealNetwork.h"
#include "AbilitySystemGlobals.h"

void URPGAttributeSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);

    // Add attributes to replication list
    DOREPLIFETIME_CONDITION_NOTIFY(URPGAttributeSet, Health, COND_None, REPNOTIFY_Always);
    DOREPLIFETIME_CONDITION_NOTIFY(URPGAttributeSet, MaxHealth, COND_None, REPNOTIFY_Always);
}

void URPGAttributeSet::PostGameplayEffectExecute(const FGameplayEffectModCallbackData& Data)
{
    Super::PostGameplayEffectExecute(Data);

    if (Data.EvaluatedData.Attribute == GetHealthAttribute())
    {
        // Clamp health between 0 and MaxHealth
        float NewHealth = FMath::Clamp(GetHealth(), 0.f, GetMaxHealth());
        SetHealth(NewHealth);

        // Log the change for debugging
        UE_LOG(LogTemp, Log, TEXT("Health updated: %f"), NewHealth);
    }
}

void URPGAttributeSet::OnRep_Health(const FGameplayAttributeData& OldHealth)
{
    // Notify about health replication changes
    GAMEPLAYATTRIBUTE_REPNOTIFY(URPGAttributeSet, Health, OldHealth);
}

void URPGAttributeSet::OnRep_MaxHealth(const FGameplayAttributeData& OldMaxHealth)
{
    // Notify about max health replication changes
    GAMEPLAYATTRIBUTE_REPNOTIFY(URPGAttributeSet, MaxHealth, OldMaxHealth);
}
