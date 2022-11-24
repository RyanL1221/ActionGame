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
struct FVector;
struct FHitResult;
#ifdef ACTIONGAME_SExplosiveBarrel_generated_h
#error "SExplosiveBarrel.generated.h already included, missing '#pragma once' in SExplosiveBarrel.h"
#endif
#define ACTIONGAME_SExplosiveBarrel_generated_h

#define Actiongame_Source_ActionGame_Public_SExplosiveBarrel_h_17_SPARSE_DATA
#define Actiongame_Source_ActionGame_Public_SExplosiveBarrel_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnActorHit);


#define Actiongame_Source_ActionGame_Public_SExplosiveBarrel_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnActorHit);


#define Actiongame_Source_ActionGame_Public_SExplosiveBarrel_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASExplosiveBarrel(); \
	friend struct Z_Construct_UClass_ASExplosiveBarrel_Statics; \
public: \
	DECLARE_CLASS(ASExplosiveBarrel, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ActionGame"), NO_API) \
	DECLARE_SERIALIZER(ASExplosiveBarrel)


#define Actiongame_Source_ActionGame_Public_SExplosiveBarrel_h_17_INCLASS \
private: \
	static void StaticRegisterNativesASExplosiveBarrel(); \
	friend struct Z_Construct_UClass_ASExplosiveBarrel_Statics; \
public: \
	DECLARE_CLASS(ASExplosiveBarrel, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ActionGame"), NO_API) \
	DECLARE_SERIALIZER(ASExplosiveBarrel)


#define Actiongame_Source_ActionGame_Public_SExplosiveBarrel_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASExplosiveBarrel(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASExplosiveBarrel) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASExplosiveBarrel); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASExplosiveBarrel); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASExplosiveBarrel(ASExplosiveBarrel&&); \
	NO_API ASExplosiveBarrel(const ASExplosiveBarrel&); \
public:


#define Actiongame_Source_ActionGame_Public_SExplosiveBarrel_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASExplosiveBarrel(ASExplosiveBarrel&&); \
	NO_API ASExplosiveBarrel(const ASExplosiveBarrel&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASExplosiveBarrel); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASExplosiveBarrel); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASExplosiveBarrel)


#define Actiongame_Source_ActionGame_Public_SExplosiveBarrel_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MeshComp() { return STRUCT_OFFSET(ASExplosiveBarrel, MeshComp); } \
	FORCEINLINE static uint32 __PPO__ForceComp() { return STRUCT_OFFSET(ASExplosiveBarrel, ForceComp); }


#define Actiongame_Source_ActionGame_Public_SExplosiveBarrel_h_14_PROLOG
#define Actiongame_Source_ActionGame_Public_SExplosiveBarrel_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Actiongame_Source_ActionGame_Public_SExplosiveBarrel_h_17_PRIVATE_PROPERTY_OFFSET \
	Actiongame_Source_ActionGame_Public_SExplosiveBarrel_h_17_SPARSE_DATA \
	Actiongame_Source_ActionGame_Public_SExplosiveBarrel_h_17_RPC_WRAPPERS \
	Actiongame_Source_ActionGame_Public_SExplosiveBarrel_h_17_INCLASS \
	Actiongame_Source_ActionGame_Public_SExplosiveBarrel_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Actiongame_Source_ActionGame_Public_SExplosiveBarrel_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Actiongame_Source_ActionGame_Public_SExplosiveBarrel_h_17_PRIVATE_PROPERTY_OFFSET \
	Actiongame_Source_ActionGame_Public_SExplosiveBarrel_h_17_SPARSE_DATA \
	Actiongame_Source_ActionGame_Public_SExplosiveBarrel_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	Actiongame_Source_ActionGame_Public_SExplosiveBarrel_h_17_INCLASS_NO_PURE_DECLS \
	Actiongame_Source_ActionGame_Public_SExplosiveBarrel_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACTIONGAME_API UClass* StaticClass<class ASExplosiveBarrel>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Actiongame_Source_ActionGame_Public_SExplosiveBarrel_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
