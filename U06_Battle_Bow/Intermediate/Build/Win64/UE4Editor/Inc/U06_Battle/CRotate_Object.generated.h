// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef U06_BATTLE_CRotate_Object_generated_h
#error "CRotate_Object.generated.h already included, missing '#pragma once' in CRotate_Object.h"
#endif
#define U06_BATTLE_CRotate_Object_generated_h

#define U06_Battle_Bow_Source_U06_Battle_Weapons_AddOns_CRotate_Object_h_13_SPARSE_DATA
#define U06_Battle_Bow_Source_U06_Battle_Weapons_AddOns_CRotate_Object_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSendMessage); \
	DECLARE_FUNCTION(execOnComponentEndOverlap); \
	DECLARE_FUNCTION(execOnComponentBeginOverlap);


#define U06_Battle_Bow_Source_U06_Battle_Weapons_AddOns_CRotate_Object_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSendMessage); \
	DECLARE_FUNCTION(execOnComponentEndOverlap); \
	DECLARE_FUNCTION(execOnComponentBeginOverlap);


#define U06_Battle_Bow_Source_U06_Battle_Weapons_AddOns_CRotate_Object_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACRotate_Object(); \
	friend struct Z_Construct_UClass_ACRotate_Object_Statics; \
public: \
	DECLARE_CLASS(ACRotate_Object, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/U06_Battle"), NO_API) \
	DECLARE_SERIALIZER(ACRotate_Object)


#define U06_Battle_Bow_Source_U06_Battle_Weapons_AddOns_CRotate_Object_h_13_INCLASS \
private: \
	static void StaticRegisterNativesACRotate_Object(); \
	friend struct Z_Construct_UClass_ACRotate_Object_Statics; \
public: \
	DECLARE_CLASS(ACRotate_Object, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/U06_Battle"), NO_API) \
	DECLARE_SERIALIZER(ACRotate_Object)


#define U06_Battle_Bow_Source_U06_Battle_Weapons_AddOns_CRotate_Object_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACRotate_Object(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACRotate_Object) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACRotate_Object); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACRotate_Object); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACRotate_Object(ACRotate_Object&&); \
	NO_API ACRotate_Object(const ACRotate_Object&); \
public:


#define U06_Battle_Bow_Source_U06_Battle_Weapons_AddOns_CRotate_Object_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACRotate_Object(ACRotate_Object&&); \
	NO_API ACRotate_Object(const ACRotate_Object&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACRotate_Object); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACRotate_Object); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACRotate_Object)


#define U06_Battle_Bow_Source_U06_Battle_Weapons_AddOns_CRotate_Object_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Capsule() { return STRUCT_OFFSET(ACRotate_Object, Capsule); } \
	FORCEINLINE static uint32 __PPO__Particle() { return STRUCT_OFFSET(ACRotate_Object, Particle); } \
	FORCEINLINE static uint32 __PPO__Speed() { return STRUCT_OFFSET(ACRotate_Object, Speed); } \
	FORCEINLINE static uint32 __PPO__Distance() { return STRUCT_OFFSET(ACRotate_Object, Distance); } \
	FORCEINLINE static uint32 __PPO__bNegative() { return STRUCT_OFFSET(ACRotate_Object, bNegative); } \
	FORCEINLINE static uint32 __PPO__DamageInterval() { return STRUCT_OFFSET(ACRotate_Object, DamageInterval); } \
	FORCEINLINE static uint32 __PPO__HitData() { return STRUCT_OFFSET(ACRotate_Object, HitData); }


#define U06_Battle_Bow_Source_U06_Battle_Weapons_AddOns_CRotate_Object_h_10_PROLOG
#define U06_Battle_Bow_Source_U06_Battle_Weapons_AddOns_CRotate_Object_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	U06_Battle_Bow_Source_U06_Battle_Weapons_AddOns_CRotate_Object_h_13_PRIVATE_PROPERTY_OFFSET \
	U06_Battle_Bow_Source_U06_Battle_Weapons_AddOns_CRotate_Object_h_13_SPARSE_DATA \
	U06_Battle_Bow_Source_U06_Battle_Weapons_AddOns_CRotate_Object_h_13_RPC_WRAPPERS \
	U06_Battle_Bow_Source_U06_Battle_Weapons_AddOns_CRotate_Object_h_13_INCLASS \
	U06_Battle_Bow_Source_U06_Battle_Weapons_AddOns_CRotate_Object_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define U06_Battle_Bow_Source_U06_Battle_Weapons_AddOns_CRotate_Object_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	U06_Battle_Bow_Source_U06_Battle_Weapons_AddOns_CRotate_Object_h_13_PRIVATE_PROPERTY_OFFSET \
	U06_Battle_Bow_Source_U06_Battle_Weapons_AddOns_CRotate_Object_h_13_SPARSE_DATA \
	U06_Battle_Bow_Source_U06_Battle_Weapons_AddOns_CRotate_Object_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	U06_Battle_Bow_Source_U06_Battle_Weapons_AddOns_CRotate_Object_h_13_INCLASS_NO_PURE_DECLS \
	U06_Battle_Bow_Source_U06_Battle_Weapons_AddOns_CRotate_Object_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> U06_BATTLE_API UClass* StaticClass<class ACRotate_Object>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID U06_Battle_Bow_Source_U06_Battle_Weapons_AddOns_CRotate_Object_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
