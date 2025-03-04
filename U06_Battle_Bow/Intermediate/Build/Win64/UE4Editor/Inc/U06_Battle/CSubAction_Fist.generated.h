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
#ifdef U06_BATTLE_CSubAction_Fist_generated_h
#error "CSubAction_Fist.generated.h already included, missing '#pragma once' in CSubAction_Fist.h"
#endif
#define U06_BATTLE_CSubAction_Fist_generated_h

#define U06_Battle_Bow_Source_U06_Battle_Weapons_SubActions_CSubAction_Fist_h_14_SPARSE_DATA
#define U06_Battle_Bow_Source_U06_Battle_Weapons_SubActions_CSubAction_Fist_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnAttachmentEndCollision); \
	DECLARE_FUNCTION(execOnAttachmentBeginOverlap);


#define U06_Battle_Bow_Source_U06_Battle_Weapons_SubActions_CSubAction_Fist_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnAttachmentEndCollision); \
	DECLARE_FUNCTION(execOnAttachmentBeginOverlap);


#define U06_Battle_Bow_Source_U06_Battle_Weapons_SubActions_CSubAction_Fist_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCSubAction_Fist(); \
	friend struct Z_Construct_UClass_UCSubAction_Fist_Statics; \
public: \
	DECLARE_CLASS(UCSubAction_Fist, UCSubAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/U06_Battle"), NO_API) \
	DECLARE_SERIALIZER(UCSubAction_Fist)


#define U06_Battle_Bow_Source_U06_Battle_Weapons_SubActions_CSubAction_Fist_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUCSubAction_Fist(); \
	friend struct Z_Construct_UClass_UCSubAction_Fist_Statics; \
public: \
	DECLARE_CLASS(UCSubAction_Fist, UCSubAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/U06_Battle"), NO_API) \
	DECLARE_SERIALIZER(UCSubAction_Fist)


#define U06_Battle_Bow_Source_U06_Battle_Weapons_SubActions_CSubAction_Fist_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCSubAction_Fist(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCSubAction_Fist) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCSubAction_Fist); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCSubAction_Fist); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCSubAction_Fist(UCSubAction_Fist&&); \
	NO_API UCSubAction_Fist(const UCSubAction_Fist&); \
public:


#define U06_Battle_Bow_Source_U06_Battle_Weapons_SubActions_CSubAction_Fist_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCSubAction_Fist() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCSubAction_Fist(UCSubAction_Fist&&); \
	NO_API UCSubAction_Fist(const UCSubAction_Fist&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCSubAction_Fist); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCSubAction_Fist); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCSubAction_Fist)


#define U06_Battle_Bow_Source_U06_Battle_Weapons_SubActions_CSubAction_Fist_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ActionData() { return STRUCT_OFFSET(UCSubAction_Fist, ActionData); } \
	FORCEINLINE static uint32 __PPO__HitDatas() { return STRUCT_OFFSET(UCSubAction_Fist, HitDatas); } \
	FORCEINLINE static uint32 __PPO__GhostTrailClass() { return STRUCT_OFFSET(UCSubAction_Fist, GhostTrailClass); }


#define U06_Battle_Bow_Source_U06_Battle_Weapons_SubActions_CSubAction_Fist_h_11_PROLOG
#define U06_Battle_Bow_Source_U06_Battle_Weapons_SubActions_CSubAction_Fist_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	U06_Battle_Bow_Source_U06_Battle_Weapons_SubActions_CSubAction_Fist_h_14_PRIVATE_PROPERTY_OFFSET \
	U06_Battle_Bow_Source_U06_Battle_Weapons_SubActions_CSubAction_Fist_h_14_SPARSE_DATA \
	U06_Battle_Bow_Source_U06_Battle_Weapons_SubActions_CSubAction_Fist_h_14_RPC_WRAPPERS \
	U06_Battle_Bow_Source_U06_Battle_Weapons_SubActions_CSubAction_Fist_h_14_INCLASS \
	U06_Battle_Bow_Source_U06_Battle_Weapons_SubActions_CSubAction_Fist_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define U06_Battle_Bow_Source_U06_Battle_Weapons_SubActions_CSubAction_Fist_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	U06_Battle_Bow_Source_U06_Battle_Weapons_SubActions_CSubAction_Fist_h_14_PRIVATE_PROPERTY_OFFSET \
	U06_Battle_Bow_Source_U06_Battle_Weapons_SubActions_CSubAction_Fist_h_14_SPARSE_DATA \
	U06_Battle_Bow_Source_U06_Battle_Weapons_SubActions_CSubAction_Fist_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	U06_Battle_Bow_Source_U06_Battle_Weapons_SubActions_CSubAction_Fist_h_14_INCLASS_NO_PURE_DECLS \
	U06_Battle_Bow_Source_U06_Battle_Weapons_SubActions_CSubAction_Fist_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> U06_BATTLE_API UClass* StaticClass<class UCSubAction_Fist>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID U06_Battle_Bow_Source_U06_Battle_Weapons_SubActions_CSubAction_Fist_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
