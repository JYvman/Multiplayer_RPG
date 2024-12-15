// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Game/PlayerState/RPGPlayerState.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class URPGAbilitySystemComponent;
class URPGAttributeSet;
#ifdef MULTIPLAYERRPG_RPGPlayerState_generated_h
#error "RPGPlayerState.generated.h already included, missing '#pragma once' in RPGPlayerState.h"
#endif
#define MULTIPLAYERRPG_RPGPlayerState_generated_h

#define FID_MultiplayerRPG_Source_MultiplayerRPG_Public_Game_PlayerState_RPGPlayerState_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetRPGAttributes); \
	DECLARE_FUNCTION(execGetRPGAbilitySystemComponent);


#define FID_MultiplayerRPG_Source_MultiplayerRPG_Public_Game_PlayerState_RPGPlayerState_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARPGPlayerState(); \
	friend struct Z_Construct_UClass_ARPGPlayerState_Statics; \
public: \
	DECLARE_CLASS(ARPGPlayerState, APlayerState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MultiplayerRPG"), NO_API) \
	DECLARE_SERIALIZER(ARPGPlayerState) \
	virtual UObject* _getUObject() const override { return const_cast<ARPGPlayerState*>(this); }


#define FID_MultiplayerRPG_Source_MultiplayerRPG_Public_Game_PlayerState_RPGPlayerState_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ARPGPlayerState(ARPGPlayerState&&); \
	ARPGPlayerState(const ARPGPlayerState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARPGPlayerState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARPGPlayerState); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ARPGPlayerState) \
	NO_API virtual ~ARPGPlayerState();


#define FID_MultiplayerRPG_Source_MultiplayerRPG_Public_Game_PlayerState_RPGPlayerState_h_13_PROLOG
#define FID_MultiplayerRPG_Source_MultiplayerRPG_Public_Game_PlayerState_RPGPlayerState_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MultiplayerRPG_Source_MultiplayerRPG_Public_Game_PlayerState_RPGPlayerState_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MultiplayerRPG_Source_MultiplayerRPG_Public_Game_PlayerState_RPGPlayerState_h_16_INCLASS_NO_PURE_DECLS \
	FID_MultiplayerRPG_Source_MultiplayerRPG_Public_Game_PlayerState_RPGPlayerState_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MULTIPLAYERRPG_API UClass* StaticClass<class ARPGPlayerState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MultiplayerRPG_Source_MultiplayerRPG_Public_Game_PlayerState_RPGPlayerState_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
