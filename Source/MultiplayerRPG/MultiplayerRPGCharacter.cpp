#include "MultiplayerRPGCharacter.h"
#include "AbilitySystemComponent.h"
#include "RPGMeleeAbility.h"
#include "RPGRangedAbility.h"
#include "InputAction.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "Components/CapsuleComponent.h"
#include "CoreMinimal.h"
#include "Templates/UnrealTemplate.h"   
#include "GameplayAbilitySpec.h"       
#include "UObject/NoExportTypes.h"      
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/PlayerController.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"

//////////////////////////////////////////////////////////////////////////
// AMultiplayerRPGCharacter

AMultiplayerRPGCharacter::AMultiplayerRPGCharacter()
{
    // Set size for collision capsule
    GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);

    // Don't rotate when the controller rotates.
    bUseControllerRotationPitch = false;
    bUseControllerRotationYaw = false;
    bUseControllerRotationRoll = false;

    // Configure character movement
    GetCharacterMovement()->bOrientRotationToMovement = true; // Character moves in the direction of input...
    GetCharacterMovement()->RotationRate = FRotator(0.0f, 500.0f, 0.0f); // ...at this rotation rate
    GetCharacterMovement()->JumpZVelocity = 700.f;
    GetCharacterMovement()->AirControl = 0.35f;
    GetCharacterMovement()->MaxWalkSpeed = 500.f;
    GetCharacterMovement()->MinAnalogWalkSpeed = 20.f;
    GetCharacterMovement()->BrakingDecelerationWalking = 2000.f;

    // Create a camera boom (pulls in towards the player if there is a collision)
    CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
    CameraBoom->SetupAttachment(RootComponent);
    CameraBoom->TargetArmLength = 400.0f; // The camera follows at this distance behind the character
    CameraBoom->bUsePawnControlRotation = true; // Rotate the arm based on the controller

    // Create a follow camera
    FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
    FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName); // Attach the camera to the end of the boom
    FollowCamera->bUsePawnControlRotation = false; // Camera does not rotate relative to arm

    // Ability System Component
    RPGAbilitySystemComp = CreateDefaultSubobject<URPGAbilitySystemComponent>(TEXT("AbilitySystemComp"));
}

void AMultiplayerRPGCharacter::BeginPlay()
{
    Super::BeginPlay();

    if (APlayerController* PlayerController = Cast<APlayerController>(Controller))
    {
        if (UEnhancedInputLocalPlayerSubsystem* InputSubsystem =
            ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer()))
        {
            if (CharacterInputMappingContext)
            {
                InputSubsystem->AddMappingContext(CharacterInputMappingContext, 0);
            }
            else
            {
                UE_LOG(LogTemp, Warning, TEXT("CharacterInputMappingContext is not set!"));
            }
        }
    }
}

//////////////////////////////////////////////////////////////////////////
// Input

void AMultiplayerRPGCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
    Super::SetupPlayerInputComponent(PlayerInputComponent);

    if (UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(PlayerInputComponent))
    {
        // Bind jump actions
        if (JumpAction)
        {
            EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Started, this, &ACharacter::Jump);
            EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Completed, this, &ACharacter::StopJumping);
        }

        // Bind movement actions
        if (MoveAction)
        {
            EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &AMultiplayerRPGCharacter::Move);
        }

        // Bind look actions
        if (LookAction)
        {
            EnhancedInputComponent->BindAction(LookAction, ETriggerEvent::Triggered, this, &AMultiplayerRPGCharacter::Look);
        }

        // Bind melee and ranged abilities
        if (MeleeAttackAction && RangedAttackAction)
        {
            EnhancedInputComponent->BindAction(MeleeAttackAction, ETriggerEvent::Triggered, this, &AMultiplayerRPGCharacter::ActivateMeleeAbility);
            EnhancedInputComponent->BindAction(RangedAttackAction, ETriggerEvent::Triggered, this, &AMultiplayerRPGCharacter::ActivateRangedAbility);
        }
        else
        {
            UE_LOG(LogTemp, Warning, TEXT("Input actions for melee or ranged attacks are not set!"));
        }
    }
}

void AMultiplayerRPGCharacter::ActivateMeleeAbility()
{
    if (RPGAbilitySystemComp && MeleeAbility)
    {
        RPGAbilitySystemComp->TryActivateAbilityByClass(MeleeAbility, true);
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("MeleeAbility or RPGAbilitySystemComp is not initialized!"));
    }
}

void AMultiplayerRPGCharacter::ActivateRangedAbility()
{
    if (RPGAbilitySystemComp && RangedAbility)
    {
        RPGAbilitySystemComp->TryActivateAbilityByClass(RangedAbility, true);
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("RangedAbility or RPGAbilitySystemComp is not initialized!"));
    }
}

void AMultiplayerRPGCharacter::Move(const FInputActionValue& Value)
{
    FVector2D MovementVector = Value.Get<FVector2D>();

    if (Controller != nullptr)
    {
        const FRotator Rotation = Controller->GetControlRotation();
        const FRotator YawRotation(0, Rotation.Yaw, 0);

        const FVector ForwardDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
        const FVector RightDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);

        AddMovementInput(ForwardDirection, MovementVector.Y);
        AddMovementInput(RightDirection, MovementVector.X);
    }
}

void AMultiplayerRPGCharacter::Look(const FInputActionValue& Value)
{
    FVector2D LookAxisVector = Value.Get<FVector2D>();

    if (Controller != nullptr)
    {
        AddControllerYawInput(LookAxisVector.X);
        AddControllerPitchInput(LookAxisVector.Y);
    }
}
