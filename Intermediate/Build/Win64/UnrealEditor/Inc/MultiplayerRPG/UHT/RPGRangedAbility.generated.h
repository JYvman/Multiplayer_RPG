// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RPGRangedAbility.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MULTIPLAYERRPG_RPGRangedAbility_generated_h
#error "RPGRangedAbility.generated.h already included, missing '#pragma once' in RPGRangedAbility.h"
#endif
#define MULTIPLAYERRPG_RPGRangedAbility_generated_h

#define FID_MultiplayerRPG_Source_MultiplayerRPG_Public_RPGRangedAbility_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURPGRangedAbility(); \
	friend struct Z_Construct_UClass_URPGRangedAbility_Statics; \
public: \
	DECLARE_CLASS(URPGRangedAbility, UGameplayAbility, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MultiplayerRPG"), NO_API) \
	DECLARE_SERIALIZER(URPGRangedAbility)


#define FID_MultiplayerRPG_Source_MultiplayerRPG_Public_RPGRangedAbility_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	URPGRangedAbility(URPGRangedAbility&&); \
	URPGRangedAbility(const URPGRangedAbility&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URPGRangedAbility); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URPGRangedAbility); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URPGRangedAbility) \
	NO_API virtual ~URPGRangedAbility();


#define FID_MultiplayerRPG_Source_MultiplayerRPG_Public_RPGRangedAbility_h_12_PROLOG
#define FID_MultiplayerRPG_Source_MultiplayerRPG_Public_RPGRangedAbility_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MultiplayerRPG_Source_MultiplayerRPG_Public_RPGRangedAbility_h_15_INCLASS_NO_PURE_DECLS \
	FID_MultiplayerRPG_Source_MultiplayerRPG_Public_RPGRangedAbility_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MULTIPLAYERRPG_API UClass* StaticClass<class URPGRangedAbility>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MultiplayerRPG_Source_MultiplayerRPG_Public_RPGRangedAbility_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
