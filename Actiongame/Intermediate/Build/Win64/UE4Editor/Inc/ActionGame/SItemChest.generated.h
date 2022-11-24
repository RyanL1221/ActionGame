// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ACTIONGAME_SItemChest_generated_h
#error "SItemChest.generated.h already included, missing '#pragma once' in SItemChest.h"
#endif
#define ACTIONGAME_SItemChest_generated_h

#define Actiongame_Source_ActionGame_Public_SItemChest_h_13_SPARSE_DATA
#define Actiongame_Source_ActionGame_Public_SItemChest_h_13_RPC_WRAPPERS
#define Actiongame_Source_ActionGame_Public_SItemChest_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define Actiongame_Source_ActionGame_Public_SItemChest_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASItemChest(); \
	friend struct Z_Construct_UClass_ASItemChest_Statics; \
public: \
	DECLARE_CLASS(ASItemChest, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ActionGame"), NO_API) \
	DECLARE_SERIALIZER(ASItemChest) \
	virtual UObject* _getUObject() const override { return const_cast<ASItemChest*>(this); }


#define Actiongame_Source_ActionGame_Public_SItemChest_h_13_INCLASS \
private: \
	static void StaticRegisterNativesASItemChest(); \
	friend struct Z_Construct_UClass_ASItemChest_Statics; \
public: \
	DECLARE_CLASS(ASItemChest, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ActionGame"), NO_API) \
	DECLARE_SERIALIZER(ASItemChest) \
	virtual UObject* _getUObject() const override { return const_cast<ASItemChest*>(this); }


#define Actiongame_Source_ActionGame_Public_SItemChest_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASItemChest(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASItemChest) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASItemChest); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASItemChest); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASItemChest(ASItemChest&&); \
	NO_API ASItemChest(const ASItemChest&); \
public:


#define Actiongame_Source_ActionGame_Public_SItemChest_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASItemChest(ASItemChest&&); \
	NO_API ASItemChest(const ASItemChest&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASItemChest); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASItemChest); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASItemChest)


#define Actiongame_Source_ActionGame_Public_SItemChest_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__BaseMesh() { return STRUCT_OFFSET(ASItemChest, BaseMesh); } \
	FORCEINLINE static uint32 __PPO__LidMesh() { return STRUCT_OFFSET(ASItemChest, LidMesh); }


#define Actiongame_Source_ActionGame_Public_SItemChest_h_10_PROLOG
#define Actiongame_Source_ActionGame_Public_SItemChest_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Actiongame_Source_ActionGame_Public_SItemChest_h_13_PRIVATE_PROPERTY_OFFSET \
	Actiongame_Source_ActionGame_Public_SItemChest_h_13_SPARSE_DATA \
	Actiongame_Source_ActionGame_Public_SItemChest_h_13_RPC_WRAPPERS \
	Actiongame_Source_ActionGame_Public_SItemChest_h_13_INCLASS \
	Actiongame_Source_ActionGame_Public_SItemChest_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Actiongame_Source_ActionGame_Public_SItemChest_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Actiongame_Source_ActionGame_Public_SItemChest_h_13_PRIVATE_PROPERTY_OFFSET \
	Actiongame_Source_ActionGame_Public_SItemChest_h_13_SPARSE_DATA \
	Actiongame_Source_ActionGame_Public_SItemChest_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Actiongame_Source_ActionGame_Public_SItemChest_h_13_INCLASS_NO_PURE_DECLS \
	Actiongame_Source_ActionGame_Public_SItemChest_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACTIONGAME_API UClass* StaticClass<class ASItemChest>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Actiongame_Source_ActionGame_Public_SItemChest_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
