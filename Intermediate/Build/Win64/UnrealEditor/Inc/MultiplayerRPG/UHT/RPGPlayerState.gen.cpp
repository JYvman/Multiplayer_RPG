// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MultiplayerRPG/Public/Game/PlayerState/RPGPlayerState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRPGPlayerState() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APlayerState();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemInterface_NoRegister();
MULTIPLAYERRPG_API UClass* Z_Construct_UClass_ARPGPlayerState();
MULTIPLAYERRPG_API UClass* Z_Construct_UClass_ARPGPlayerState_NoRegister();
MULTIPLAYERRPG_API UClass* Z_Construct_UClass_URPGAbilitySystemComponent_NoRegister();
MULTIPLAYERRPG_API UClass* Z_Construct_UClass_URPGAttributeSet_NoRegister();
UPackage* Z_Construct_UPackage__Script_MultiplayerRPG();
// End Cross Module References

// Begin Class ARPGPlayerState Function GetRPGAbilitySystemComponent
struct Z_Construct_UFunction_ARPGPlayerState_GetRPGAbilitySystemComponent_Statics
{
	struct RPGPlayerState_eventGetRPGAbilitySystemComponent_Parms
	{
		URPGAbilitySystemComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Game/PlayerState/RPGPlayerState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ARPGPlayerState_GetRPGAbilitySystemComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RPGPlayerState_eventGetRPGAbilitySystemComponent_Parms, ReturnValue), Z_Construct_UClass_URPGAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARPGPlayerState_GetRPGAbilitySystemComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARPGPlayerState_GetRPGAbilitySystemComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGPlayerState_GetRPGAbilitySystemComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARPGPlayerState_GetRPGAbilitySystemComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARPGPlayerState, nullptr, "GetRPGAbilitySystemComponent", nullptr, nullptr, Z_Construct_UFunction_ARPGPlayerState_GetRPGAbilitySystemComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGPlayerState_GetRPGAbilitySystemComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_ARPGPlayerState_GetRPGAbilitySystemComponent_Statics::RPGPlayerState_eventGetRPGAbilitySystemComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGPlayerState_GetRPGAbilitySystemComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARPGPlayerState_GetRPGAbilitySystemComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ARPGPlayerState_GetRPGAbilitySystemComponent_Statics::RPGPlayerState_eventGetRPGAbilitySystemComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARPGPlayerState_GetRPGAbilitySystemComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARPGPlayerState_GetRPGAbilitySystemComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARPGPlayerState::execGetRPGAbilitySystemComponent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(URPGAbilitySystemComponent**)Z_Param__Result=P_THIS->GetRPGAbilitySystemComponent();
	P_NATIVE_END;
}
// End Class ARPGPlayerState Function GetRPGAbilitySystemComponent

// Begin Class ARPGPlayerState Function GetRPGAttributes
struct Z_Construct_UFunction_ARPGPlayerState_GetRPGAttributes_Statics
{
	struct RPGPlayerState_eventGetRPGAttributes_Parms
	{
		URPGAttributeSet* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Game/PlayerState/RPGPlayerState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ARPGPlayerState_GetRPGAttributes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RPGPlayerState_eventGetRPGAttributes_Parms, ReturnValue), Z_Construct_UClass_URPGAttributeSet_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARPGPlayerState_GetRPGAttributes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARPGPlayerState_GetRPGAttributes_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGPlayerState_GetRPGAttributes_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARPGPlayerState_GetRPGAttributes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARPGPlayerState, nullptr, "GetRPGAttributes", nullptr, nullptr, Z_Construct_UFunction_ARPGPlayerState_GetRPGAttributes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGPlayerState_GetRPGAttributes_Statics::PropPointers), sizeof(Z_Construct_UFunction_ARPGPlayerState_GetRPGAttributes_Statics::RPGPlayerState_eventGetRPGAttributes_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGPlayerState_GetRPGAttributes_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARPGPlayerState_GetRPGAttributes_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ARPGPlayerState_GetRPGAttributes_Statics::RPGPlayerState_eventGetRPGAttributes_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARPGPlayerState_GetRPGAttributes()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARPGPlayerState_GetRPGAttributes_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARPGPlayerState::execGetRPGAttributes)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(URPGAttributeSet**)Z_Param__Result=P_THIS->GetRPGAttributes();
	P_NATIVE_END;
}
// End Class ARPGPlayerState Function GetRPGAttributes

// Begin Class ARPGPlayerState
void ARPGPlayerState::StaticRegisterNativesARPGPlayerState()
{
	UClass* Class = ARPGPlayerState::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetRPGAbilitySystemComponent", &ARPGPlayerState::execGetRPGAbilitySystemComponent },
		{ "GetRPGAttributes", &ARPGPlayerState::execGetRPGAttributes },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARPGPlayerState);
UClass* Z_Construct_UClass_ARPGPlayerState_NoRegister()
{
	return ARPGPlayerState::StaticClass();
}
struct Z_Construct_UClass_ARPGPlayerState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Game/PlayerState/RPGPlayerState.h" },
		{ "ModuleRelativePath", "Public/Game/PlayerState/RPGPlayerState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RPGAbilitySystemComp_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RPGPlayerState" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Game/PlayerState/RPGPlayerState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RPGAttributes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RPGPlayerState" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Game/PlayerState/RPGPlayerState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RPGAbilitySystemComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RPGAttributes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ARPGPlayerState_GetRPGAbilitySystemComponent, "GetRPGAbilitySystemComponent" }, // 4213492715
		{ &Z_Construct_UFunction_ARPGPlayerState_GetRPGAttributes, "GetRPGAttributes" }, // 2686737382
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARPGPlayerState>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARPGPlayerState_Statics::NewProp_RPGAbilitySystemComp = { "RPGAbilitySystemComp", nullptr, (EPropertyFlags)0x014400000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARPGPlayerState, RPGAbilitySystemComp), Z_Construct_UClass_URPGAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RPGAbilitySystemComp_MetaData), NewProp_RPGAbilitySystemComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARPGPlayerState_Statics::NewProp_RPGAttributes = { "RPGAttributes", nullptr, (EPropertyFlags)0x014400000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARPGPlayerState, RPGAttributes), Z_Construct_UClass_URPGAttributeSet_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RPGAttributes_MetaData), NewProp_RPGAttributes_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARPGPlayerState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARPGPlayerState_Statics::NewProp_RPGAbilitySystemComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARPGPlayerState_Statics::NewProp_RPGAttributes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARPGPlayerState_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ARPGPlayerState_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerState,
	(UObject* (*)())Z_Construct_UPackage__Script_MultiplayerRPG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARPGPlayerState_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ARPGPlayerState_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UAbilitySystemInterface_NoRegister, (int32)VTABLE_OFFSET(ARPGPlayerState, IAbilitySystemInterface), false },  // 2272790346
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ARPGPlayerState_Statics::ClassParams = {
	&ARPGPlayerState::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ARPGPlayerState_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ARPGPlayerState_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARPGPlayerState_Statics::Class_MetaDataParams), Z_Construct_UClass_ARPGPlayerState_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ARPGPlayerState()
{
	if (!Z_Registration_Info_UClass_ARPGPlayerState.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARPGPlayerState.OuterSingleton, Z_Construct_UClass_ARPGPlayerState_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ARPGPlayerState.OuterSingleton;
}
template<> MULTIPLAYERRPG_API UClass* StaticClass<ARPGPlayerState>()
{
	return ARPGPlayerState::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ARPGPlayerState);
ARPGPlayerState::~ARPGPlayerState() {}
// End Class ARPGPlayerState

// Begin Registration
struct Z_CompiledInDeferFile_FID_MultiplayerRPG_Source_MultiplayerRPG_Public_Game_PlayerState_RPGPlayerState_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ARPGPlayerState, ARPGPlayerState::StaticClass, TEXT("ARPGPlayerState"), &Z_Registration_Info_UClass_ARPGPlayerState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARPGPlayerState), 3320615899U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MultiplayerRPG_Source_MultiplayerRPG_Public_Game_PlayerState_RPGPlayerState_h_84990142(TEXT("/Script/MultiplayerRPG"),
	Z_CompiledInDeferFile_FID_MultiplayerRPG_Source_MultiplayerRPG_Public_Game_PlayerState_RPGPlayerState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MultiplayerRPG_Source_MultiplayerRPG_Public_Game_PlayerState_RPGPlayerState_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
