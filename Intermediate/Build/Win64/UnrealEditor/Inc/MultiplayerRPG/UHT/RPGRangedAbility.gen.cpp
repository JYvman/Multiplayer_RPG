// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MultiplayerRPG/Public/RPGRangedAbility.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRPGRangedAbility() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility();
MULTIPLAYERRPG_API UClass* Z_Construct_UClass_URPGRangedAbility();
MULTIPLAYERRPG_API UClass* Z_Construct_UClass_URPGRangedAbility_NoRegister();
UPackage* Z_Construct_UPackage__Script_MultiplayerRPG();
// End Cross Module References

// Begin Class URPGRangedAbility
void URPGRangedAbility::StaticRegisterNativesURPGRangedAbility()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URPGRangedAbility);
UClass* Z_Construct_UClass_URPGRangedAbility_NoRegister()
{
	return URPGRangedAbility::StaticClass();
}
struct Z_Construct_UClass_URPGRangedAbility_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * URPGRangedAbility\n *\n * Handles logic for ranged abilities, including spawning projectiles.\n */" },
#endif
		{ "IncludePath", "RPGRangedAbility.h" },
		{ "ModuleRelativePath", "Public/RPGRangedAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "URPGRangedAbility\n\nHandles logic for ranged abilities, including spawning projectiles." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileClass_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Ranged Ability" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * The class of the projectile to spawn when this ability is activated.\n     * Must be set in Blueprint or C++ before use.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/RPGRangedAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The class of the projectile to spawn when this ability is activated.\nMust be set in Blueprint or C++ before use." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ProjectileClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URPGRangedAbility>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_URPGRangedAbility_Statics::NewProp_ProjectileClass = { "ProjectileClass", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URPGRangedAbility, ProjectileClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectileClass_MetaData), NewProp_ProjectileClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URPGRangedAbility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URPGRangedAbility_Statics::NewProp_ProjectileClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URPGRangedAbility_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_URPGRangedAbility_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameplayAbility,
	(UObject* (*)())Z_Construct_UPackage__Script_MultiplayerRPG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URPGRangedAbility_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URPGRangedAbility_Statics::ClassParams = {
	&URPGRangedAbility::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_URPGRangedAbility_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_URPGRangedAbility_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URPGRangedAbility_Statics::Class_MetaDataParams), Z_Construct_UClass_URPGRangedAbility_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URPGRangedAbility()
{
	if (!Z_Registration_Info_UClass_URPGRangedAbility.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URPGRangedAbility.OuterSingleton, Z_Construct_UClass_URPGRangedAbility_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URPGRangedAbility.OuterSingleton;
}
template<> MULTIPLAYERRPG_API UClass* StaticClass<URPGRangedAbility>()
{
	return URPGRangedAbility::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(URPGRangedAbility);
URPGRangedAbility::~URPGRangedAbility() {}
// End Class URPGRangedAbility

// Begin Registration
struct Z_CompiledInDeferFile_FID_MultiplayerRPG_Source_MultiplayerRPG_Public_RPGRangedAbility_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URPGRangedAbility, URPGRangedAbility::StaticClass, TEXT("URPGRangedAbility"), &Z_Registration_Info_UClass_URPGRangedAbility, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URPGRangedAbility), 4237592111U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MultiplayerRPG_Source_MultiplayerRPG_Public_RPGRangedAbility_h_2081548322(TEXT("/Script/MultiplayerRPG"),
	Z_CompiledInDeferFile_FID_MultiplayerRPG_Source_MultiplayerRPG_Public_RPGRangedAbility_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MultiplayerRPG_Source_MultiplayerRPG_Public_RPGRangedAbility_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
