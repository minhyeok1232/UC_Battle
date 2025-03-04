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
class UPrimitiveComponent;
struct FHitResult;
#ifdef U06_BATTLE_CAttachment_generated_h
#error "CAttachment.generated.h already included, missing '#pragma once' in CAttachment.h"
#endif
#define U06_BATTLE_CAttachment_generated_h

#define U06_Battle_Bow_Source_U06_Battle_Weapons_CAttachment_h_22_DELEGATE \
struct _Script_U06_Battle_eventAttachmentEndOverlap_Parms \
{ \
	ACharacter* InAttacker; \
	ACharacter* InOther; \
}; \
static inline void FAttachmentEndOverlap_DelegateWrapper(const FMulticastScriptDelegate& AttachmentEndOverlap, ACharacter* InAttacker, ACharacter* InOther) \
{ \
	_Script_U06_Battle_eventAttachmentEndOverlap_Parms Parms; \
	Parms.InAttacker=InAttacker; \
	Parms.InOther=InOther; \
	AttachmentEndOverlap.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define U06_Battle_Bow_Source_U06_Battle_Weapons_CAttachment_h_21_DELEGATE \
struct _Script_U06_Battle_eventAttachmentBeginOverlap_Parms \
{ \
	ACharacter* InAttacker; \
	AActor* InAttackCauser; \
	ACharacter* InOther; \
}; \
static inline void FAttachmentBeginOverlap_DelegateWrapper(const FMulticastScriptDelegate& AttachmentBeginOverlap, ACharacter* InAttacker, AActor* InAttackCauser, ACharacter* InOther) \
{ \
	_Script_U06_Battle_eventAttachmentBeginOverlap_Parms Parms; \
	Parms.InAttacker=InAttacker; \
	Parms.InAttackCauser=InAttackCauser; \
	Parms.InOther=InOther; \
	AttachmentBeginOverlap.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define U06_Battle_Bow_Source_U06_Battle_Weapons_CAttachment_h_18_DELEGATE \
static inline void FAttachmentEndCollision_DelegateWrapper(const FMulticastScriptDelegate& AttachmentEndCollision) \
{ \
	AttachmentEndCollision.ProcessMulticastDelegate<UObject>(NULL); \
}


#define U06_Battle_Bow_Source_U06_Battle_Weapons_CAttachment_h_17_DELEGATE \
static inline void FAttachmentBeginCollision_DelegateWrapper(const FMulticastScriptDelegate& AttachmentBeginCollision) \
{ \
	AttachmentBeginCollision.ProcessMulticastDelegate<UObject>(NULL); \
}


#define U06_Battle_Bow_Source_U06_Battle_Weapons_CAttachment_h_28_SPARSE_DATA
#define U06_Battle_Bow_Source_U06_Battle_Weapons_CAttachment_h_28_RPC_WRAPPERS \
	virtual void OnUnEquip_Implementation(); \
	virtual void OnEndEquip_Implementation(); \
	virtual void OnBeginEquip_Implementation(); \
 \
	DECLARE_FUNCTION(execAttachToCollision); \
	DECLARE_FUNCTION(execAttachTo); \
	DECLARE_FUNCTION(execOnComponentEndOverlap); \
	DECLARE_FUNCTION(execOnComponentBeginOverlap); \
	DECLARE_FUNCTION(execOnUnEquip); \
	DECLARE_FUNCTION(execOnEndEquip); \
	DECLARE_FUNCTION(execOnBeginEquip);


#define U06_Battle_Bow_Source_U06_Battle_Weapons_CAttachment_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAttachToCollision); \
	DECLARE_FUNCTION(execAttachTo); \
	DECLARE_FUNCTION(execOnComponentEndOverlap); \
	DECLARE_FUNCTION(execOnComponentBeginOverlap); \
	DECLARE_FUNCTION(execOnUnEquip); \
	DECLARE_FUNCTION(execOnEndEquip); \
	DECLARE_FUNCTION(execOnBeginEquip);


#define U06_Battle_Bow_Source_U06_Battle_Weapons_CAttachment_h_28_EVENT_PARMS
#define U06_Battle_Bow_Source_U06_Battle_Weapons_CAttachment_h_28_CALLBACK_WRAPPERS
#define U06_Battle_Bow_Source_U06_Battle_Weapons_CAttachment_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACAttachment(); \
	friend struct Z_Construct_UClass_ACAttachment_Statics; \
public: \
	DECLARE_CLASS(ACAttachment, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/U06_Battle"), NO_API) \
	DECLARE_SERIALIZER(ACAttachment)


#define U06_Battle_Bow_Source_U06_Battle_Weapons_CAttachment_h_28_INCLASS \
private: \
	static void StaticRegisterNativesACAttachment(); \
	friend struct Z_Construct_UClass_ACAttachment_Statics; \
public: \
	DECLARE_CLASS(ACAttachment, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/U06_Battle"), NO_API) \
	DECLARE_SERIALIZER(ACAttachment)


#define U06_Battle_Bow_Source_U06_Battle_Weapons_CAttachment_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACAttachment(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACAttachment) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACAttachment); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACAttachment); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACAttachment(ACAttachment&&); \
	NO_API ACAttachment(const ACAttachment&); \
public:


#define U06_Battle_Bow_Source_U06_Battle_Weapons_CAttachment_h_28_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACAttachment(ACAttachment&&); \
	NO_API ACAttachment(const ACAttachment&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACAttachment); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACAttachment); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACAttachment)


#define U06_Battle_Bow_Source_U06_Battle_Weapons_CAttachment_h_28_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Root() { return STRUCT_OFFSET(ACAttachment, Root); } \
	FORCEINLINE static uint32 __PPO__OwnerCharacter() { return STRUCT_OFFSET(ACAttachment, OwnerCharacter); } \
	FORCEINLINE static uint32 __PPO__Collisions() { return STRUCT_OFFSET(ACAttachment, Collisions); }


#define U06_Battle_Bow_Source_U06_Battle_Weapons_CAttachment_h_25_PROLOG \
	U06_Battle_Bow_Source_U06_Battle_Weapons_CAttachment_h_28_EVENT_PARMS


#define U06_Battle_Bow_Source_U06_Battle_Weapons_CAttachment_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	U06_Battle_Bow_Source_U06_Battle_Weapons_CAttachment_h_28_PRIVATE_PROPERTY_OFFSET \
	U06_Battle_Bow_Source_U06_Battle_Weapons_CAttachment_h_28_SPARSE_DATA \
	U06_Battle_Bow_Source_U06_Battle_Weapons_CAttachment_h_28_RPC_WRAPPERS \
	U06_Battle_Bow_Source_U06_Battle_Weapons_CAttachment_h_28_CALLBACK_WRAPPERS \
	U06_Battle_Bow_Source_U06_Battle_Weapons_CAttachment_h_28_INCLASS \
	U06_Battle_Bow_Source_U06_Battle_Weapons_CAttachment_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define U06_Battle_Bow_Source_U06_Battle_Weapons_CAttachment_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	U06_Battle_Bow_Source_U06_Battle_Weapons_CAttachment_h_28_PRIVATE_PROPERTY_OFFSET \
	U06_Battle_Bow_Source_U06_Battle_Weapons_CAttachment_h_28_SPARSE_DATA \
	U06_Battle_Bow_Source_U06_Battle_Weapons_CAttachment_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	U06_Battle_Bow_Source_U06_Battle_Weapons_CAttachment_h_28_CALLBACK_WRAPPERS \
	U06_Battle_Bow_Source_U06_Battle_Weapons_CAttachment_h_28_INCLASS_NO_PURE_DECLS \
	U06_Battle_Bow_Source_U06_Battle_Weapons_CAttachment_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> U06_BATTLE_API UClass* StaticClass<class ACAttachment>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID U06_Battle_Bow_Source_U06_Battle_Weapons_CAttachment_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
