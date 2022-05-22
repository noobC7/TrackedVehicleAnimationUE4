// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
struct FVector2D;
class UPhysicsConstraintComponent;
class UActorComponent;
class UInstancedStaticMeshComponent;
class USplineComponent;
class UMeshComponent;
class UPrimitiveComponent;
class AActor;
struct FTransform;
class USceneComponent;
#ifdef MMT_MMTBPFunctionLibrary_generated_h
#error "MMTBPFunctionLibrary.generated.h already included, missing '#pragma once' in MMTBPFunctionLibrary.h"
#endif
#define MMT_MMTBPFunctionLibrary_generated_h

#define MMT_Content_master_v3_matlab_Plugins_MMT_Source_MMT_Public_MMTBPFunctionLibrary_h_15_SPARSE_DATA
#define MMT_Content_master_v3_matlab_Plugins_MMT_Source_MMT_Public_MMTBPFunctionLibrary_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCartesianToSpherical); \
	DECLARE_FUNCTION(execSphericalToUnitCartesian); \
	DECLARE_FUNCTION(execSetLinearBreakThreshold); \
	DECLARE_FUNCTION(execGetMuFromFrictionElipse); \
	DECLARE_FUNCTION(execGetInstancedStaticMeshComponentReferenceByName); \
	DECLARE_FUNCTION(execGetSplineComponentReferenceByName); \
	DECLARE_FUNCTION(execGetMeshComponentReferenceByName); \
	DECLARE_FUNCTION(execMMTSetInertiaTensor); \
	DECLARE_FUNCTION(execMMTAddTorqueComponent); \
	DECLARE_FUNCTION(execMMTAddForceAtLocationComponent); \
	DECLARE_FUNCTION(execMMTAddForceComponent); \
	DECLARE_FUNCTION(execMMTGetTransformActor); \
	DECLARE_FUNCTION(execMMTSetTransformComponent); \
	DECLARE_FUNCTION(execMMTGetTransformComponent);


#define MMT_Content_master_v3_matlab_Plugins_MMT_Source_MMT_Public_MMTBPFunctionLibrary_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCartesianToSpherical); \
	DECLARE_FUNCTION(execSphericalToUnitCartesian); \
	DECLARE_FUNCTION(execSetLinearBreakThreshold); \
	DECLARE_FUNCTION(execGetMuFromFrictionElipse); \
	DECLARE_FUNCTION(execGetInstancedStaticMeshComponentReferenceByName); \
	DECLARE_FUNCTION(execGetSplineComponentReferenceByName); \
	DECLARE_FUNCTION(execGetMeshComponentReferenceByName); \
	DECLARE_FUNCTION(execMMTSetInertiaTensor); \
	DECLARE_FUNCTION(execMMTAddTorqueComponent); \
	DECLARE_FUNCTION(execMMTAddForceAtLocationComponent); \
	DECLARE_FUNCTION(execMMTAddForceComponent); \
	DECLARE_FUNCTION(execMMTGetTransformActor); \
	DECLARE_FUNCTION(execMMTSetTransformComponent); \
	DECLARE_FUNCTION(execMMTGetTransformComponent);


#define MMT_Content_master_v3_matlab_Plugins_MMT_Source_MMT_Public_MMTBPFunctionLibrary_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMMTBPFunctionLibrary(); \
	friend struct Z_Construct_UClass_UMMTBPFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UMMTBPFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MMT"), NO_API) \
	DECLARE_SERIALIZER(UMMTBPFunctionLibrary)


#define MMT_Content_master_v3_matlab_Plugins_MMT_Source_MMT_Public_MMTBPFunctionLibrary_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUMMTBPFunctionLibrary(); \
	friend struct Z_Construct_UClass_UMMTBPFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UMMTBPFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MMT"), NO_API) \
	DECLARE_SERIALIZER(UMMTBPFunctionLibrary)


#define MMT_Content_master_v3_matlab_Plugins_MMT_Source_MMT_Public_MMTBPFunctionLibrary_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMMTBPFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMMTBPFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMMTBPFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMMTBPFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMMTBPFunctionLibrary(UMMTBPFunctionLibrary&&); \
	NO_API UMMTBPFunctionLibrary(const UMMTBPFunctionLibrary&); \
public:


#define MMT_Content_master_v3_matlab_Plugins_MMT_Source_MMT_Public_MMTBPFunctionLibrary_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMMTBPFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMMTBPFunctionLibrary(UMMTBPFunctionLibrary&&); \
	NO_API UMMTBPFunctionLibrary(const UMMTBPFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMMTBPFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMMTBPFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMMTBPFunctionLibrary)


#define MMT_Content_master_v3_matlab_Plugins_MMT_Source_MMT_Public_MMTBPFunctionLibrary_h_15_PRIVATE_PROPERTY_OFFSET
#define MMT_Content_master_v3_matlab_Plugins_MMT_Source_MMT_Public_MMTBPFunctionLibrary_h_12_PROLOG
#define MMT_Content_master_v3_matlab_Plugins_MMT_Source_MMT_Public_MMTBPFunctionLibrary_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MMT_Content_master_v3_matlab_Plugins_MMT_Source_MMT_Public_MMTBPFunctionLibrary_h_15_PRIVATE_PROPERTY_OFFSET \
	MMT_Content_master_v3_matlab_Plugins_MMT_Source_MMT_Public_MMTBPFunctionLibrary_h_15_SPARSE_DATA \
	MMT_Content_master_v3_matlab_Plugins_MMT_Source_MMT_Public_MMTBPFunctionLibrary_h_15_RPC_WRAPPERS \
	MMT_Content_master_v3_matlab_Plugins_MMT_Source_MMT_Public_MMTBPFunctionLibrary_h_15_INCLASS \
	MMT_Content_master_v3_matlab_Plugins_MMT_Source_MMT_Public_MMTBPFunctionLibrary_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MMT_Content_master_v3_matlab_Plugins_MMT_Source_MMT_Public_MMTBPFunctionLibrary_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MMT_Content_master_v3_matlab_Plugins_MMT_Source_MMT_Public_MMTBPFunctionLibrary_h_15_PRIVATE_PROPERTY_OFFSET \
	MMT_Content_master_v3_matlab_Plugins_MMT_Source_MMT_Public_MMTBPFunctionLibrary_h_15_SPARSE_DATA \
	MMT_Content_master_v3_matlab_Plugins_MMT_Source_MMT_Public_MMTBPFunctionLibrary_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	MMT_Content_master_v3_matlab_Plugins_MMT_Source_MMT_Public_MMTBPFunctionLibrary_h_15_INCLASS_NO_PURE_DECLS \
	MMT_Content_master_v3_matlab_Plugins_MMT_Source_MMT_Public_MMTBPFunctionLibrary_h_15_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class MMTBPFunctionLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MMT_API UClass* StaticClass<class UMMTBPFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MMT_Content_master_v3_matlab_Plugins_MMT_Source_MMT_Public_MMTBPFunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
