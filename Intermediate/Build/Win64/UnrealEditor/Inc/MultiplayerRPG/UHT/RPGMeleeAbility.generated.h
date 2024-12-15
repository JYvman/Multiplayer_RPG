// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RPGMeleeAbility.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MULTIPLAYERRPG_RPGMeleeAbility_generated_h
#error "RPGMeleeAbility.generated.h already included, missing '#pragma once' in RPGMeleeAbility.h"
#endif
#define MULTIPLAYERRPG_RPGMeleeAbility_generated_h

#define FID_MultiplayerRPG_Source_MultiplayerRPG_Public_RPGMeleeAbility_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURPGMeleeAbility(); \
	friend struct Z_Construct_UClass_URPGMeleeAbility_Statics; \
public: \
	DECLARE_CLASS(URPGMeleeAbility, UGameplayAbility, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MultiplayerRPG"), NO_API) \
	DECLARE_SERIALIZER(URPGMeleeAbility)


#define FID_MultiplayerRPG_Source_MultiplayerRPG_Public_RPGMeleeAbility_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	URPGMeleeAbility(URPGMeleeAbility&&); \
	URPGMeleeAbility(const URPGMeleeAbility&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URPGMeleeAbility); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URPGMeleeAbility); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URPGMeleeAbility) \
	NO_API virtual ~URPGMeleeAbility();


#define FID_MultiplayerRPG_Source_MultiplayerRPG_Public_RPGMeleeAbility_h_13_PROLOG
#define FID_MultiplayerRPG_Source_MultiplayerRPG_Public_RPGMeleeAbility_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MultiplayerRPG_Source_MultiplayerRPG_Public_RPGMeleeAbility_h_16_INCLASS_NO_PURE_DECLS \
	FID_MultiplayerRPG_Source_MultiplayerRPG_Public_RPGMeleeAbility_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MULTIPLAYERRPG_API UClass* StaticClass<class URPGMeleeAbility>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MultiplayerRPG_Source_MultiplayerRPG_Public_RPGMeleeAbility_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
