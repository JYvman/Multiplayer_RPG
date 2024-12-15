// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MultiplayerRPG/Public/RPGMeleeAbility.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRPGMeleeAbility() {}

// Begin Cross Module References
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility();
MULTIPLAYERRPG_API UClass* Z_Construct_UClass_URPGMeleeAbility();
MULTIPLAYERRPG_API UClass* Z_Construct_UClass_URPGMeleeAbility_NoRegister();
UPackage* Z_Construct_UPackage__Script_MultiplayerRPG();
// End Cross Module References

// Begin Class URPGMeleeAbility
void URPGMeleeAbility::StaticRegisterNativesURPGMeleeAbility()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URPGMeleeAbility);
UClass* Z_Construct_UClass_URPGMeleeAbility_NoRegister()
{
	return URPGMeleeAbility::StaticClass();
}
struct Z_Construct_UClass_URPGMeleeAbility_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * URPGMeleeAbility\n *\n * Handles melee combat ability logic for the character. Inherits from UGameplayAbility\n * and overrides its ActivateAbility function to perform specific melee attack actions.\n */" },
#endif
		{ "IncludePath", "RPGMeleeAbility.h" },
		{ "ModuleRelativePath", "Public/RPGMeleeAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "URPGMeleeAbility\n\nHandles melee combat ability logic for the character. Inherits from UGameplayAbility\nand overrides its ActivateAbility function to perform specific melee attack actions." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URPGMeleeAbility>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_URPGMeleeAbility_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameplayAbility,
	(UObject* (*)())Z_Construct_UPackage__Script_MultiplayerRPG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URPGMeleeAbility_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URPGMeleeAbility_Statics::ClassParams = {
	&URPGMeleeAbility::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URPGMeleeAbility_Statics::Class_MetaDataParams), Z_Construct_UClass_URPGMeleeAbility_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URPGMeleeAbility()
{
	if (!Z_Registration_Info_UClass_URPGMeleeAbility.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URPGMeleeAbility.OuterSingleton, Z_Construct_UClass_URPGMeleeAbility_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URPGMeleeAbility.OuterSingleton;
}
template<> MULTIPLAYERRPG_API UClass* StaticClass<URPGMeleeAbility>()
{
	return URPGMeleeAbility::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(URPGMeleeAbility);
URPGMeleeAbility::~URPGMeleeAbility() {}
// End Class URPGMeleeAbility

// Begin Registration
struct Z_CompiledInDeferFile_FID_MultiplayerRPG_Source_MultiplayerRPG_Public_RPGMeleeAbility_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URPGMeleeAbility, URPGMeleeAbility::StaticClass, TEXT("URPGMeleeAbility"), &Z_Registration_Info_UClass_URPGMeleeAbility, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URPGMeleeAbility), 495258620U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MultiplayerRPG_Source_MultiplayerRPG_Public_RPGMeleeAbility_h_1007997248(TEXT("/Script/MultiplayerRPG"),
	Z_CompiledInDeferFile_FID_MultiplayerRPG_Source_MultiplayerRPG_Public_RPGMeleeAbility_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MultiplayerRPG_Source_MultiplayerRPG_Public_RPGMeleeAbility_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
