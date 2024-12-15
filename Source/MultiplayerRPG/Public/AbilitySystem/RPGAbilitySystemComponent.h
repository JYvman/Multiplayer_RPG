// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemComponent.h"
#include "RPGAbilitySystemComponent.generated.h"

/**
 * URPGAbilitySystemComponent
 *
 * Custom Ability System Component for handling RPG-specific gameplay abilities and attributes.
 * Extend this class to add custom logic for your game's ability system.
 */
UCLASS()
class MULTIPLAYERRPG_API URPGAbilitySystemComponent : public UAbilitySystemComponent
{
    GENERATED_BODY()

public:
    /** Default constructor */
    URPGAbilitySystemComponent();

    /** Add custom methods or properties here if needed in the future */
};
