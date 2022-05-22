// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
class UPhysicalMaterial;
#ifdef MMT_MMTFrictionComponent_generated_h
#error "MMTFrictionComponent.generated.h already included, missing '#pragma once' in MMTFrictionComponent.h"
#endif
#define MMT_MMTFrictionComponent_generated_h

#define MMT_Content_master_v3_matlab_Plugins_MMT_Source_MMT_Public_MMTFrictionComponent_h_17_SPARSE_DATA
#define MMT_Content_master_v3_matlab_Plugins_MMT_Source_MMT_Public_MMTFrictionComponent_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetFrictionLimit); \
	DECLARE_FUNCTION(execGetFrictionForce); \
	DECLARE_FUNCTION(execToggleDebugMode); \
	DECLARE_FUNCTION(execPhysicsUpdate); \
	DECLARE_FUNCTION(execSetFrictionSurfaceSpeed); \
	DECLARE_FUNCTION(execSetFrictionSurfaceVelocity); \
	DECLARE_FUNCTION(execResetFrictionPoints); \
	DECLARE_FUNCTION(execIsFrictionPointActive); \
	DECLARE_FUNCTION(execRegisterFrictionPoint);


#define MMT_Content_master_v3_matlab_Plugins_MMT_Source_MMT_Public_MMTFrictionComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetFrictionLimit); \
	DECLARE_FUNCTION(execGetFrictionForce); \
	DECLARE_FUNCTION(execToggleDebugMode); \
	DECLARE_FUNCTION(execPhysicsUpdate); \
	DECLARE_FUNCTION(execSetFrictionSurfaceSpeed); \
	DECLARE_FUNCTION(execSetFrictionSurfaceVelocity); \
	DECLARE_FUNCTION(execResetFrictionPoints); \
	DECLARE_FUNCTION(execIsFrictionPointActive); \
	DECLARE_FUNCTION(execRegisterFrictionPoint);


#define MMT_Content_master_v3_matlab_Plugins_MMT_Source_MMT_Public_MMTFrictionComponent_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMMTFrictionComponent(); \
	friend struct Z_Construct_UClass_UMMTFrictionComponent_Statics; \
public: \
	DECLARE_CLASS(UMMTFrictionComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MMT"), NO_API) \
	DECLARE_SERIALIZER(UMMTFrictionComponent)


#define MMT_Content_master_v3_matlab_Plugins_MMT_Source_MMT_Public_MMTFrictionComponent_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUMMTFrictionComponent(); \
	friend struct Z_Construct_UClass_UMMTFrictionComponent_Statics; \
public: \
	DECLARE_CLASS(UMMTFrictionComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MMT"), NO_API) \
	DECLARE_SERIALIZER(UMMTFrictionComponent)


#define MMT_Content_master_v3_matlab_Plugins_MMT_Source_MMT_Public_MMTFrictionComponent_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMMTFrictionComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMMTFrictionComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMMTFrictionComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMMTFrictionComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMMTFrictionComponent(UMMTFrictionComponent&&); \
	NO_API UMMTFrictionComponent(const UMMTFrictionComponent&); \
public:


#define MMT_Content_master_v3_matlab_Plugins_MMT_Source_MMT_Public_MMTFrictionComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMMTFrictionComponent(UMMTFrictionComponent&&); \
	NO_API UMMTFrictionComponent(const UMMTFrictionComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMMTFrictionComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMMTFrictionComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMMTFrictionComponent)


#define MMT_Content_master_v3_matlab_Plugins_MMT_Source_MMT_Public_MMTFrictionComponent_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__EffectedComponentMesh() { return STRUCT_OFFSET(UMMTFrictionComponent, EffectedComponentMesh); } \
	FORCEINLINE static uint32 __PPO__FrictionSurfaceVelocity() { return STRUCT_OFFSET(UMMTFrictionComponent, FrictionSurfaceVelocity); } \
	FORCEINLINE static uint32 __PPO__FrictionSurfaceSpd() { return STRUCT_OFFSET(UMMTFrictionComponent, FrictionSurfaceSpd); } \
	FORCEINLINE static uint32 __PPO__ContactPointsData() { return STRUCT_OFFSET(UMMTFrictionComponent, ContactPointsData); } \
	FORCEINLINE static uint32 __PPO__ReferenceFrameTransform() { return STRUCT_OFFSET(UMMTFrictionComponent, ReferenceFrameTransform); } \
	FORCEINLINE static uint32 __PPO__PrevRelativeVelocityAtPoint() { return STRUCT_OFFSET(UMMTFrictionComponent, PrevRelativeVelocityAtPoint); } \
	FORCEINLINE static uint32 __PPO__LastFrictionForce() { return STRUCT_OFFSET(UMMTFrictionComponent, LastFrictionForce); } \
	FORCEINLINE static uint32 __PPO__LastFrictionLimit() { return STRUCT_OFFSET(UMMTFrictionComponent, LastFrictionLimit); } \
	FORCEINLINE static uint32 __PPO__PrevAngularVelocity() { return STRUCT_OFFSET(UMMTFrictionComponent, PrevAngularVelocity); } \
	FORCEINLINE static uint32 __PPO__PrevLinearVelocity() { return STRUCT_OFFSET(UMMTFrictionComponent, PrevLinearVelocity); }


#define MMT_Content_master_v3_matlab_Plugins_MMT_Source_MMT_Public_MMTFrictionComponent_h_14_PROLOG
#define MMT_Content_master_v3_matlab_Plugins_MMT_Source_MMT_Public_MMTFrictionComponent_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MMT_Content_master_v3_matlab_Plugins_MMT_Source_MMT_Public_MMTFrictionComponent_h_17_PRIVATE_PROPERTY_OFFSET \
	MMT_Content_master_v3_matlab_Plugins_MMT_Source_MMT_Public_MMTFrictionComponent_h_17_SPARSE_DATA \
	MMT_Content_master_v3_matlab_Plugins_MMT_Source_MMT_Public_MMTFrictionComponent_h_17_RPC_WRAPPERS \
	MMT_Content_master_v3_matlab_Plugins_MMT_Source_MMT_Public_MMTFrictionComponent_h_17_INCLASS \
	MMT_Content_master_v3_matlab_Plugins_MMT_Source_MMT_Public_MMTFrictionComponent_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MMT_Content_master_v3_matlab_Plugins_MMT_Source_MMT_Public_MMTFrictionComponent_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MMT_Content_master_v3_matlab_Plugins_MMT_Source_MMT_Public_MMTFrictionComponent_h_17_PRIVATE_PROPERTY_OFFSET \
	MMT_Content_master_v3_matlab_Plugins_MMT_Source_MMT_Public_MMTFrictionComponent_h_17_SPARSE_DATA \
	MMT_Content_master_v3_matlab_Plugins_MMT_Source_MMT_Public_MMTFrictionComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	MMT_Content_master_v3_matlab_Plugins_MMT_Source_MMT_Public_MMTFrictionComponent_h_17_INCLASS_NO_PURE_DECLS \
	MMT_Content_master_v3_matlab_Plugins_MMT_Source_MMT_Public_MMTFrictionComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MMT_API UClass* StaticClass<class UMMTFrictionComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MMT_Content_master_v3_matlab_Plugins_MMT_Source_MMT_Public_MMTFrictionComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
