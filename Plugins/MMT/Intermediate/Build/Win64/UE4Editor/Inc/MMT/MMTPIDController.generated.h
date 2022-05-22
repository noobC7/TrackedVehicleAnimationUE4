// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FPIDErrorItemStruct;
#ifdef MMT_MMTPIDController_generated_h
#error "MMTPIDController.generated.h already included, missing '#pragma once' in MMTPIDController.h"
#endif
#define MMT_MMTPIDController_generated_h

#define MMT_Content_master_v3_matlab_Plugins_MMT_Source_MMT_Public_MMTPIDController_h_12_SPARSE_DATA
#define MMT_Content_master_v3_matlab_Plugins_MMT_Source_MMT_Public_MMTPIDController_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execResetController); \
	DECLARE_FUNCTION(execGetControlCoefficient); \
	DECLARE_FUNCTION(execAddMeasuredError);


#define MMT_Content_master_v3_matlab_Plugins_MMT_Source_MMT_Public_MMTPIDController_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execResetController); \
	DECLARE_FUNCTION(execGetControlCoefficient); \
	DECLARE_FUNCTION(execAddMeasuredError);


#define MMT_Content_master_v3_matlab_Plugins_MMT_Source_MMT_Public_MMTPIDController_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMMTPIDController(); \
	friend struct Z_Construct_UClass_UMMTPIDController_Statics; \
public: \
	DECLARE_CLASS(UMMTPIDController, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MMT"), NO_API) \
	DECLARE_SERIALIZER(UMMTPIDController)


#define MMT_Content_master_v3_matlab_Plugins_MMT_Source_MMT_Public_MMTPIDController_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUMMTPIDController(); \
	friend struct Z_Construct_UClass_UMMTPIDController_Statics; \
public: \
	DECLARE_CLASS(UMMTPIDController, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MMT"), NO_API) \
	DECLARE_SERIALIZER(UMMTPIDController)


#define MMT_Content_master_v3_matlab_Plugins_MMT_Source_MMT_Public_MMTPIDController_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMMTPIDController(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMMTPIDController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMMTPIDController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMMTPIDController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMMTPIDController(UMMTPIDController&&); \
	NO_API UMMTPIDController(const UMMTPIDController&); \
public:


#define MMT_Content_master_v3_matlab_Plugins_MMT_Source_MMT_Public_MMTPIDController_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMMTPIDController(UMMTPIDController&&); \
	NO_API UMMTPIDController(const UMMTPIDController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMMTPIDController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMMTPIDController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMMTPIDController)


#define MMT_Content_master_v3_matlab_Plugins_MMT_Source_MMT_Public_MMTPIDController_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MeasuredErrors() { return STRUCT_OFFSET(UMMTPIDController, MeasuredErrors); }


#define MMT_Content_master_v3_matlab_Plugins_MMT_Source_MMT_Public_MMTPIDController_h_9_PROLOG
#define MMT_Content_master_v3_matlab_Plugins_MMT_Source_MMT_Public_MMTPIDController_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MMT_Content_master_v3_matlab_Plugins_MMT_Source_MMT_Public_MMTPIDController_h_12_PRIVATE_PROPERTY_OFFSET \
	MMT_Content_master_v3_matlab_Plugins_MMT_Source_MMT_Public_MMTPIDController_h_12_SPARSE_DATA \
	MMT_Content_master_v3_matlab_Plugins_MMT_Source_MMT_Public_MMTPIDController_h_12_RPC_WRAPPERS \
	MMT_Content_master_v3_matlab_Plugins_MMT_Source_MMT_Public_MMTPIDController_h_12_INCLASS \
	MMT_Content_master_v3_matlab_Plugins_MMT_Source_MMT_Public_MMTPIDController_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MMT_Content_master_v3_matlab_Plugins_MMT_Source_MMT_Public_MMTPIDController_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MMT_Content_master_v3_matlab_Plugins_MMT_Source_MMT_Public_MMTPIDController_h_12_PRIVATE_PROPERTY_OFFSET \
	MMT_Content_master_v3_matlab_Plugins_MMT_Source_MMT_Public_MMTPIDController_h_12_SPARSE_DATA \
	MMT_Content_master_v3_matlab_Plugins_MMT_Source_MMT_Public_MMTPIDController_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	MMT_Content_master_v3_matlab_Plugins_MMT_Source_MMT_Public_MMTPIDController_h_12_INCLASS_NO_PURE_DECLS \
	MMT_Content_master_v3_matlab_Plugins_MMT_Source_MMT_Public_MMTPIDController_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MMT_API UClass* StaticClass<class UMMTPIDController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MMT_Content_master_v3_matlab_Plugins_MMT_Source_MMT_Public_MMTPIDController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
