// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef U06_BATTLE_CGhostTrail_generated_h
#error "CGhostTrail.generated.h already included, missing '#pragma once' in CGhostTrail.h"
#endif
#define U06_BATTLE_CGhostTrail_generated_h

#define U06_Battle_Bow_Source_U06_Battle_Weapons_AddOns_CGhostTrail_h_12_SPARSE_DATA
#define U06_Battle_Bow_Source_U06_Battle_Weapons_AddOns_CGhostTrail_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRestoreMesh);


#define U06_Battle_Bow_Source_U06_Battle_Weapons_AddOns_CGhostTrail_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRestoreMesh);


#define U06_Battle_Bow_Source_U06_Battle_Weapons_AddOns_CGhostTrail_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACGhostTrail(); \
	friend struct Z_Construct_UClass_ACGhostTrail_Statics; \
public: \
	DECLARE_CLASS(ACGhostTrail, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/U06_Battle"), NO_API) \
	DECLARE_SERIALIZER(ACGhostTrail)


#define U06_Battle_Bow_Source_U06_Battle_Weapons_AddOns_CGhostTrail_h_12_INCLASS \
private: \
	static void StaticRegisterNativesACGhostTrail(); \
	friend struct Z_Construct_UClass_ACGhostTrail_Statics; \
public: \
	DECLARE_CLASS(ACGhostTrail, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/U06_Battle"), NO_API) \
	DECLARE_SERIALIZER(ACGhostTrail)


#define U06_Battle_Bow_Source_U06_Battle_Weapons_AddOns_CGhostTrail_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACGhostTrail(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACGhostTrail) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACGhostTrail); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACGhostTrail); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACGhostTrail(ACGhostTrail&&); \
	NO_API ACGhostTrail(const ACGhostTrail&); \
public:


#define U06_Battle_Bow_Source_U06_Battle_Weapons_AddOns_CGhostTrail_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACGhostTrail(ACGhostTrail&&); \
	NO_API ACGhostTrail(const ACGhostTrail&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACGhostTrail); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACGhostTrail); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACGhostTrail)


#define U06_Battle_Bow_Source_U06_Battle_Weapons_AddOns_CGhostTrail_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__StartDelay() { return STRUCT_OFFSET(ACGhostTrail, StartDelay); } \
	FORCEINLINE static uint32 __PPO__Interval() { return STRUCT_OFFSET(ACGhostTrail, Interval); } \
	FORCEINLINE static uint32 __PPO__Color() { return STRUCT_OFFSET(ACGhostTrail, Color); } \
	FORCEINLINE static uint32 __PPO__Exponent() { return STRUCT_OFFSET(ACGhostTrail, Exponent); } \
	FORCEINLINE static uint32 __PPO__Scale() { return STRUCT_OFFSET(ACGhostTrail, Scale); } \
	FORCEINLINE static uint32 __PPO__ScaleAmount() { return STRUCT_OFFSET(ACGhostTrail, ScaleAmount); } \
	FORCEINLINE static uint32 __PPO__Mesh() { return STRUCT_OFFSET(ACGhostTrail, Mesh); }


#define U06_Battle_Bow_Source_U06_Battle_Weapons_AddOns_CGhostTrail_h_9_PROLOG
#define U06_Battle_Bow_Source_U06_Battle_Weapons_AddOns_CGhostTrail_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	U06_Battle_Bow_Source_U06_Battle_Weapons_AddOns_CGhostTrail_h_12_PRIVATE_PROPERTY_OFFSET \
	U06_Battle_Bow_Source_U06_Battle_Weapons_AddOns_CGhostTrail_h_12_SPARSE_DATA \
	U06_Battle_Bow_Source_U06_Battle_Weapons_AddOns_CGhostTrail_h_12_RPC_WRAPPERS \
	U06_Battle_Bow_Source_U06_Battle_Weapons_AddOns_CGhostTrail_h_12_INCLASS \
	U06_Battle_Bow_Source_U06_Battle_Weapons_AddOns_CGhostTrail_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define U06_Battle_Bow_Source_U06_Battle_Weapons_AddOns_CGhostTrail_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	U06_Battle_Bow_Source_U06_Battle_Weapons_AddOns_CGhostTrail_h_12_PRIVATE_PROPERTY_OFFSET \
	U06_Battle_Bow_Source_U06_Battle_Weapons_AddOns_CGhostTrail_h_12_SPARSE_DATA \
	U06_Battle_Bow_Source_U06_Battle_Weapons_AddOns_CGhostTrail_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	U06_Battle_Bow_Source_U06_Battle_Weapons_AddOns_CGhostTrail_h_12_INCLASS_NO_PURE_DECLS \
	U06_Battle_Bow_Source_U06_Battle_Weapons_AddOns_CGhostTrail_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> U06_BATTLE_API UClass* StaticClass<class ACGhostTrail>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID U06_Battle_Bow_Source_U06_Battle_Weapons_AddOns_CGhostTrail_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
