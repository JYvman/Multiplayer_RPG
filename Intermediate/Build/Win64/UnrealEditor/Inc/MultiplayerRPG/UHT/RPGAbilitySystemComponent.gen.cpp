// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MultiplayerRPG/Public/AbilitySystem/RPGAbilitySystemComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRPGAbilitySystemComponent() {}

// Begin Cross Module References
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent();
MULTIPLAYERRPG_API UClass* Z_Construct_UClass_URPGAbilitySystemComponent();
MULTIPLAYERRPG_API UClass* Z_Construct_UClass_URPGAbilitySystemComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_MultiplayerRPG();
// End Cross Module References

// Begin Class URPGAbilitySystemComponent
void URPGAbilitySystemComponent::StaticRegisterNativesURPGAbilitySystemComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URPGAbilitySystemComponent);
UClass* Z_Construct_UClass_URPGAbilitySystemComponent_NoRegister()
{
	return URPGAbilitySystemComponent::StaticClass();
}
struct Z_Construct_UClass_URPGAbilitySystemComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * URPGAbilitySystemComponent\n *\n * Custom Ability System Component for handling RPG-specific gameplay abilities and attributes.\n * Extend this class to add custom logic for your game's ability system.\n */" },
#endif
		{ "HideCategories", "Object LOD Lighting Transform Sockets TextureStreaming Object LOD Lighting Transform Sockets TextureStreaming" },
		{ "IncludePath", "AbilitySystem/RPGAbilitySystemComponent.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/RPGAbilitySystemComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "URPGAbilitySystemComponent\n\nCustom Ability System Component for handling RPG-specific gameplay abilities and attributes.\nExtend this class to add custom logic for your game's ability system." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URPGAbilitySystemComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_URPGAbilitySystemComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAbilitySystemComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_MultiplayerRPG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URPGAbilitySystemComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URPGAbilitySystemComponent_Statics::ClassParams = {
	&URPGAbilitySystemComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x00B010A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URPGAbilitySystemComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_URPGAbilitySystemComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URPGAbilitySystemComponent()
{
	if (!Z_Registration_Info_UClass_URPGAbilitySystemComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URPGAbilitySystemComponent.OuterSingleton, Z_Construct_UClass_URPGAbilitySystemComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URPGAbilitySystemComponent.OuterSingleton;
}
template<> MULTIPLAYERRPG_API UClass* StaticClass<URPGAbilitySystemComponent>()
{
	return URPGAbilitySystemComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(URPGAbilitySystemComponent);
URPGAbilitySystemComponent::~URPGAbilitySystemComponent() {}
// End Class URPGAbilitySystemComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_MultiplayerRPG_Source_MultiplayerRPG_Public_AbilitySystem_RPGAbilitySystemComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URPGAbilitySystemComponent, URPGAbilitySystemComponent::StaticClass, TEXT("URPGAbilitySystemComponent"), &Z_Registration_Info_UClass_URPGAbilitySystemComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URPGAbilitySystemComponent), 806663685U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MultiplayerRPG_Source_MultiplayerRPG_Public_AbilitySystem_RPGAbilitySystemComponent_h_3618462641(TEXT("/Script/MultiplayerRPG"),
	Z_CompiledInDeferFile_FID_MultiplayerRPG_Source_MultiplayerRPG_Public_AbilitySystem_RPGAbilitySystemComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MultiplayerRPG_Source_MultiplayerRPG_Public_AbilitySystem_RPGAbilitySystemComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
