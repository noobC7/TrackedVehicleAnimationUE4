// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FTransform;
struct FRotator;
#ifdef MMT_MMTTrackAnimationComponent_generated_h
#error "MMTTrackAnimationComponent.generated.h already included, missing '#pragma once' in MMTTrackAnimationComponent.h"
#endif
#define MMT_MMTTrackAnimationComponent_generated_h

#define MMT_Content_master_v3_matlab_Plugins_MMT_Source_MMT_Public_MMTTrackAnimationComponent_h_17_SPARSE_DATA
#define MMT_Content_master_v3_matlab_Plugins_MMT_Source_MMT_Public_MMTTrackAnimationComponent_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetTrackAngularPosition); \
	DECLARE_FUNCTION(execGetSecondaryTreadsTransformArray); \
	DECLARE_FUNCTION(execGetTreadsTransformArray); \
	DECLARE_FUNCTION(execBuildTrackMeshAndSpline); \
	DECLARE_FUNCTION(execUpdateTrackAnimation); \
	DECLARE_FUNCTION(execSetTrackPartsAngularVelocity);


#define MMT_Content_master_v3_matlab_Plugins_MMT_Source_MMT_Public_MMTTrackAnimationComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetTrackAngularPosition); \
	DECLARE_FUNCTION(execGetSecondaryTreadsTransformArray); \
	DECLARE_FUNCTION(execGetTreadsTransformArray); \
	DECLARE_FUNCTION(execBuildTrackMeshAndSpline); \
	DECLARE_FUNCTION(execUpdateTrackAnimation); \
	DECLARE_FUNCTION(execSetTrackPartsAngularVelocity);


#define MMT_Content_master_v3_matlab_Plugins_MMT_Source_MMT_Public_MMTTrackAnimationComponent_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMMTTrackAnimationComponent(); \
	friend struct Z_Construct_UClass_UMMTTrackAnimationComponent_Statics; \
public: \
	DECLARE_CLASS(UMMTTrackAnimationComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MMT"), NO_API) \
	DECLARE_SERIALIZER(UMMTTrackAnimationComponent)


#define MMT_Content_master_v3_matlab_Plugins_MMT_Source_MMT_Public_MMTTrackAnimationComponent_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUMMTTrackAnimationComponent(); \
	friend struct Z_Construct_UClass_UMMTTrackAnimationComponent_Statics; \
public: \
	DECLARE_CLASS(UMMTTrackAnimationComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MMT"), NO_API) \
	DECLARE_SERIALIZER(UMMTTrackAnimationComponent)


#define MMT_Content_master_v3_matlab_Plugins_MMT_Source_MMT_Public_MMTTrackAnimationComponent_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMMTTrackAnimationComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMMTTrackAnimationComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMMTTrackAnimationComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMMTTrackAnimationComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMMTTrackAnimationComponent(UMMTTrackAnimationComponent&&); \
	NO_API UMMTTrackAnimationComponent(const UMMTTrackAnimationComponent&); \
public:


#define MMT_Content_master_v3_matlab_Plugins_MMT_Source_MMT_Public_MMTTrackAnimationComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMMTTrackAnimationComponent(UMMTTrackAnimationComponent&&); \
	NO_API UMMTTrackAnimationComponent(const UMMTTrackAnimationComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMMTTrackAnimationComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMMTTrackAnimationComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMMTTrackAnimationComponent)


#define MMT_Content_master_v3_matlab_Plugins_MMT_Source_MMT_Public_MMTTrackAnimationComponent_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SprocketsIdlersRoadwheelsComponents() { return STRUCT_OFFSET(UMMTTrackAnimationComponent, SprocketsIdlersRoadwheelsComponents); } \
	FORCEINLINE static uint32 __PPO__TrackSplineComponent() { return STRUCT_OFFSET(UMMTTrackAnimationComponent, TrackSplineComponent); } \
	FORCEINLINE static uint32 __PPO__TreadsInstancedMeshComponent() { return STRUCT_OFFSET(UMMTTrackAnimationComponent, TreadsInstancedMeshComponent); } \
	FORCEINLINE static uint32 __PPO__SecondTreadsInstancedMeshComponent() { return STRUCT_OFFSET(UMMTTrackAnimationComponent, SecondTreadsInstancedMeshComponent); } \
	FORCEINLINE static uint32 __PPO__TrackPartsAngularVelocityDegrees() { return STRUCT_OFFSET(UMMTTrackAnimationComponent, TrackPartsAngularVelocityDegrees); } \
	FORCEINLINE static uint32 __PPO__TreadFractionalTravel() { return STRUCT_OFFSET(UMMTTrackAnimationComponent, TreadFractionalTravel); } \
	FORCEINLINE static uint32 __PPO__PartsRotationDegrees() { return STRUCT_OFFSET(UMMTTrackAnimationComponent, PartsRotationDegrees); } \
	FORCEINLINE static uint32 __PPO__TreadOffsetCount() { return STRUCT_OFFSET(UMMTTrackAnimationComponent, TreadOffsetCount); } \
	FORCEINLINE static uint32 __PPO__PartsOffsetCount() { return STRUCT_OFFSET(UMMTTrackAnimationComponent, PartsOffsetCount); } \
	FORCEINLINE static uint32 __PPO__NumberOfFullOffsets() { return STRUCT_OFFSET(UMMTTrackAnimationComponent, NumberOfFullOffsets); } \
	FORCEINLINE static uint32 __PPO__TreadsTransforms() { return STRUCT_OFFSET(UMMTTrackAnimationComponent, TreadsTransforms); } \
	FORCEINLINE static uint32 __PPO__SecondaryTreadsTransforms() { return STRUCT_OFFSET(UMMTTrackAnimationComponent, SecondaryTreadsTransforms); } \
	FORCEINLINE static uint32 __PPO__TreadAllignedTransformPreviousUpdate() { return STRUCT_OFFSET(UMMTTrackAnimationComponent, TreadAllignedTransformPreviousUpdate); } \
	FORCEINLINE static uint32 __PPO__SecondaryTreadAllignedTransformPreviousUpdate() { return STRUCT_OFFSET(UMMTTrackAnimationComponent, SecondaryTreadAllignedTransformPreviousUpdate); }


#define MMT_Content_master_v3_matlab_Plugins_MMT_Source_MMT_Public_MMTTrackAnimationComponent_h_14_PROLOG
#define MMT_Content_master_v3_matlab_Plugins_MMT_Source_MMT_Public_MMTTrackAnimationComponent_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MMT_Content_master_v3_matlab_Plugins_MMT_Source_MMT_Public_MMTTrackAnimationComponent_h_17_PRIVATE_PROPERTY_OFFSET \
	MMT_Content_master_v3_matlab_Plugins_MMT_Source_MMT_Public_MMTTrackAnimationComponent_h_17_SPARSE_DATA \
	MMT_Content_master_v3_matlab_Plugins_MMT_Source_MMT_Public_MMTTrackAnimationComponent_h_17_RPC_WRAPPERS \
	MMT_Content_master_v3_matlab_Plugins_MMT_Source_MMT_Public_MMTTrackAnimationComponent_h_17_INCLASS \
	MMT_Content_master_v3_matlab_Plugins_MMT_Source_MMT_Public_MMTTrackAnimationComponent_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MMT_Content_master_v3_matlab_Plugins_MMT_Source_MMT_Public_MMTTrackAnimationComponent_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MMT_Content_master_v3_matlab_Plugins_MMT_Source_MMT_Public_MMTTrackAnimationComponent_h_17_PRIVATE_PROPERTY_OFFSET \
	MMT_Content_master_v3_matlab_Plugins_MMT_Source_MMT_Public_MMTTrackAnimationComponent_h_17_SPARSE_DATA \
	MMT_Content_master_v3_matlab_Plugins_MMT_Source_MMT_Public_MMTTrackAnimationComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	MMT_Content_master_v3_matlab_Plugins_MMT_Source_MMT_Public_MMTTrackAnimationComponent_h_17_INCLASS_NO_PURE_DECLS \
	MMT_Content_master_v3_matlab_Plugins_MMT_Source_MMT_Public_MMTTrackAnimationComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MMT_API UClass* StaticClass<class UMMTTrackAnimationComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MMT_Content_master_v3_matlab_Plugins_MMT_Source_MMT_Public_MMTTrackAnimationComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
