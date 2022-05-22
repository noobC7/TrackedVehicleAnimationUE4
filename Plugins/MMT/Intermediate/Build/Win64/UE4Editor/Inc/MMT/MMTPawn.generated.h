// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FTransform;
#ifdef MMT_MMTPawn_generated_h
#error "MMTPawn.generated.h already included, missing '#pragma once' in MMTPawn.h"
#endif
#define MMT_MMTPawn_generated_h

#define MMT_Content_master_v3_matlab_Plugins_MMT_Source_MMT_Public_MMTPawn_h_12_SPARSE_DATA
#define MMT_Content_master_v3_matlab_Plugins_MMT_Source_MMT_Public_MMTPawn_h_12_RPC_WRAPPERS \
	virtual void MMTAfterPhysicsTick_Implementation(float DeltaTime); \
	virtual void MMTPhysicsTick_Implementation(float SubstepDeltaTime); \
 \
	DECLARE_FUNCTION(execMMTGetTransformThisPawn); \
	DECLARE_FUNCTION(execMMTAfterPhysicsTick); \
	DECLARE_FUNCTION(execMMTPhysicsTick);


#define MMT_Content_master_v3_matlab_Plugins_MMT_Source_MMT_Public_MMTPawn_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execMMTGetTransformThisPawn); \
	DECLARE_FUNCTION(execMMTAfterPhysicsTick); \
	DECLARE_FUNCTION(execMMTPhysicsTick);


#define MMT_Content_master_v3_matlab_Plugins_MMT_Source_MMT_Public_MMTPawn_h_12_EVENT_PARMS \
	struct MMTPawn_eventMMTAfterPhysicsTick_Parms \
	{ \
		float DeltaTime; \
	}; \
	struct MMTPawn_eventMMTPhysicsTick_Parms \
	{ \
		float SubstepDeltaTime; \
	};


#define MMT_Content_master_v3_matlab_Plugins_MMT_Source_MMT_Public_MMTPawn_h_12_CALLBACK_WRAPPERS
#define MMT_Content_master_v3_matlab_Plugins_MMT_Source_MMT_Public_MMTPawn_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMMTPawn(); \
	friend struct Z_Construct_UClass_AMMTPawn_Statics; \
public: \
	DECLARE_CLASS(AMMTPawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MMT"), NO_API) \
	DECLARE_SERIALIZER(AMMTPawn)


#define MMT_Content_master_v3_matlab_Plugins_MMT_Source_MMT_Public_MMTPawn_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAMMTPawn(); \
	friend struct Z_Construct_UClass_AMMTPawn_Statics; \
public: \
	DECLARE_CLASS(AMMTPawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MMT"), NO_API) \
	DECLARE_SERIALIZER(AMMTPawn)


#define MMT_Content_master_v3_matlab_Plugins_MMT_Source_MMT_Public_MMTPawn_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMMTPawn(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMMTPawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMMTPawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMMTPawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMMTPawn(AMMTPawn&&); \
	NO_API AMMTPawn(const AMMTPawn&); \
public:


#define MMT_Content_master_v3_matlab_Plugins_MMT_Source_MMT_Public_MMTPawn_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMMTPawn(AMMTPawn&&); \
	NO_API AMMTPawn(const AMMTPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMMTPawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMMTPawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMMTPawn)


#define MMT_Content_master_v3_matlab_Plugins_MMT_Source_MMT_Public_MMTPawn_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PawnRootComponent() { return STRUCT_OFFSET(AMMTPawn, PawnRootComponent); }


#define MMT_Content_master_v3_matlab_Plugins_MMT_Source_MMT_Public_MMTPawn_h_9_PROLOG \
	MMT_Content_master_v3_matlab_Plugins_MMT_Source_MMT_Public_MMTPawn_h_12_EVENT_PARMS


#define MMT_Content_master_v3_matlab_Plugins_MMT_Source_MMT_Public_MMTPawn_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MMT_Content_master_v3_matlab_Plugins_MMT_Source_MMT_Public_MMTPawn_h_12_PRIVATE_PROPERTY_OFFSET \
	MMT_Content_master_v3_matlab_Plugins_MMT_Source_MMT_Public_MMTPawn_h_12_SPARSE_DATA \
	MMT_Content_master_v3_matlab_Plugins_MMT_Source_MMT_Public_MMTPawn_h_12_RPC_WRAPPERS \
	MMT_Content_master_v3_matlab_Plugins_MMT_Source_MMT_Public_MMTPawn_h_12_CALLBACK_WRAPPERS \
	MMT_Content_master_v3_matlab_Plugins_MMT_Source_MMT_Public_MMTPawn_h_12_INCLASS \
	MMT_Content_master_v3_matlab_Plugins_MMT_Source_MMT_Public_MMTPawn_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MMT_Content_master_v3_matlab_Plugins_MMT_Source_MMT_Public_MMTPawn_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MMT_Content_master_v3_matlab_Plugins_MMT_Source_MMT_Public_MMTPawn_h_12_PRIVATE_PROPERTY_OFFSET \
	MMT_Content_master_v3_matlab_Plugins_MMT_Source_MMT_Public_MMTPawn_h_12_SPARSE_DATA \
	MMT_Content_master_v3_matlab_Plugins_MMT_Source_MMT_Public_MMTPawn_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	MMT_Content_master_v3_matlab_Plugins_MMT_Source_MMT_Public_MMTPawn_h_12_CALLBACK_WRAPPERS \
	MMT_Content_master_v3_matlab_Plugins_MMT_Source_MMT_Public_MMTPawn_h_12_INCLASS_NO_PURE_DECLS \
	MMT_Content_master_v3_matlab_Plugins_MMT_Source_MMT_Public_MMTPawn_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MMT_API UClass* StaticClass<class AMMTPawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MMT_Content_master_v3_matlab_Plugins_MMT_Source_MMT_Public_MMTPawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
