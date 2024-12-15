// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Logging/LogMacros.h"
#include "AbilitySystem/RPGAbilitySystemComponent.h"
#include "AbilitySystem/Attributes/RPGAttributeSet.h"
#include "RPGMeleeAbility.h"
#include "RPGRangedAbility.h"
#include "Templates/UnrealTemplate.h"
#include "GameplayAbilitySpec.h"
#include "UObject/NoExportTypes.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "GameFramework/PlayerController.h"
#include "MultiplayerRPGCharacter.generated.h"

class USpringArmComponent;
class UCameraComponent;
class UInputMappingContext;
class UInputAction;
class URPGAbilitySystemComponent;
struct FInputActionValue;

DECLARE_LOG_CATEGORY_EXTERN(LogTemplateCharacter, Log, All);

UCLASS(config = Game)
class AMultiplayerRPGCharacter : public ACharacter
{
    GENERATED_BODY()

    /** Camera boom positioning the camera behind the character */
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
    USpringArmComponent* CameraBoom;

    /** Follow camera */
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
    UCameraComponent* FollowCamera;

    /** Default MappingContext */
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
    UInputMappingContext* DefaultMappingContext;

    /** Jump Input Action */
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
    UInputAction* JumpAction;

    /** Move Input Action */
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
    UInputAction* MoveAction;

    /** Look Input Action */
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
    UInputAction* LookAction;

    /** Custom Input Mapping Context for abilities */
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input", meta = (AllowPrivateAccess = "true"))
    UInputMappingContext* CharacterInputMappingContext;

    /** Melee Attack Action */
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input", meta = (AllowPrivateAccess = "true"))
    UInputAction* MeleeAttackAction;

    /** Ranged Attack Action */
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input", meta = (AllowPrivateAccess = "true"))
    UInputAction* RangedAttackAction;

public:
    AMultiplayerRPGCharacter();

    /** Called when the character is possessed by a controller */
    virtual void PossessedBy(AController* NewController) override;

    /** Called when PlayerState is replicated */
    virtual void OnRep_PlayerState() override;

protected:
    /** Called for movement input */
    void Move(const FInputActionValue& Value);

    /** Called for looking input */
    void Look(const FInputActionValue& Value);

    /** Sets up the input component for the character */
    virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

    /** Blueprint-accessible abilities */
    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Abilities")
    TSubclassOf<UGameplayAbility> MeleeAbility;

    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Abilities")
    TSubclassOf<UGameplayAbility> RangedAbility;

    /** Activates the melee ability */
    UFUNCTION()
    void ActivateMeleeAbility();

    /** Activates the ranged ability */
    UFUNCTION()
    void ActivateRangedAbility();

private:
    /** Ability System Component for managing abilities */
    UPROPERTY(VisibleAnywhere, BlueprintGetter = GetAbilitySystemComponent, Category = "Abilities", meta = (AllowPrivateAccess = "true"))
    URPGAbilitySystemComponent* RPGAbilitySystemComp;

    /** Attribute Set for managing character stats */
    UPROPERTY(VisibleAnywhere, BlueprintGetter = GetAttributes, Category = "Abilities", meta = (AllowPrivateAccess = "true"))
    URPGAttributeSet* RPGAttributes;

    /** Initializes the ability actor information */
    void InitAbilityActorInfo();

public:
    /** Getter for Ability System Component */
    UFUNCTION(BlueprintGetter)
    URPGAbilitySystemComponent* GetAbilitySystemComponent() const { return RPGAbilitySystemComp; }

    /** Getter for Attributes */
    UFUNCTION(BlueprintGetter)
    URPGAttributeSet* GetAttributes() const { return RPGAttributes; }

    /** Returns CameraBoom subobject **/
    FORCEINLINE USpringArmComponent* GetCameraBoom() const { return CameraBoom; }

    /** Returns FollowCamera subobject **/
    FORCEINLINE UCameraComponent* GetFollowCamera() const { return FollowCamera; }
};
