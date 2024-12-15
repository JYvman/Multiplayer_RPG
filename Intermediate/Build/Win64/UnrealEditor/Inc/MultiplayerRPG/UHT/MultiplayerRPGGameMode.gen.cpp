// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MultiplayerRPG/MultiplayerRPGGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMultiplayerRPGGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
MULTIPLAYERRPG_API UClass* Z_Construct_UClass_AMultiplayerRPGGameMode();
MULTIPLAYERRPG_API UClass* Z_Construct_UClass_AMultiplayerRPGGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_MultiplayerRPG();
// End Cross Module References

// Begin Class AMultiplayerRPGGameMode
void AMultiplayerRPGGameMode::StaticRegisterNativesAMultiplayerRPGGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMultiplayerRPGGameMode);
UClass* Z_Construct_UClass_AMultiplayerRPGGameMode_NoRegister()
{
	return AMultiplayerRPGGameMode::StaticClass();
}
struct Z_Construct_UClass_AMultiplayerRPGGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "MultiplayerRPGGameMode.h" },
		{ "ModuleRelativePath", "MultiplayerRPGGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMultiplayerRPGGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AMultiplayerRPGGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_MultiplayerRPG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMultiplayerRPGGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMultiplayerRPGGameMode_Statics::ClassParams = {
	&AMultiplayerRPGGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMultiplayerRPGGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AMultiplayerRPGGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMultiplayerRPGGameMode()
{
	if (!Z_Registration_Info_UClass_AMultiplayerRPGGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMultiplayerRPGGameMode.OuterSingleton, Z_Construct_UClass_AMultiplayerRPGGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMultiplayerRPGGameMode.OuterSingleton;
}
template<> MULTIPLAYERRPG_API UClass* StaticClass<AMultiplayerRPGGameMode>()
{
	return AMultiplayerRPGGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMultiplayerRPGGameMode);
AMultiplayerRPGGameMode::~AMultiplayerRPGGameMode() {}
// End Class AMultiplayerRPGGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_MultiplayerRPG_Source_MultiplayerRPG_MultiplayerRPGGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMultiplayerRPGGameMode, AMultiplayerRPGGameMode::StaticClass, TEXT("AMultiplayerRPGGameMode"), &Z_Registration_Info_UClass_AMultiplayerRPGGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMultiplayerRPGGameMode), 2205295109U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MultiplayerRPG_Source_MultiplayerRPG_MultiplayerRPGGameMode_h_269405750(TEXT("/Script/MultiplayerRPG"),
	Z_CompiledInDeferFile_FID_MultiplayerRPG_Source_MultiplayerRPG_MultiplayerRPGGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MultiplayerRPG_Source_MultiplayerRPG_MultiplayerRPGGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
