// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UNiagaraComponent;
#ifdef U06_BATTLE_CThornObject_generated_h
#error "CThornObject.generated.h already included, missing '#pragma once' in CThornObject.h"
#endif
#define U06_BATTLE_CThornObject_generated_h

#define U06_Battle_Bow_Source_U06_Battle_Weapons_AddOns_CThornObject_h_14_SPARSE_DATA
#define U06_Battle_Bow_Source_U06_Battle_Weapons_AddOns_CThornObject_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnSystemFinished);


#define U06_Battle_Bow_Source_U06_Battle_Weapons_AddOns_CThornObject_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnSystemFinished);


#define U06_Battle_Bow_Source_U06_Battle_Weapons_AddOns_CThornObject_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACThornObject(); \
	friend struct Z_Construct_UClass_ACThornObject_Statics; \
public: \
	DECLARE_CLASS(ACThornObject, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/U06_Battle"), NO_API) \
	DECLARE_SERIALIZER(ACThornObject) \
	virtual UObject* _getUObject() const override { return const_cast<ACThornObject*>(this); }


#define U06_Battle_Bow_Source_U06_Battle_Weapons_AddOns_CThornObject_h_14_INCLASS \
private: \
	static void StaticRegisterNativesACThornObject(); \
	friend struct Z_Construct_UClass_ACThornObject_Statics; \
public: \
	DECLARE_CLASS(ACThornObject, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/U06_Battle"), NO_API) \
	DECLARE_SERIALIZER(ACThornObject) \
	virtual UObject* _getUObject() const override { return const_cast<ACThornObject*>(this); }


#define U06_Battle_Bow_Source_U06_Battle_Weapons_AddOns_CThornObject_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACThornObject(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACThornObject) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACThornObject); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACThornObject); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACThornObject(ACThornObject&&); \
	NO_API ACThornObject(const ACThornObject&); \
public:


#define U06_Battle_Bow_Source_U06_Battle_Weapons_AddOns_CThornObject_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACThornObject(ACThornObject&&); \
	NO_API ACThornObject(const ACThornObject&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACThornObject); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACThornObject); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACThornObject)


#define U06_Battle_Bow_Source_U06_Battle_Weapons_AddOns_CThornObject_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Root() { return STRUCT_OFFSET(ACThornObject, Root); } \
	FORCEINLINE static uint32 __PPO__MeshComp() { return STRUCT_OFFSET(ACThornObject, MeshComp); } \
	FORCEINLINE static uint32 __PPO__Niagara() { return STRUCT_OFFSET(ACThornObject, Niagara); } \
	FORCEINLINE static uint32 __PPO__HitData() { return STRUCT_OFFSET(ACThornObject, HitData); } \
	FORCEINLINE static uint32 __PPO__NiagaraMesh() { return STRUCT_OFFSET(ACThornObject, NiagaraMesh); } \
	FORCEINLINE static uint32 __PPO__NiagaraMeshRotation() { return STRUCT_OFFSET(ACThornObject, NiagaraMeshRotation); } \
	FORCEINLINE static uint32 __PPO__CollisionEffect() { return STRUCT_OFFSET(ACThornObject, CollisionEffect); } \
	FORCEINLINE static uint32 __PPO__CollisionEffectTransform() { return STRUCT_OFFSET(ACThornObject, CollisionEffectTransform); }


#define U06_Battle_Bow_Source_U06_Battle_Weapons_AddOns_CThornObject_h_11_PROLOG
#define U06_Battle_Bow_Source_U06_Battle_Weapons_AddOns_CThornObject_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	U06_Battle_Bow_Source_U06_Battle_Weapons_AddOns_CThornObject_h_14_PRIVATE_PROPERTY_OFFSET \
	U06_Battle_Bow_Source_U06_Battle_Weapons_AddOns_CThornObject_h_14_SPARSE_DATA \
	U06_Battle_Bow_Source_U06_Battle_Weapons_AddOns_CThornObject_h_14_RPC_WRAPPERS \
	U06_Battle_Bow_Source_U06_Battle_Weapons_AddOns_CThornObject_h_14_INCLASS \
	U06_Battle_Bow_Source_U06_Battle_Weapons_AddOns_CThornObject_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define U06_Battle_Bow_Source_U06_Battle_Weapons_AddOns_CThornObject_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	U06_Battle_Bow_Source_U06_Battle_Weapons_AddOns_CThornObject_h_14_PRIVATE_PROPERTY_OFFSET \
	U06_Battle_Bow_Source_U06_Battle_Weapons_AddOns_CThornObject_h_14_SPARSE_DATA \
	U06_Battle_Bow_Source_U06_Battle_Weapons_AddOns_CThornObject_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	U06_Battle_Bow_Source_U06_Battle_Weapons_AddOns_CThornObject_h_14_INCLASS_NO_PURE_DECLS \
	U06_Battle_Bow_Source_U06_Battle_Weapons_AddOns_CThornObject_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> U06_BATTLE_API UClass* StaticClass<class ACThornObject>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID U06_Battle_Bow_Source_U06_Battle_Weapons_AddOns_CThornObject_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
