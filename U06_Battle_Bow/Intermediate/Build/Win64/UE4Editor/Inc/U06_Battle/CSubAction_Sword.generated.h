// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ACharacter;
class AActor;
#ifdef U06_BATTLE_CSubAction_Sword_generated_h
#error "CSubAction_Sword.generated.h already included, missing '#pragma once' in CSubAction_Sword.h"
#endif
#define U06_BATTLE_CSubAction_Sword_generated_h

#define U06_Battle_Bow_Source_U06_Battle_Weapons_SubActions_CSubAction_Sword_h_17_SPARSE_DATA
#define U06_Battle_Bow_Source_U06_Battle_Weapons_SubActions_CSubAction_Sword_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnAttachmentEndCollision); \
	DECLARE_FUNCTION(execOnAttachmentBeginOverlap);


#define U06_Battle_Bow_Source_U06_Battle_Weapons_SubActions_CSubAction_Sword_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnAttachmentEndCollision); \
	DECLARE_FUNCTION(execOnAttachmentBeginOverlap);


#define U06_Battle_Bow_Source_U06_Battle_Weapons_SubActions_CSubAction_Sword_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCSubAction_Sword(); \
	friend struct Z_Construct_UClass_UCSubAction_Sword_Statics; \
public: \
	DECLARE_CLASS(UCSubAction_Sword, UCSubAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/U06_Battle"), NO_API) \
	DECLARE_SERIALIZER(UCSubAction_Sword)


#define U06_Battle_Bow_Source_U06_Battle_Weapons_SubActions_CSubAction_Sword_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUCSubAction_Sword(); \
	friend struct Z_Construct_UClass_UCSubAction_Sword_Statics; \
public: \
	DECLARE_CLASS(UCSubAction_Sword, UCSubAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/U06_Battle"), NO_API) \
	DECLARE_SERIALIZER(UCSubAction_Sword)


#define U06_Battle_Bow_Source_U06_Battle_Weapons_SubActions_CSubAction_Sword_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCSubAction_Sword(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCSubAction_Sword) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCSubAction_Sword); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCSubAction_Sword); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCSubAction_Sword(UCSubAction_Sword&&); \
	NO_API UCSubAction_Sword(const UCSubAction_Sword&); \
public:


#define U06_Battle_Bow_Source_U06_Battle_Weapons_SubActions_CSubAction_Sword_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCSubAction_Sword(UCSubAction_Sword&&); \
	NO_API UCSubAction_Sword(const UCSubAction_Sword&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCSubAction_Sword); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCSubAction_Sword); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCSubAction_Sword)


#define U06_Battle_Bow_Source_U06_Battle_Weapons_SubActions_CSubAction_Sword_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Distance() { return STRUCT_OFFSET(UCSubAction_Sword, Distance); } \
	FORCEINLINE static uint32 __PPO__Speed() { return STRUCT_OFFSET(UCSubAction_Sword, Speed); } \
	FORCEINLINE static uint32 __PPO__DrawDebug() { return STRUCT_OFFSET(UCSubAction_Sword, DrawDebug); } \
	FORCEINLINE static uint32 __PPO__ActionData() { return STRUCT_OFFSET(UCSubAction_Sword, ActionData); } \
	FORCEINLINE static uint32 __PPO__HitData() { return STRUCT_OFFSET(UCSubAction_Sword, HitData); } \
	FORCEINLINE static uint32 __PPO__GhostTrailClass() { return STRUCT_OFFSET(UCSubAction_Sword, GhostTrailClass); }


#define U06_Battle_Bow_Source_U06_Battle_Weapons_SubActions_CSubAction_Sword_h_14_PROLOG
#define U06_Battle_Bow_Source_U06_Battle_Weapons_SubActions_CSubAction_Sword_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	U06_Battle_Bow_Source_U06_Battle_Weapons_SubActions_CSubAction_Sword_h_17_PRIVATE_PROPERTY_OFFSET \
	U06_Battle_Bow_Source_U06_Battle_Weapons_SubActions_CSubAction_Sword_h_17_SPARSE_DATA \
	U06_Battle_Bow_Source_U06_Battle_Weapons_SubActions_CSubAction_Sword_h_17_RPC_WRAPPERS \
	U06_Battle_Bow_Source_U06_Battle_Weapons_SubActions_CSubAction_Sword_h_17_INCLASS \
	U06_Battle_Bow_Source_U06_Battle_Weapons_SubActions_CSubAction_Sword_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define U06_Battle_Bow_Source_U06_Battle_Weapons_SubActions_CSubAction_Sword_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	U06_Battle_Bow_Source_U06_Battle_Weapons_SubActions_CSubAction_Sword_h_17_PRIVATE_PROPERTY_OFFSET \
	U06_Battle_Bow_Source_U06_Battle_Weapons_SubActions_CSubAction_Sword_h_17_SPARSE_DATA \
	U06_Battle_Bow_Source_U06_Battle_Weapons_SubActions_CSubAction_Sword_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	U06_Battle_Bow_Source_U06_Battle_Weapons_SubActions_CSubAction_Sword_h_17_INCLASS_NO_PURE_DECLS \
	U06_Battle_Bow_Source_U06_Battle_Weapons_SubActions_CSubAction_Sword_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> U06_BATTLE_API UClass* StaticClass<class UCSubAction_Sword>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID U06_Battle_Bow_Source_U06_Battle_Weapons_SubActions_CSubAction_Sword_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
