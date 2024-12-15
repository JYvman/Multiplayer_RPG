// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MultiplayerRPGGameMode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MULTIPLAYERRPG_MultiplayerRPGGameMode_generated_h
#error "MultiplayerRPGGameMode.generated.h already included, missing '#pragma once' in MultiplayerRPGGameMode.h"
#endif
#define MULTIPLAYERRPG_MultiplayerRPGGameMode_generated_h

#define FID_MultiplayerRPG_Source_MultiplayerRPG_MultiplayerRPGGameMode_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMultiplayerRPGGameMode(); \
	friend struct Z_Construct_UClass_AMultiplayerRPGGameMode_Statics; \
public: \
	DECLARE_CLASS(AMultiplayerRPGGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/MultiplayerRPG"), MULTIPLAYERRPG_API) \
	DECLARE_SERIALIZER(AMultiplayerRPGGameMode)


#define FID_MultiplayerRPG_Source_MultiplayerRPG_MultiplayerRPGGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AMultiplayerRPGGameMode(AMultiplayerRPGGameMode&&); \
	AMultiplayerRPGGameMode(const AMultiplayerRPGGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MULTIPLAYERRPG_API, AMultiplayerRPGGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMultiplayerRPGGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMultiplayerRPGGameMode) \
	MULTIPLAYERRPG_API virtual ~AMultiplayerRPGGameMode();


#define FID_MultiplayerRPG_Source_MultiplayerRPG_MultiplayerRPGGameMode_h_9_PROLOG
#define FID_MultiplayerRPG_Source_MultiplayerRPG_MultiplayerRPGGameMode_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MultiplayerRPG_Source_MultiplayerRPG_MultiplayerRPGGameMode_h_12_INCLASS_NO_PURE_DECLS \
	FID_MultiplayerRPG_Source_MultiplayerRPG_MultiplayerRPGGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MULTIPLAYERRPG_API UClass* StaticClass<class AMultiplayerRPGGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MultiplayerRPG_Source_MultiplayerRPG_MultiplayerRPGGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
