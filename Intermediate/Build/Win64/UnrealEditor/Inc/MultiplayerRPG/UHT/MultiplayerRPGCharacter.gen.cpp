// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MultiplayerRPG/MultiplayerRPGCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMultiplayerRPGCharacter() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
MULTIPLAYERRPG_API UClass* Z_Construct_UClass_AMultiplayerRPGCharacter();
MULTIPLAYERRPG_API UClass* Z_Construct_UClass_AMultiplayerRPGCharacter_NoRegister();
MULTIPLAYERRPG_API UClass* Z_Construct_UClass_URPGAbilitySystemComponent_NoRegister();
MULTIPLAYERRPG_API UClass* Z_Construct_UClass_URPGAttributeSet_NoRegister();
UPackage* Z_Construct_UPackage__Script_MultiplayerRPG();
// End Cross Module References

// Begin Class AMultiplayerRPGCharacter Function ActivateMeleeAbility
struct Z_Construct_UFunction_AMultiplayerRPGCharacter_ActivateMeleeAbility_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Activates the melee ability */" },
#endif
		{ "ModuleRelativePath", "MultiplayerRPGCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Activates the melee ability" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerRPGCharacter_ActivateMeleeAbility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerRPGCharacter, nullptr, "ActivateMeleeAbility", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerRPGCharacter_ActivateMeleeAbility_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerRPGCharacter_ActivateMeleeAbility_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMultiplayerRPGCharacter_ActivateMeleeAbility()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerRPGCharacter_ActivateMeleeAbility_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerRPGCharacter::execActivateMeleeAbility)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ActivateMeleeAbility();
	P_NATIVE_END;
}
// End Class AMultiplayerRPGCharacter Function ActivateMeleeAbility

// Begin Class AMultiplayerRPGCharacter Function ActivateRangedAbility
struct Z_Construct_UFunction_AMultiplayerRPGCharacter_ActivateRangedAbility_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Activates the ranged ability */" },
#endif
		{ "ModuleRelativePath", "MultiplayerRPGCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Activates the ranged ability" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerRPGCharacter_ActivateRangedAbility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerRPGCharacter, nullptr, "ActivateRangedAbility", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerRPGCharacter_ActivateRangedAbility_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerRPGCharacter_ActivateRangedAbility_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMultiplayerRPGCharacter_ActivateRangedAbility()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerRPGCharacter_ActivateRangedAbility_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerRPGCharacter::execActivateRangedAbility)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ActivateRangedAbility();
	P_NATIVE_END;
}
// End Class AMultiplayerRPGCharacter Function ActivateRangedAbility

// Begin Class AMultiplayerRPGCharacter Function GetAbilitySystemComponent
struct Z_Construct_UFunction_AMultiplayerRPGCharacter_GetAbilitySystemComponent_Statics
{
	struct MultiplayerRPGCharacter_eventGetAbilitySystemComponent_Parms
	{
		URPGAbilitySystemComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Getter for Ability System Component */" },
#endif
		{ "ModuleRelativePath", "MultiplayerRPGCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Getter for Ability System Component" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMultiplayerRPGCharacter_GetAbilitySystemComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerRPGCharacter_eventGetAbilitySystemComponent_Parms, ReturnValue), Z_Construct_UClass_URPGAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerRPGCharacter_GetAbilitySystemComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerRPGCharacter_GetAbilitySystemComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerRPGCharacter_GetAbilitySystemComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerRPGCharacter_GetAbilitySystemComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerRPGCharacter, nullptr, "GetAbilitySystemComponent", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerRPGCharacter_GetAbilitySystemComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerRPGCharacter_GetAbilitySystemComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerRPGCharacter_GetAbilitySystemComponent_Statics::MultiplayerRPGCharacter_eventGetAbilitySystemComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerRPGCharacter_GetAbilitySystemComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerRPGCharacter_GetAbilitySystemComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerRPGCharacter_GetAbilitySystemComponent_Statics::MultiplayerRPGCharacter_eventGetAbilitySystemComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerRPGCharacter_GetAbilitySystemComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerRPGCharacter_GetAbilitySystemComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerRPGCharacter::execGetAbilitySystemComponent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(URPGAbilitySystemComponent**)Z_Param__Result=P_THIS->GetAbilitySystemComponent();
	P_NATIVE_END;
}
// End Class AMultiplayerRPGCharacter Function GetAbilitySystemComponent

// Begin Class AMultiplayerRPGCharacter Function GetAttributes
struct Z_Construct_UFunction_AMultiplayerRPGCharacter_GetAttributes_Statics
{
	struct MultiplayerRPGCharacter_eventGetAttributes_Parms
	{
		URPGAttributeSet* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Getter for Attributes */" },
#endif
		{ "ModuleRelativePath", "MultiplayerRPGCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Getter for Attributes" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMultiplayerRPGCharacter_GetAttributes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MultiplayerRPGCharacter_eventGetAttributes_Parms, ReturnValue), Z_Construct_UClass_URPGAttributeSet_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiplayerRPGCharacter_GetAttributes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiplayerRPGCharacter_GetAttributes_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerRPGCharacter_GetAttributes_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiplayerRPGCharacter_GetAttributes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiplayerRPGCharacter, nullptr, "GetAttributes", nullptr, nullptr, Z_Construct_UFunction_AMultiplayerRPGCharacter_GetAttributes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerRPGCharacter_GetAttributes_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMultiplayerRPGCharacter_GetAttributes_Statics::MultiplayerRPGCharacter_eventGetAttributes_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiplayerRPGCharacter_GetAttributes_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMultiplayerRPGCharacter_GetAttributes_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMultiplayerRPGCharacter_GetAttributes_Statics::MultiplayerRPGCharacter_eventGetAttributes_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMultiplayerRPGCharacter_GetAttributes()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMultiplayerRPGCharacter_GetAttributes_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMultiplayerRPGCharacter::execGetAttributes)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(URPGAttributeSet**)Z_Param__Result=P_THIS->GetAttributes();
	P_NATIVE_END;
}
// End Class AMultiplayerRPGCharacter Function GetAttributes

// Begin Class AMultiplayerRPGCharacter
void AMultiplayerRPGCharacter::StaticRegisterNativesAMultiplayerRPGCharacter()
{
	UClass* Class = AMultiplayerRPGCharacter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ActivateMeleeAbility", &AMultiplayerRPGCharacter::execActivateMeleeAbility },
		{ "ActivateRangedAbility", &AMultiplayerRPGCharacter::execActivateRangedAbility },
		{ "GetAbilitySystemComponent", &AMultiplayerRPGCharacter::execGetAbilitySystemComponent },
		{ "GetAttributes", &AMultiplayerRPGCharacter::execGetAttributes },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMultiplayerRPGCharacter);
UClass* Z_Construct_UClass_AMultiplayerRPGCharacter_NoRegister()
{
	return AMultiplayerRPGCharacter::StaticClass();
}
struct Z_Construct_UClass_AMultiplayerRPGCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MultiplayerRPGCharacter.h" },
		{ "ModuleRelativePath", "MultiplayerRPGCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Camera boom positioning the camera behind the character */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MultiplayerRPGCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Camera boom positioning the camera behind the character" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FollowCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Follow camera */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MultiplayerRPGCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Follow camera" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMappingContext_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Default MappingContext */" },
#endif
		{ "ModuleRelativePath", "MultiplayerRPGCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Default MappingContext" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JumpAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Jump Input Action */" },
#endif
		{ "ModuleRelativePath", "MultiplayerRPGCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Jump Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Move Input Action */" },
#endif
		{ "ModuleRelativePath", "MultiplayerRPGCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Move Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LookAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Look Input Action */" },
#endif
		{ "ModuleRelativePath", "MultiplayerRPGCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Look Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterInputMappingContext_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Custom Input Mapping Context for abilities */" },
#endif
		{ "ModuleRelativePath", "MultiplayerRPGCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Custom Input Mapping Context for abilities" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeleeAttackAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Melee Attack Action */" },
#endif
		{ "ModuleRelativePath", "MultiplayerRPGCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Melee Attack Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RangedAttackAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Ranged Attack Action */" },
#endif
		{ "ModuleRelativePath", "MultiplayerRPGCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Ranged Attack Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeleeAbility_MetaData[] = {
		{ "Category", "Abilities" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Blueprint-accessible abilities */" },
#endif
		{ "ModuleRelativePath", "MultiplayerRPGCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Blueprint-accessible abilities" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RangedAbility_MetaData[] = {
		{ "Category", "Abilities" },
		{ "ModuleRelativePath", "MultiplayerRPGCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RPGAbilitySystemComp_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "BlueprintGetter", "GetAbilitySystemComponent" },
		{ "Category", "Abilities" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Ability System Component for managing abilities */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MultiplayerRPGCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Ability System Component for managing abilities" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RPGAttributes_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "BlueprintGetter", "GetAttributes" },
		{ "Category", "Abilities" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Attribute Set for managing character stats */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MultiplayerRPGCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Attribute Set for managing character stats" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FollowCamera;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMappingContext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_JumpAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LookAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CharacterInputMappingContext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeleeAttackAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RangedAttackAction;
	static const UECodeGen_Private::FClassPropertyParams NewProp_MeleeAbility;
	static const UECodeGen_Private::FClassPropertyParams NewProp_RangedAbility;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RPGAbilitySystemComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RPGAttributes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AMultiplayerRPGCharacter_ActivateMeleeAbility, "ActivateMeleeAbility" }, // 447122758
		{ &Z_Construct_UFunction_AMultiplayerRPGCharacter_ActivateRangedAbility, "ActivateRangedAbility" }, // 1244148563
		{ &Z_Construct_UFunction_AMultiplayerRPGCharacter_GetAbilitySystemComponent, "GetAbilitySystemComponent" }, // 879371577
		{ &Z_Construct_UFunction_AMultiplayerRPGCharacter_GetAttributes, "GetAttributes" }, // 2288477985
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMultiplayerRPGCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerRPGCharacter_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerRPGCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraBoom_MetaData), NewProp_CameraBoom_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerRPGCharacter_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerRPGCharacter, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FollowCamera_MetaData), NewProp_FollowCamera_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerRPGCharacter_Statics::NewProp_DefaultMappingContext = { "DefaultMappingContext", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerRPGCharacter, DefaultMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultMappingContext_MetaData), NewProp_DefaultMappingContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerRPGCharacter_Statics::NewProp_JumpAction = { "JumpAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerRPGCharacter, JumpAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JumpAction_MetaData), NewProp_JumpAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerRPGCharacter_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerRPGCharacter, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveAction_MetaData), NewProp_MoveAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerRPGCharacter_Statics::NewProp_LookAction = { "LookAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerRPGCharacter, LookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookAction_MetaData), NewProp_LookAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerRPGCharacter_Statics::NewProp_CharacterInputMappingContext = { "CharacterInputMappingContext", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerRPGCharacter, CharacterInputMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterInputMappingContext_MetaData), NewProp_CharacterInputMappingContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerRPGCharacter_Statics::NewProp_MeleeAttackAction = { "MeleeAttackAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerRPGCharacter, MeleeAttackAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeleeAttackAction_MetaData), NewProp_MeleeAttackAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerRPGCharacter_Statics::NewProp_RangedAttackAction = { "RangedAttackAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerRPGCharacter, RangedAttackAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RangedAttackAction_MetaData), NewProp_RangedAttackAction_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMultiplayerRPGCharacter_Statics::NewProp_MeleeAbility = { "MeleeAbility", nullptr, (EPropertyFlags)0x0024080000010005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerRPGCharacter, MeleeAbility), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeleeAbility_MetaData), NewProp_MeleeAbility_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMultiplayerRPGCharacter_Statics::NewProp_RangedAbility = { "RangedAbility", nullptr, (EPropertyFlags)0x0024080000010005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerRPGCharacter, RangedAbility), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RangedAbility_MetaData), NewProp_RangedAbility_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerRPGCharacter_Statics::NewProp_RPGAbilitySystemComp = { "RPGAbilitySystemComp", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerRPGCharacter, RPGAbilitySystemComp), Z_Construct_UClass_URPGAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RPGAbilitySystemComp_MetaData), NewProp_RPGAbilitySystemComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiplayerRPGCharacter_Statics::NewProp_RPGAttributes = { "RPGAttributes", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMultiplayerRPGCharacter, RPGAttributes), Z_Construct_UClass_URPGAttributeSet_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RPGAttributes_MetaData), NewProp_RPGAttributes_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMultiplayerRPGCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerRPGCharacter_Statics::NewProp_CameraBoom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerRPGCharacter_Statics::NewProp_FollowCamera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerRPGCharacter_Statics::NewProp_DefaultMappingContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerRPGCharacter_Statics::NewProp_JumpAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerRPGCharacter_Statics::NewProp_MoveAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerRPGCharacter_Statics::NewProp_LookAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerRPGCharacter_Statics::NewProp_CharacterInputMappingContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerRPGCharacter_Statics::NewProp_MeleeAttackAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerRPGCharacter_Statics::NewProp_RangedAttackAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerRPGCharacter_Statics::NewProp_MeleeAbility,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerRPGCharacter_Statics::NewProp_RangedAbility,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerRPGCharacter_Statics::NewProp_RPGAbilitySystemComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiplayerRPGCharacter_Statics::NewProp_RPGAttributes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMultiplayerRPGCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMultiplayerRPGCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_MultiplayerRPG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMultiplayerRPGCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMultiplayerRPGCharacter_Statics::ClassParams = {
	&AMultiplayerRPGCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AMultiplayerRPGCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AMultiplayerRPGCharacter_Statics::PropPointers),
	0,
	0x008000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMultiplayerRPGCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AMultiplayerRPGCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMultiplayerRPGCharacter()
{
	if (!Z_Registration_Info_UClass_AMultiplayerRPGCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMultiplayerRPGCharacter.OuterSingleton, Z_Construct_UClass_AMultiplayerRPGCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMultiplayerRPGCharacter.OuterSingleton;
}
template<> MULTIPLAYERRPG_API UClass* StaticClass<AMultiplayerRPGCharacter>()
{
	return AMultiplayerRPGCharacter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMultiplayerRPGCharacter);
AMultiplayerRPGCharacter::~AMultiplayerRPGCharacter() {}
// End Class AMultiplayerRPGCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_MultiplayerRPG_Source_MultiplayerRPG_MultiplayerRPGCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMultiplayerRPGCharacter, AMultiplayerRPGCharacter::StaticClass, TEXT("AMultiplayerRPGCharacter"), &Z_Registration_Info_UClass_AMultiplayerRPGCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMultiplayerRPGCharacter), 4192228827U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MultiplayerRPG_Source_MultiplayerRPG_MultiplayerRPGCharacter_h_3606849734(TEXT("/Script/MultiplayerRPG"),
	Z_CompiledInDeferFile_FID_MultiplayerRPG_Source_MultiplayerRPG_MultiplayerRPGCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MultiplayerRPG_Source_MultiplayerRPG_MultiplayerRPGCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
