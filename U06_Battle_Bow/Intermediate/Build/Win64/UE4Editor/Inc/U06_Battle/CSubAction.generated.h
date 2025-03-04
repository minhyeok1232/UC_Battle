// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef U06_BATTLE_CSubAction_generated_h
#error "CSubAction.generated.h already included, missing '#pragma once' in CSubAction.h"
#endif
#define U06_BATTLE_CSubAction_generated_h

#define U06_Battle_Bow_Source_U06_Battle_Weapons_CSubAction_h_16_SPARSE_DATA
#define U06_Battle_Bow_Source_U06_Battle_Weapons_CSubAction_h_16_RPC_WRAPPERS \
	virtual void Tick_Implementation(float InDeltaTime); \
	virtual void End_SubAction_Implementation(); \
	virtual void Begin_SubAction_Implementation(); \
 \
	DECLARE_FUNCTION(execTick); \
	DECLARE_FUNCTION(execEnd_SubAction); \
	DECLARE_FUNCTION(execBegin_SubAction);


#define U06_Battle_Bow_Source_U06_Battle_Weapons_CSubAction_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execTick); \
	DECLARE_FUNCTION(execEnd_SubAction); \
	DECLARE_FUNCTION(execBegin_SubAction);


#define U06_Battle_Bow_Source_U06_Battle_Weapons_CSubAction_h_16_EVENT_PARMS \
	struct CSubAction_eventTick_Parms \
	{ \
		float InDeltaTime; \
	};


#define U06_Battle_Bow_Source_U06_Battle_Weapons_CSubAction_h_16_CALLBACK_WRAPPERS
#define U06_Battle_Bow_Source_U06_Battle_Weapons_CSubAction_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCSubAction(); \
	friend struct Z_Construct_UClass_UCSubAction_Statics; \
public: \
	DECLARE_CLASS(UCSubAction, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/U06_Battle"), NO_API) \
	DECLARE_SERIALIZER(UCSubAction)


#define U06_Battle_Bow_Source_U06_Battle_Weapons_CSubAction_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUCSubAction(); \
	friend struct Z_Construct_UClass_UCSubAction_Statics; \
public: \
	DECLARE_CLASS(UCSubAction, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/U06_Battle"), NO_API) \
	DECLARE_SERIALIZER(UCSubAction)


#define U06_Battle_Bow_Source_U06_Battle_Weapons_CSubAction_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCSubAction(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCSubAction) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCSubAction); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCSubAction); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCSubAction(UCSubAction&&); \
	NO_API UCSubAction(const UCSubAction&); \
public:


#define U06_Battle_Bow_Source_U06_Battle_Weapons_CSubAction_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCSubAction(UCSubAction&&); \
	NO_API UCSubAction(const UCSubAction&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCSubAction); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCSubAction); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCSubAction)


#define U06_Battle_Bow_Source_U06_Battle_Weapons_CSubAction_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Owner() { return STRUCT_OFFSET(UCSubAction, Owner); } \
	FORCEINLINE static uint32 __PPO__Attachment() { return STRUCT_OFFSET(UCSubAction, Attachment); } \
	FORCEINLINE static uint32 __PPO__DoAction() { return STRUCT_OFFSET(UCSubAction, DoAction); } \
	FORCEINLINE static uint32 __PPO__State() { return STRUCT_OFFSET(UCSubAction, State); } \
	FORCEINLINE static uint32 __PPO__Movement() { return STRUCT_OFFSET(UCSubAction, Movement); }


#define U06_Battle_Bow_Source_U06_Battle_Weapons_CSubAction_h_12_PROLOG \
	U06_Battle_Bow_Source_U06_Battle_Weapons_CSubAction_h_16_EVENT_PARMS


#define U06_Battle_Bow_Source_U06_Battle_Weapons_CSubAction_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	U06_Battle_Bow_Source_U06_Battle_Weapons_CSubAction_h_16_PRIVATE_PROPERTY_OFFSET \
	U06_Battle_Bow_Source_U06_Battle_Weapons_CSubAction_h_16_SPARSE_DATA \
	U06_Battle_Bow_Source_U06_Battle_Weapons_CSubAction_h_16_RPC_WRAPPERS \
	U06_Battle_Bow_Source_U06_Battle_Weapons_CSubAction_h_16_CALLBACK_WRAPPERS \
	U06_Battle_Bow_Source_U06_Battle_Weapons_CSubAction_h_16_INCLASS \
	U06_Battle_Bow_Source_U06_Battle_Weapons_CSubAction_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define U06_Battle_Bow_Source_U06_Battle_Weapons_CSubAction_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	U06_Battle_Bow_Source_U06_Battle_Weapons_CSubAction_h_16_PRIVATE_PROPERTY_OFFSET \
	U06_Battle_Bow_Source_U06_Battle_Weapons_CSubAction_h_16_SPARSE_DATA \
	U06_Battle_Bow_Source_U06_Battle_Weapons_CSubAction_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	U06_Battle_Bow_Source_U06_Battle_Weapons_CSubAction_h_16_CALLBACK_WRAPPERS \
	U06_Battle_Bow_Source_U06_Battle_Weapons_CSubAction_h_16_INCLASS_NO_PURE_DECLS \
	U06_Battle_Bow_Source_U06_Battle_Weapons_CSubAction_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> U06_BATTLE_API UClass* StaticClass<class UCSubAction>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID U06_Battle_Bow_Source_U06_Battle_Weapons_CSubAction_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
