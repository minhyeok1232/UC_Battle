// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
#ifdef U06_BATTLE_CSubAction_Bow_generated_h
#error "CSubAction_Bow.generated.h already included, missing '#pragma once' in CSubAction_Bow.h"
#endif
#define U06_BATTLE_CSubAction_Bow_generated_h

#define U06_Battle_Bow_Source_U06_Battle_Weapons_SubActions_CSubAction_Bow_h_13_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAimData_Statics; \
	U06_BATTLE_API static class UScriptStruct* StaticStruct();


template<> U06_BATTLE_API UScriptStruct* StaticStruct<struct FAimData>();

#define U06_Battle_Bow_Source_U06_Battle_Weapons_SubActions_CSubAction_Bow_h_27_SPARSE_DATA
#define U06_Battle_Bow_Source_U06_Battle_Weapons_SubActions_CSubAction_Bow_h_27_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnAiming);


#define U06_Battle_Bow_Source_U06_Battle_Weapons_SubActions_CSubAction_Bow_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnAiming);


#define U06_Battle_Bow_Source_U06_Battle_Weapons_SubActions_CSubAction_Bow_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCSubAction_Bow(); \
	friend struct Z_Construct_UClass_UCSubAction_Bow_Statics; \
public: \
	DECLARE_CLASS(UCSubAction_Bow, UCSubAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/U06_Battle"), NO_API) \
	DECLARE_SERIALIZER(UCSubAction_Bow)


#define U06_Battle_Bow_Source_U06_Battle_Weapons_SubActions_CSubAction_Bow_h_27_INCLASS \
private: \
	static void StaticRegisterNativesUCSubAction_Bow(); \
	friend struct Z_Construct_UClass_UCSubAction_Bow_Statics; \
public: \
	DECLARE_CLASS(UCSubAction_Bow, UCSubAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/U06_Battle"), NO_API) \
	DECLARE_SERIALIZER(UCSubAction_Bow)


#define U06_Battle_Bow_Source_U06_Battle_Weapons_SubActions_CSubAction_Bow_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCSubAction_Bow(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCSubAction_Bow) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCSubAction_Bow); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCSubAction_Bow); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCSubAction_Bow(UCSubAction_Bow&&); \
	NO_API UCSubAction_Bow(const UCSubAction_Bow&); \
public:


#define U06_Battle_Bow_Source_U06_Battle_Weapons_SubActions_CSubAction_Bow_h_27_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCSubAction_Bow() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCSubAction_Bow(UCSubAction_Bow&&); \
	NO_API UCSubAction_Bow(const UCSubAction_Bow&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCSubAction_Bow); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCSubAction_Bow); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCSubAction_Bow)


#define U06_Battle_Bow_Source_U06_Battle_Weapons_SubActions_CSubAction_Bow_h_27_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Curve() { return STRUCT_OFFSET(UCSubAction_Bow, Curve); } \
	FORCEINLINE static uint32 __PPO__AimData() { return STRUCT_OFFSET(UCSubAction_Bow, AimData); } \
	FORCEINLINE static uint32 __PPO__AimingSpeed() { return STRUCT_OFFSET(UCSubAction_Bow, AimingSpeed); }


#define U06_Battle_Bow_Source_U06_Battle_Weapons_SubActions_CSubAction_Bow_h_24_PROLOG
#define U06_Battle_Bow_Source_U06_Battle_Weapons_SubActions_CSubAction_Bow_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	U06_Battle_Bow_Source_U06_Battle_Weapons_SubActions_CSubAction_Bow_h_27_PRIVATE_PROPERTY_OFFSET \
	U06_Battle_Bow_Source_U06_Battle_Weapons_SubActions_CSubAction_Bow_h_27_SPARSE_DATA \
	U06_Battle_Bow_Source_U06_Battle_Weapons_SubActions_CSubAction_Bow_h_27_RPC_WRAPPERS \
	U06_Battle_Bow_Source_U06_Battle_Weapons_SubActions_CSubAction_Bow_h_27_INCLASS \
	U06_Battle_Bow_Source_U06_Battle_Weapons_SubActions_CSubAction_Bow_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define U06_Battle_Bow_Source_U06_Battle_Weapons_SubActions_CSubAction_Bow_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	U06_Battle_Bow_Source_U06_Battle_Weapons_SubActions_CSubAction_Bow_h_27_PRIVATE_PROPERTY_OFFSET \
	U06_Battle_Bow_Source_U06_Battle_Weapons_SubActions_CSubAction_Bow_h_27_SPARSE_DATA \
	U06_Battle_Bow_Source_U06_Battle_Weapons_SubActions_CSubAction_Bow_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	U06_Battle_Bow_Source_U06_Battle_Weapons_SubActions_CSubAction_Bow_h_27_INCLASS_NO_PURE_DECLS \
	U06_Battle_Bow_Source_U06_Battle_Weapons_SubActions_CSubAction_Bow_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> U06_BATTLE_API UClass* StaticClass<class UCSubAction_Bow>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID U06_Battle_Bow_Source_U06_Battle_Weapons_SubActions_CSubAction_Bow_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
