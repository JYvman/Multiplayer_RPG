// Fill out your copyright notice in the Description page of Project Settings.

#include "Game/PlayerState/RPGPlayerState.h"
#include "AbilitySystem/RPGAbilitySystemComponent.h"
#include "AbilitySystem/Attributes/RPGAttributeSet.h"

ARPGPlayerState::ARPGPlayerState()
{
    // Network update settings
    NetUpdateFrequency = 100.f;
    MinNetUpdateFrequency = 66.f;

    // Initialize the Ability System Component
    RPGAbilitySystemComp = CreateDefaultSubobject<URPGAbilitySystemComponent>("AbilitySystemComp");
    RPGAbilitySystemComp->SetIsReplicated(true);
    RPGAbilitySystemComp->SetReplicationMode(EGameplayEffectReplicationMode::Mixed);

    // Initialize the Attribute Set
    RPGAttributes = CreateDefaultSubobject<URPGAttributeSet>("AttributeSet");

    UE_LOG(LogTemp, Log, TEXT("ARPGPlayerState: Initialized with AbilitySystemComp and AttributeSet."));
}

UAbilitySystemComponent* ARPGPlayerState::GetAbilitySystemComponent() const
{
    UE_LOG(LogTemp, Log, TEXT("ARPGPlayerState: Accessing AbilitySystemComponent."));
    return RPGAbilitySystemComp;
}

URPGAbilitySystemComponent* ARPGPlayerState::GetRPGAbilitySystemComponent() const
{
    UE_LOG(LogTemp, Log, TEXT("ARPGPlayerState: Accessing RPGAbilitySystemComponent."));
    return RPGAbilitySystemComp;
}

URPGAttributeSet* ARPGPlayerState::GetRPGAttributes() const
{
    UE_LOG(LogTemp, Log, TEXT("ARPGPlayerState: Accessing RPGAttributes."));
    return RPGAttributes;
}
