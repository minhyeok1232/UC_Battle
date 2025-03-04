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
#ifdef U06_BATTLE_CDoAction_generated_h
#error "CDoAction.generated.h already included, missing '#pragma once' in CDoAction.h"
#endif
#define U06_BATTLE_CDoAction_generated_h

#define U06_Battle_Bow_Source_U06_Battle_Weapons_CDoAction_h_20_SPARSE_DATA
#define U06_Battle_Bow_Source_U06_Battle_Weapons_CDoAction_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnAttachmentEndOverlap); \
	DECLARE_FUNCTION(execOnAttachmentBeginOverlap); \
	DECLARE_FUNCTION(execOnAttachmentEndCollision); \
	DECLARE_FUNCTION(execOnAttachmentBeginCollision); \
	DECLARE_FUNCTION(execOnUnEquip); \
	DECLARE_FUNCTION(execOnEndEquip); \
	DECLARE_FUNCTION(execOnBeginEquip);


#define U06_Battle_Bow_Source_U06_Battle_Weapons_CDoAction_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnAttachmentEndOverlap); \
	DECLARE_FUNCTION(execOnAttachmentBeginOverlap); \
	DECLARE_FUNCTION(execOnAttachmentEndCollision); \
	DECLARE_FUNCTION(execOnAttachmentBeginCollision); \
	DECLARE_FUNCTION(execOnUnEquip); \
	DECLARE_FUNCTION(execOnEndEquip); \
	DECLARE_FUNCTION(execOnBeginEquip);


#define U06_Battle_Bow_Source_U06_Battle_Weapons_CDoAction_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCDoAction(); \
	friend struct Z_Construct_UClass_UCDoAction_Statics; \
public: \
	DECLARE_CLASS(UCDoAction, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/U06_Battle"), NO_API) \
	DECLARE_SERIALIZER(UCDoAction)


#define U06_Battle_Bow_Source_U06_Battle_Weapons_CDoAction_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUCDoAction(); \
	friend struct Z_Construct_UClass_UCDoAction_Statics; \
public: \
	DECLARE_CLASS(UCDoAction, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/U06_Battle"), NO_API) \
	DECLARE_SERIALIZER(UCDoAction)


#define U06_Battle_Bow_Source_U06_Battle_Weapons_CDoAction_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCDoAction(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCDoAction) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCDoAction); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCDoAction); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCDoAction(UCDoAction&&); \
	NO_API UCDoAction(const UCDoAction&); \
public:


#define U06_Battle_Bow_Source_U06_Battle_Weapons_CDoAction_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCDoAction(UCDoAction&&); \
	NO_API UCDoAction(const UCDoAction&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCDoAction); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCDoAction); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCDoAction)


#define U06_Battle_Bow_Source_U06_Battle_Weapons_CDoAction_h_20_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__OwnerCharacter() { return STRUCT_OFFSET(UCDoAction, OwnerCharacter); } \
	FORCEINLINE static uint32 __PPO__Movement() { return STRUCT_OFFSET(UCDoAction, Movement); } \
	FORCEINLINE static uint32 __PPO__State() { return STRUCT_OFFSET(UCDoAction, State); } \
	FORCEINLINE static uint32 __PPO__World() { return STRUCT_OFFSET(UCDoAction, World); }


#define U06_Battle_Bow_Source_U06_Battle_Weapons_CDoAction_h_16_PROLOG
#define U06_Battle_Bow_Source_U06_Battle_Weapons_CDoAction_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	U06_Battle_Bow_Source_U06_Battle_Weapons_CDoAction_h_20_PRIVATE_PROPERTY_OFFSET \
	U06_Battle_Bow_Source_U06_Battle_Weapons_CDoAction_h_20_SPARSE_DATA \
	U06_Battle_Bow_Source_U06_Battle_Weapons_CDoAction_h_20_RPC_WRAPPERS \
	U06_Battle_Bow_Source_U06_Battle_Weapons_CDoAction_h_20_INCLASS \
	U06_Battle_Bow_Source_U06_Battle_Weapons_CDoAction_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define U06_Battle_Bow_Source_U06_Battle_Weapons_CDoAction_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	U06_Battle_Bow_Source_U06_Battle_Weapons_CDoAction_h_20_PRIVATE_PROPERTY_OFFSET \
	U06_Battle_Bow_Source_U06_Battle_Weapons_CDoAction_h_20_SPARSE_DATA \
	U06_Battle_Bow_Source_U06_Battle_Weapons_CDoAction_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	U06_Battle_Bow_Source_U06_Battle_Weapons_CDoAction_h_20_INCLASS_NO_PURE_DECLS \
	U06_Battle_Bow_Source_U06_Battle_Weapons_CDoAction_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> U06_BATTLE_API UClass* StaticClass<class UCDoAction>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID U06_Battle_Bow_Source_U06_Battle_Weapons_CDoAction_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
