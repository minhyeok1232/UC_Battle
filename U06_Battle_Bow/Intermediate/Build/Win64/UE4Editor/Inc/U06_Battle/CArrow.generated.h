// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ACArrow;
class AActor;
class ACharacter;
class UPrimitiveComponent;
struct FVector;
struct FHitResult;
#ifdef U06_BATTLE_CArrow_generated_h
#error "CArrow.generated.h already included, missing '#pragma once' in CArrow.h"
#endif
#define U06_BATTLE_CArrow_generated_h

#define U06_Battle_Bow_Source_U06_Battle_Weapons_AddOns_CArrow_h_14_DELEGATE \
struct _Script_U06_Battle_eventProjectileEndPlay_Parms \
{ \
	ACArrow* InDestroyer; \
}; \
static inline void FProjectileEndPlay_DelegateWrapper(const FMulticastScriptDelegate& ProjectileEndPlay, ACArrow* InDestroyer) \
{ \
	_Script_U06_Battle_eventProjectileEndPlay_Parms Parms; \
	Parms.InDestroyer=InDestroyer; \
	ProjectileEndPlay.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define U06_Battle_Bow_Source_U06_Battle_Weapons_AddOns_CArrow_h_13_DELEGATE \
struct _Script_U06_Battle_eventProjectileHit_Parms \
{ \
	AActor* InCauser; \
	ACharacter* InOtherCharacter; \
}; \
static inline void FProjectileHit_DelegateWrapper(const FMulticastScriptDelegate& ProjectileHit, AActor* InCauser, ACharacter* InOtherCharacter) \
{ \
	_Script_U06_Battle_eventProjectileHit_Parms Parms; \
	Parms.InCauser=InCauser; \
	Parms.InOtherCharacter=InOtherCharacter; \
	ProjectileHit.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define U06_Battle_Bow_Source_U06_Battle_Weapons_AddOns_CArrow_h_18_SPARSE_DATA
#define U06_Battle_Bow_Source_U06_Battle_Weapons_AddOns_CArrow_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnComponentHit);


#define U06_Battle_Bow_Source_U06_Battle_Weapons_AddOns_CArrow_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnComponentHit);


#define U06_Battle_Bow_Source_U06_Battle_Weapons_AddOns_CArrow_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACArrow(); \
	friend struct Z_Construct_UClass_ACArrow_Statics; \
public: \
	DECLARE_CLASS(ACArrow, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/U06_Battle"), NO_API) \
	DECLARE_SERIALIZER(ACArrow)


#define U06_Battle_Bow_Source_U06_Battle_Weapons_AddOns_CArrow_h_18_INCLASS \
private: \
	static void StaticRegisterNativesACArrow(); \
	friend struct Z_Construct_UClass_ACArrow_Statics; \
public: \
	DECLARE_CLASS(ACArrow, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/U06_Battle"), NO_API) \
	DECLARE_SERIALIZER(ACArrow)


#define U06_Battle_Bow_Source_U06_Battle_Weapons_AddOns_CArrow_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACArrow(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACArrow) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACArrow); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACArrow); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACArrow(ACArrow&&); \
	NO_API ACArrow(const ACArrow&); \
public:


#define U06_Battle_Bow_Source_U06_Battle_Weapons_AddOns_CArrow_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACArrow(ACArrow&&); \
	NO_API ACArrow(const ACArrow&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACArrow); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACArrow); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACArrow)


#define U06_Battle_Bow_Source_U06_Battle_Weapons_AddOns_CArrow_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Capsule() { return STRUCT_OFFSET(ACArrow, Capsule); } \
	FORCEINLINE static uint32 __PPO__Projectile() { return STRUCT_OFFSET(ACArrow, Projectile); } \
	FORCEINLINE static uint32 __PPO__LifeSpanAfterCollision() { return STRUCT_OFFSET(ACArrow, LifeSpanAfterCollision); }


#define U06_Battle_Bow_Source_U06_Battle_Weapons_AddOns_CArrow_h_15_PROLOG
#define U06_Battle_Bow_Source_U06_Battle_Weapons_AddOns_CArrow_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	U06_Battle_Bow_Source_U06_Battle_Weapons_AddOns_CArrow_h_18_PRIVATE_PROPERTY_OFFSET \
	U06_Battle_Bow_Source_U06_Battle_Weapons_AddOns_CArrow_h_18_SPARSE_DATA \
	U06_Battle_Bow_Source_U06_Battle_Weapons_AddOns_CArrow_h_18_RPC_WRAPPERS \
	U06_Battle_Bow_Source_U06_Battle_Weapons_AddOns_CArrow_h_18_INCLASS \
	U06_Battle_Bow_Source_U06_Battle_Weapons_AddOns_CArrow_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define U06_Battle_Bow_Source_U06_Battle_Weapons_AddOns_CArrow_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	U06_Battle_Bow_Source_U06_Battle_Weapons_AddOns_CArrow_h_18_PRIVATE_PROPERTY_OFFSET \
	U06_Battle_Bow_Source_U06_Battle_Weapons_AddOns_CArrow_h_18_SPARSE_DATA \
	U06_Battle_Bow_Source_U06_Battle_Weapons_AddOns_CArrow_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	U06_Battle_Bow_Source_U06_Battle_Weapons_AddOns_CArrow_h_18_INCLASS_NO_PURE_DECLS \
	U06_Battle_Bow_Source_U06_Battle_Weapons_AddOns_CArrow_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> U06_BATTLE_API UClass* StaticClass<class ACArrow>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID U06_Battle_Bow_Source_U06_Battle_Weapons_AddOns_CArrow_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
