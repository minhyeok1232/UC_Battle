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
class UNiagaraComponent;
#ifdef U06_BATTLE_CAura_generated_h
#error "CAura.generated.h already included, missing '#pragma once' in CAura.h"
#endif
#define U06_BATTLE_CAura_generated_h

#define U06_Battle_Bow_Source_U06_Battle_Weapons_AddOns_CAura_h_20_SPARSE_DATA
#define U06_Battle_Bow_Source_U06_Battle_Weapons_AddOns_CAura_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnComponentEndOverlap); \
	DECLARE_FUNCTION(execOnComponentBeginOverlap); \
	DECLARE_FUNCTION(execOnSystemFinished);


#define U06_Battle_Bow_Source_U06_Battle_Weapons_AddOns_CAura_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnComponentEndOverlap); \
	DECLARE_FUNCTION(execOnComponentBeginOverlap); \
	DECLARE_FUNCTION(execOnSystemFinished);


#define U06_Battle_Bow_Source_U06_Battle_Weapons_AddOns_CAura_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACAura(); \
	friend struct Z_Construct_UClass_ACAura_Statics; \
public: \
	DECLARE_CLASS(ACAura, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/U06_Battle"), NO_API) \
	DECLARE_SERIALIZER(ACAura) \
	virtual UObject* _getUObject() const override { return const_cast<ACAura*>(this); }


#define U06_Battle_Bow_Source_U06_Battle_Weapons_AddOns_CAura_h_20_INCLASS \
private: \
	static void StaticRegisterNativesACAura(); \
	friend struct Z_Construct_UClass_ACAura_Statics; \
public: \
	DECLARE_CLASS(ACAura, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/U06_Battle"), NO_API) \
	DECLARE_SERIALIZER(ACAura) \
	virtual UObject* _getUObject() const override { return const_cast<ACAura*>(this); }


#define U06_Battle_Bow_Source_U06_Battle_Weapons_AddOns_CAura_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACAura(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACAura) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACAura); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACAura); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACAura(ACAura&&); \
	NO_API ACAura(const ACAura&); \
public:


#define U06_Battle_Bow_Source_U06_Battle_Weapons_AddOns_CAura_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACAura(ACAura&&); \
	NO_API ACAura(const ACAura&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACAura); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACAura); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACAura)


#define U06_Battle_Bow_Source_U06_Battle_Weapons_AddOns_CAura_h_20_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Root() { return STRUCT_OFFSET(ACAura, Root); } \
	FORCEINLINE static uint32 __PPO__Box() { return STRUCT_OFFSET(ACAura, Box); } \
	FORCEINLINE static uint32 __PPO__Niagara() { return STRUCT_OFFSET(ACAura, Niagara); } \
	FORCEINLINE static uint32 __PPO__HitData() { return STRUCT_OFFSET(ACAura, HitData); } \
	FORCEINLINE static uint32 __PPO__DamageInterval() { return STRUCT_OFFSET(ACAura, DamageInterval); }


#define U06_Battle_Bow_Source_U06_Battle_Weapons_AddOns_CAura_h_16_PROLOG
#define U06_Battle_Bow_Source_U06_Battle_Weapons_AddOns_CAura_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	U06_Battle_Bow_Source_U06_Battle_Weapons_AddOns_CAura_h_20_PRIVATE_PROPERTY_OFFSET \
	U06_Battle_Bow_Source_U06_Battle_Weapons_AddOns_CAura_h_20_SPARSE_DATA \
	U06_Battle_Bow_Source_U06_Battle_Weapons_AddOns_CAura_h_20_RPC_WRAPPERS \
	U06_Battle_Bow_Source_U06_Battle_Weapons_AddOns_CAura_h_20_INCLASS \
	U06_Battle_Bow_Source_U06_Battle_Weapons_AddOns_CAura_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define U06_Battle_Bow_Source_U06_Battle_Weapons_AddOns_CAura_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	U06_Battle_Bow_Source_U06_Battle_Weapons_AddOns_CAura_h_20_PRIVATE_PROPERTY_OFFSET \
	U06_Battle_Bow_Source_U06_Battle_Weapons_AddOns_CAura_h_20_SPARSE_DATA \
	U06_Battle_Bow_Source_U06_Battle_Weapons_AddOns_CAura_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	U06_Battle_Bow_Source_U06_Battle_Weapons_AddOns_CAura_h_20_INCLASS_NO_PURE_DECLS \
	U06_Battle_Bow_Source_U06_Battle_Weapons_AddOns_CAura_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> U06_BATTLE_API UClass* StaticClass<class ACAura>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID U06_Battle_Bow_Source_U06_Battle_Weapons_AddOns_CAura_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
