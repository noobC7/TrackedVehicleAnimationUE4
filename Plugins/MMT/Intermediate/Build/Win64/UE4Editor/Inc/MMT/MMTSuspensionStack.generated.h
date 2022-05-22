// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
class UMeshComponent;
class UPhysicalMaterial;
#ifdef MMT_MMTSuspensionStack_generated_h
#error "MMTSuspensionStack.generated.h already included, missing '#pragma once' in MMTSuspensionStack.h"
#endif
#define MMT_MMTSuspensionStack_generated_h

#define MMT_Content_master_v3_matlab_Plugins_MMT_Source_MMT_Public_MMTSuspensionStack_h_26_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSuspensionStackStruct_Statics; \
	MMT_API static class UScriptStruct* StaticStruct();


template<> MMT_API UScriptStruct* StaticStruct<struct FSuspensionStackStruct>();

#define MMT_Content_master_v3_matlab_Plugins_MMT_Source_MMT_Public_MMTSuspensionStack_h_115_SPARSE_DATA
#define MMT_Content_master_v3_matlab_Plugins_MMT_Source_MMT_Public_MMTSuspensionStack_h_115_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execTest); \
	DECLARE_FUNCTION(execApplyAntiRollForce); \
	DECLARE_FUNCTION(execGetSuspensionCompressionRatio); \
	DECLARE_FUNCTION(execGetSuspensionForceScale); \
	DECLARE_FUNCTION(execSetSuspensionForceScale); \
	DECLARE_FUNCTION(execSetSpringOffsets); \
	DECLARE_FUNCTION(execSetSpringStiffness); \
	DECLARE_FUNCTION(execSetSweepShapeComponentReference); \
	DECLARE_FUNCTION(execSetSprungComponentReference); \
	DECLARE_FUNCTION(execGetWheelHubPosition); \
	DECLARE_FUNCTION(execGetContactData); \
	DECLARE_FUNCTION(execGetSuspensionForce); \
	DECLARE_FUNCTION(execToggleDebugMode); \
	DECLARE_FUNCTION(execInitialize); \
	DECLARE_FUNCTION(execPhysicsUpdate);


#define MMT_Content_master_v3_matlab_Plugins_MMT_Source_MMT_Public_MMTSuspensionStack_h_115_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execTest); \
	DECLARE_FUNCTION(execApplyAntiRollForce); \
	DECLARE_FUNCTION(execGetSuspensionCompressionRatio); \
	DECLARE_FUNCTION(execGetSuspensionForceScale); \
	DECLARE_FUNCTION(execSetSuspensionForceScale); \
	DECLARE_FUNCTION(execSetSpringOffsets); \
	DECLARE_FUNCTION(execSetSpringStiffness); \
	DECLARE_FUNCTION(execSetSweepShapeComponentReference); \
	DECLARE_FUNCTION(execSetSprungComponentReference); \
	DECLARE_FUNCTION(execGetWheelHubPosition); \
	DECLARE_FUNCTION(execGetContactData); \
	DECLARE_FUNCTION(execGetSuspensionForce); \
	DECLARE_FUNCTION(execToggleDebugMode); \
	DECLARE_FUNCTION(execInitialize); \
	DECLARE_FUNCTION(execPhysicsUpdate);


#define MMT_Content_master_v3_matlab_Plugins_MMT_Source_MMT_Public_MMTSuspensionStack_h_115_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMMTSuspensionStack(); \
	friend struct Z_Construct_UClass_UMMTSuspensionStack_Statics; \
public: \
	DECLARE_CLASS(UMMTSuspensionStack, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MMT"), NO_API) \
	DECLARE_SERIALIZER(UMMTSuspensionStack)


#define MMT_Content_master_v3_matlab_Plugins_MMT_Source_MMT_Public_MMTSuspensionStack_h_115_INCLASS \
private: \
	static void StaticRegisterNativesUMMTSuspensionStack(); \
	friend struct Z_Construct_UClass_UMMTSuspensionStack_Statics; \
public: \
	DECLARE_CLASS(UMMTSuspensionStack, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MMT"), NO_API) \
	DECLARE_SERIALIZER(UMMTSuspensionStack)


#define MMT_Content_master_v3_matlab_Plugins_MMT_Source_MMT_Public_MMTSuspensionStack_h_115_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMMTSuspensionStack(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMMTSuspensionStack) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMMTSuspensionStack); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMMTSuspensionStack); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMMTSuspensionStack(UMMTSuspensionStack&&); \
	NO_API UMMTSuspensionStack(const UMMTSuspensionStack&); \
public:


#define MMT_Content_master_v3_matlab_Plugins_MMT_Source_MMT_Public_MMTSuspensionStack_h_115_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMMTSuspensionStack(UMMTSuspensionStack&&); \
	NO_API UMMTSuspensionStack(const UMMTSuspensionStack&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMMTSuspensionStack); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMMTSuspensionStack); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMMTSuspensionStack)


#define MMT_Content_master_v3_matlab_Plugins_MMT_Source_MMT_Public_MMTSuspensionStack_h_115_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ParentComponentRef() { return STRUCT_OFFSET(UMMTSuspensionStack, ParentComponentRef); } \
	FORCEINLINE static uint32 __PPO__SprungMeshComponent() { return STRUCT_OFFSET(UMMTSuspensionStack, SprungMeshComponent); } \
	FORCEINLINE static uint32 __PPO__bSprungMeshComponentSetManually() { return STRUCT_OFFSET(UMMTSuspensionStack, bSprungMeshComponentSetManually); } \
	FORCEINLINE static uint32 __PPO__SweepShapeMeshComponent() { return STRUCT_OFFSET(UMMTSuspensionStack, SweepShapeMeshComponent); } \
	FORCEINLINE static uint32 __PPO__bSweepShapeMeshComponentSetManually() { return STRUCT_OFFSET(UMMTSuspensionStack, bSweepShapeMeshComponentSetManually); } \
	FORCEINLINE static uint32 __PPO__ComponentName() { return STRUCT_OFFSET(UMMTSuspensionStack, ComponentName); } \
	FORCEINLINE static uint32 __PPO__ComponentsParentName() { return STRUCT_OFFSET(UMMTSuspensionStack, ComponentsParentName); } \
	FORCEINLINE static uint32 __PPO__SpringMaxLenght() { return STRUCT_OFFSET(UMMTSuspensionStack, SpringMaxLenght); } \
	FORCEINLINE static uint32 __PPO__SpringOffsetTopAdjusted() { return STRUCT_OFFSET(UMMTSuspensionStack, SpringOffsetTopAdjusted); } \
	FORCEINLINE static uint32 __PPO__SpringOffsetBottomAdjusted() { return STRUCT_OFFSET(UMMTSuspensionStack, SpringOffsetBottomAdjusted); } \
	FORCEINLINE static uint32 __PPO__ReferenceFrameTransform() { return STRUCT_OFFSET(UMMTSuspensionStack, ReferenceFrameTransform); } \
	FORCEINLINE static uint32 __PPO__SpringDirectionLocal() { return STRUCT_OFFSET(UMMTSuspensionStack, SpringDirectionLocal); } \
	FORCEINLINE static uint32 __PPO__bWarningMessageDisplayed() { return STRUCT_OFFSET(UMMTSuspensionStack, bWarningMessageDisplayed); } \
	FORCEINLINE static uint32 __PPO__WheelHubPositionLS() { return STRUCT_OFFSET(UMMTSuspensionStack, WheelHubPositionLS); } \
	FORCEINLINE static uint32 __PPO__PreviousSpringLenght() { return STRUCT_OFFSET(UMMTSuspensionStack, PreviousSpringLenght); } \
	FORCEINLINE static uint32 __PPO__SuspensionForceMagnitude() { return STRUCT_OFFSET(UMMTSuspensionStack, SuspensionForceMagnitude); } \
	FORCEINLINE static uint32 __PPO__SuspensionForceLS() { return STRUCT_OFFSET(UMMTSuspensionStack, SuspensionForceLS); } \
	FORCEINLINE static uint32 __PPO__SuspensionForceWS() { return STRUCT_OFFSET(UMMTSuspensionStack, SuspensionForceWS); } \
	FORCEINLINE static uint32 __PPO__SuspensionForceScale() { return STRUCT_OFFSET(UMMTSuspensionStack, SuspensionForceScale); } \
	FORCEINLINE static uint32 __PPO__CompressionRatio() { return STRUCT_OFFSET(UMMTSuspensionStack, CompressionRatio); } \
	FORCEINLINE static uint32 __PPO__LineTraceOffsetTopLS() { return STRUCT_OFFSET(UMMTSuspensionStack, LineTraceOffsetTopLS); } \
	FORCEINLINE static uint32 __PPO__LineTraceOffsetBottomLS() { return STRUCT_OFFSET(UMMTSuspensionStack, LineTraceOffsetBottomLS); } \
	FORCEINLINE static uint32 __PPO__TracedHubLocation() { return STRUCT_OFFSET(UMMTSuspensionStack, TracedHubLocation); } \
	FORCEINLINE static uint32 __PPO__ShapeSweepLocation() { return STRUCT_OFFSET(UMMTSuspensionStack, ShapeSweepLocation); } \
	FORCEINLINE static uint32 __PPO__bContactPointActive() { return STRUCT_OFFSET(UMMTSuspensionStack, bContactPointActive); } \
	FORCEINLINE static uint32 __PPO__ContactInducedVelocity() { return STRUCT_OFFSET(UMMTSuspensionStack, ContactInducedVelocity); } \
	FORCEINLINE static uint32 __PPO__ContactForceAtPoint() { return STRUCT_OFFSET(UMMTSuspensionStack, ContactForceAtPoint); } \
	FORCEINLINE static uint32 __PPO__ContactPointLocation() { return STRUCT_OFFSET(UMMTSuspensionStack, ContactPointLocation); } \
	FORCEINLINE static uint32 __PPO__ContactPointNormal() { return STRUCT_OFFSET(UMMTSuspensionStack, ContactPointNormal); } \
	FORCEINLINE static uint32 __PPO__ContactPhysicalMaterial() { return STRUCT_OFFSET(UMMTSuspensionStack, ContactPhysicalMaterial); }


#define MMT_Content_master_v3_matlab_Plugins_MMT_Source_MMT_Public_MMTSuspensionStack_h_112_PROLOG
#define MMT_Content_master_v3_matlab_Plugins_MMT_Source_MMT_Public_MMTSuspensionStack_h_115_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MMT_Content_master_v3_matlab_Plugins_MMT_Source_MMT_Public_MMTSuspensionStack_h_115_PRIVATE_PROPERTY_OFFSET \
	MMT_Content_master_v3_matlab_Plugins_MMT_Source_MMT_Public_MMTSuspensionStack_h_115_SPARSE_DATA \
	MMT_Content_master_v3_matlab_Plugins_MMT_Source_MMT_Public_MMTSuspensionStack_h_115_RPC_WRAPPERS \
	MMT_Content_master_v3_matlab_Plugins_MMT_Source_MMT_Public_MMTSuspensionStack_h_115_INCLASS \
	MMT_Content_master_v3_matlab_Plugins_MMT_Source_MMT_Public_MMTSuspensionStack_h_115_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MMT_Content_master_v3_matlab_Plugins_MMT_Source_MMT_Public_MMTSuspensionStack_h_115_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MMT_Content_master_v3_matlab_Plugins_MMT_Source_MMT_Public_MMTSuspensionStack_h_115_PRIVATE_PROPERTY_OFFSET \
	MMT_Content_master_v3_matlab_Plugins_MMT_Source_MMT_Public_MMTSuspensionStack_h_115_SPARSE_DATA \
	MMT_Content_master_v3_matlab_Plugins_MMT_Source_MMT_Public_MMTSuspensionStack_h_115_RPC_WRAPPERS_NO_PURE_DECLS \
	MMT_Content_master_v3_matlab_Plugins_MMT_Source_MMT_Public_MMTSuspensionStack_h_115_INCLASS_NO_PURE_DECLS \
	MMT_Content_master_v3_matlab_Plugins_MMT_Source_MMT_Public_MMTSuspensionStack_h_115_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MMT_API UClass* StaticClass<class UMMTSuspensionStack>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MMT_Content_master_v3_matlab_Plugins_MMT_Source_MMT_Public_MMTSuspensionStack_h


#define FOREACH_ENUM_ESUSPENSIONSIMMODE(op) \
	op(ESuspensionSimMode::RayCheck) \
	op(ESuspensionSimMode::SphereCheck) \
	op(ESuspensionSimMode::ShapeSweep) 

enum class ESuspensionSimMode : uint8;
template<> MMT_API UEnum* StaticEnum<ESuspensionSimMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
