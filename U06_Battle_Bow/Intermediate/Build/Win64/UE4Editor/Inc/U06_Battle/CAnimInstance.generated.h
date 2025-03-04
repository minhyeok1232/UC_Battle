// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EWeaponType : uint8;
#ifdef U06_BATTLE_CAnimInstance_generated_h
#error "CAnimInstance.generated.h already included, missing '#pragma once' in CAnimInstance.h"
#endif
#define U06_BATTLE_CAnimInstance_generated_h

#define U06_Battle_Bow_Source_U06_Battle_Characters_CAnimInstance_h_16_SPARSE_DATA
#define U06_Battle_Bow_Source_U06_Battle_Characters_CAnimInstance_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnWeaponTypeChanged);


#define U06_Battle_Bow_Source_U06_Battle_Characters_CAnimInstance_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnWeaponTypeChanged);


#define U06_Battle_Bow_Source_U06_Battle_Characters_CAnimInstance_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCAnimInstance(); \
	friend struct Z_Construct_UClass_UCAnimInstance_Statics; \
public: \
	DECLARE_CLASS(UCAnimInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/U06_Battle"), NO_API) \
	DECLARE_SERIALIZER(UCAnimInstance)


#define U06_Battle_Bow_Source_U06_Battle_Characters_CAnimInstance_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUCAnimInstance(); \
	friend struct Z_Construct_UClass_UCAnimInstance_Statics; \
public: \
	DECLARE_CLASS(UCAnimInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/U06_Battle"), NO_API) \
	DECLARE_SERIALIZER(UCAnimInstance)


#define U06_Battle_Bow_Source_U06_Battle_Characters_CAnimInstance_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCAnimInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCAnimInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCAnimInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCAnimInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCAnimInstance(UCAnimInstance&&); \
	NO_API UCAnimInstance(const UCAnimInstance&); \
public:


#define U06_Battle_Bow_Source_U06_Battle_Characters_CAnimInstance_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCAnimInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCAnimInstance(UCAnimInstance&&); \
	NO_API UCAnimInstance(const UCAnimInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCAnimInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCAnimInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCAnimInstance)


#define U06_Battle_Bow_Source_U06_Battle_Characters_CAnimInstance_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Speed() { return STRUCT_OFFSET(UCAnimInstance, Speed); } \
	FORCEINLINE static uint32 __PPO__Direction() { return STRUCT_OFFSET(UCAnimInstance, Direction); } \
	FORCEINLINE static uint32 __PPO__Pitch() { return STRUCT_OFFSET(UCAnimInstance, Pitch); } \
	FORCEINLINE static uint32 __PPO__bFalling() { return STRUCT_OFFSET(UCAnimInstance, bFalling); } \
	FORCEINLINE static uint32 __PPO__WeaponType() { return STRUCT_OFFSET(UCAnimInstance, WeaponType); } \
	FORCEINLINE static uint32 __PPO__bBow_Aiming() { return STRUCT_OFFSET(UCAnimInstance, bBow_Aiming); }


#define U06_Battle_Bow_Source_U06_Battle_Characters_CAnimInstance_h_13_PROLOG
#define U06_Battle_Bow_Source_U06_Battle_Characters_CAnimInstance_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	U06_Battle_Bow_Source_U06_Battle_Characters_CAnimInstance_h_16_PRIVATE_PROPERTY_OFFSET \
	U06_Battle_Bow_Source_U06_Battle_Characters_CAnimInstance_h_16_SPARSE_DATA \
	U06_Battle_Bow_Source_U06_Battle_Characters_CAnimInstance_h_16_RPC_WRAPPERS \
	U06_Battle_Bow_Source_U06_Battle_Characters_CAnimInstance_h_16_INCLASS \
	U06_Battle_Bow_Source_U06_Battle_Characters_CAnimInstance_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define U06_Battle_Bow_Source_U06_Battle_Characters_CAnimInstance_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	U06_Battle_Bow_Source_U06_Battle_Characters_CAnimInstance_h_16_PRIVATE_PROPERTY_OFFSET \
	U06_Battle_Bow_Source_U06_Battle_Characters_CAnimInstance_h_16_SPARSE_DATA \
	U06_Battle_Bow_Source_U06_Battle_Characters_CAnimInstance_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	U06_Battle_Bow_Source_U06_Battle_Characters_CAnimInstance_h_16_INCLASS_NO_PURE_DECLS \
	U06_Battle_Bow_Source_U06_Battle_Characters_CAnimInstance_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> U06_BATTLE_API UClass* StaticClass<class UCAnimInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID U06_Battle_Bow_Source_U06_Battle_Characters_CAnimInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
