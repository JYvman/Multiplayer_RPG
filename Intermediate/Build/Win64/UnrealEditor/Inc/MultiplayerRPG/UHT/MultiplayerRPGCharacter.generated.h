// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MultiplayerRPGCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class URPGAbilitySystemComponent;
class URPGAttributeSet;
#ifdef MULTIPLAYERRPG_MultiplayerRPGCharacter_generated_h
#error "MultiplayerRPGCharacter.generated.h already included, missing '#pragma once' in MultiplayerRPGCharacter.h"
#endif
#define MULTIPLAYERRPG_MultiplayerRPGCharacter_generated_h

#define FID_MultiplayerRPG_Source_MultiplayerRPG_MultiplayerRPGCharacter_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetAttributes); \
	DECLARE_FUNCTION(execGetAbilitySystemComponent); \
	DECLARE_FUNCTION(execActivateRangedAbility); \
	DECLARE_FUNCTION(execActivateMeleeAbility);


#define FID_MultiplayerRPG_Source_MultiplayerRPG_MultiplayerRPGCharacter_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMultiplayerRPGCharacter(); \
	friend struct Z_Construct_UClass_AMultiplayerRPGCharacter_Statics; \
public: \
	DECLARE_CLASS(AMultiplayerRPGCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MultiplayerRPG"), NO_API) \
	DECLARE_SERIALIZER(AMultiplayerRPGCharacter)


#define FID_MultiplayerRPG_Source_MultiplayerRPG_MultiplayerRPGCharacter_h_32_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AMultiplayerRPGCharacter(AMultiplayerRPGCharacter&&); \
	AMultiplayerRPGCharacter(const AMultiplayerRPGCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMultiplayerRPGCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMultiplayerRPGCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMultiplayerRPGCharacter) \
	NO_API virtual ~AMultiplayerRPGCharacter();


#define FID_MultiplayerRPG_Source_MultiplayerRPG_MultiplayerRPGCharacter_h_29_PROLOG
#define FID_MultiplayerRPG_Source_MultiplayerRPG_MultiplayerRPGCharacter_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MultiplayerRPG_Source_MultiplayerRPG_MultiplayerRPGCharacter_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MultiplayerRPG_Source_MultiplayerRPG_MultiplayerRPGCharacter_h_32_INCLASS_NO_PURE_DECLS \
	FID_MultiplayerRPG_Source_MultiplayerRPG_MultiplayerRPGCharacter_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MULTIPLAYERRPG_API UClass* StaticClass<class AMultiplayerRPGCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MultiplayerRPG_Source_MultiplayerRPG_MultiplayerRPGCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
