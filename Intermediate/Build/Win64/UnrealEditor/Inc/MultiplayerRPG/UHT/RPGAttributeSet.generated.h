// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AbilitySystem/Attributes/RPGAttributeSet.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"
#include "Net/Core/PushModel/PushModelMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayAttributeData;
#ifdef MULTIPLAYERRPG_RPGAttributeSet_generated_h
#error "RPGAttributeSet.generated.h already included, missing '#pragma once' in RPGAttributeSet.h"
#endif
#define MULTIPLAYERRPG_RPGAttributeSet_generated_h

#define FID_MultiplayerRPG_Source_MultiplayerRPG_Public_AbilitySystem_Attributes_RPGAttributeSet_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnRep_MaxHealth); \
	DECLARE_FUNCTION(execOnRep_Health);


#define FID_MultiplayerRPG_Source_MultiplayerRPG_Public_AbilitySystem_Attributes_RPGAttributeSet_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURPGAttributeSet(); \
	friend struct Z_Construct_UClass_URPGAttributeSet_Statics; \
public: \
	DECLARE_CLASS(URPGAttributeSet, UAttributeSet, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MultiplayerRPG"), NO_API) \
	DECLARE_SERIALIZER(URPGAttributeSet) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Health=NETFIELD_REP_START, \
		MaxHealth, \
		NETFIELD_REP_END=MaxHealth	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override; \
private: \
	REPLICATED_BASE_CLASS(URPGAttributeSet) \
public:


#define FID_MultiplayerRPG_Source_MultiplayerRPG_Public_AbilitySystem_Attributes_RPGAttributeSet_h_26_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	URPGAttributeSet(URPGAttributeSet&&); \
	URPGAttributeSet(const URPGAttributeSet&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URPGAttributeSet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URPGAttributeSet); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URPGAttributeSet) \
	NO_API virtual ~URPGAttributeSet();


#define FID_MultiplayerRPG_Source_MultiplayerRPG_Public_AbilitySystem_Attributes_RPGAttributeSet_h_23_PROLOG
#define FID_MultiplayerRPG_Source_MultiplayerRPG_Public_AbilitySystem_Attributes_RPGAttributeSet_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MultiplayerRPG_Source_MultiplayerRPG_Public_AbilitySystem_Attributes_RPGAttributeSet_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MultiplayerRPG_Source_MultiplayerRPG_Public_AbilitySystem_Attributes_RPGAttributeSet_h_26_INCLASS_NO_PURE_DECLS \
	FID_MultiplayerRPG_Source_MultiplayerRPG_Public_AbilitySystem_Attributes_RPGAttributeSet_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MULTIPLAYERRPG_API UClass* StaticClass<class URPGAttributeSet>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MultiplayerRPG_Source_MultiplayerRPG_Public_AbilitySystem_Attributes_RPGAttributeSet_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
