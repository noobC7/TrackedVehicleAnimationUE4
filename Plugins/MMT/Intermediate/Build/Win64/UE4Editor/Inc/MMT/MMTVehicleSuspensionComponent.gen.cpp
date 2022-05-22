// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MMT/Public/MMTVehicleSuspensionComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMMTVehicleSuspensionComponent() {}
// Cross Module References
	MMT_API UClass* Z_Construct_UClass_UMMTVehicleSuspensionComponent_NoRegister();
	MMT_API UClass* Z_Construct_UClass_UMMTVehicleSuspensionComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_MMT();
	ENGINE_API UClass* Z_Construct_UClass_UMeshComponent_NoRegister();
	MMT_API UScriptStruct* Z_Construct_UScriptStruct_FTracksConfig();
	MMT_API UScriptStruct* Z_Construct_UScriptStruct_FWheelsConfig();
	MMT_API UScriptStruct* Z_Construct_UScriptStruct_FPassiveSurfaceConfig();
	MMT_API UClass* Z_Construct_UClass_UMMTTrack_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UMMTVehicleSuspensionComponent::execUpdatePhysics)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdatePhysics(Z_Param_DeltaTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMMTVehicleSuspensionComponent::execGetEffectedComponentMeshReference)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMeshComponent**)Z_Param__Result=P_THIS->GetEffectedComponentMeshReference();
		P_NATIVE_END;
	}
	void UMMTVehicleSuspensionComponent::StaticRegisterNativesUMMTVehicleSuspensionComponent()
	{
		UClass* Class = UMMTVehicleSuspensionComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetEffectedComponentMeshReference", &UMMTVehicleSuspensionComponent::execGetEffectedComponentMeshReference },
			{ "UpdatePhysics", &UMMTVehicleSuspensionComponent::execUpdatePhysics },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMMTVehicleSuspensionComponent_GetEffectedComponentMeshReference_Statics
	{
		struct MMTVehicleSuspensionComponent_eventGetEffectedComponentMeshReference_Parms
		{
			UMeshComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMMTVehicleSuspensionComponent_GetEffectedComponentMeshReference_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMMTVehicleSuspensionComponent_GetEffectedComponentMeshReference_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MMTVehicleSuspensionComponent_eventGetEffectedComponentMeshReference_Parms, ReturnValue), Z_Construct_UClass_UMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMMTVehicleSuspensionComponent_GetEffectedComponentMeshReference_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMMTVehicleSuspensionComponent_GetEffectedComponentMeshReference_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMMTVehicleSuspensionComponent_GetEffectedComponentMeshReference_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMMTVehicleSuspensionComponent_GetEffectedComponentMeshReference_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMMTVehicleSuspensionComponent_GetEffectedComponentMeshReference_Statics::Function_MetaDataParams[] = {
		{ "Category", "MMT Vehicle Suspension Component" },
		{ "ModuleRelativePath", "Public/MMTVehicleSuspensionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMMTVehicleSuspensionComponent_GetEffectedComponentMeshReference_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMMTVehicleSuspensionComponent, nullptr, "GetEffectedComponentMeshReference", nullptr, nullptr, sizeof(MMTVehicleSuspensionComponent_eventGetEffectedComponentMeshReference_Parms), Z_Construct_UFunction_UMMTVehicleSuspensionComponent_GetEffectedComponentMeshReference_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMMTVehicleSuspensionComponent_GetEffectedComponentMeshReference_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMMTVehicleSuspensionComponent_GetEffectedComponentMeshReference_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMMTVehicleSuspensionComponent_GetEffectedComponentMeshReference_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMMTVehicleSuspensionComponent_GetEffectedComponentMeshReference()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMMTVehicleSuspensionComponent_GetEffectedComponentMeshReference_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMMTVehicleSuspensionComponent_UpdatePhysics_Statics
	{
		struct MMTVehicleSuspensionComponent_eventUpdatePhysics_Parms
		{
			float DeltaTime;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMMTVehicleSuspensionComponent_UpdatePhysics_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MMTVehicleSuspensionComponent_eventUpdatePhysics_Parms, DeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMMTVehicleSuspensionComponent_UpdatePhysics_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMMTVehicleSuspensionComponent_UpdatePhysics_Statics::NewProp_DeltaTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMMTVehicleSuspensionComponent_UpdatePhysics_Statics::Function_MetaDataParams[] = {
		{ "Category", "MMT Vehicle Suspension Component" },
		{ "ModuleRelativePath", "Public/MMTVehicleSuspensionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMMTVehicleSuspensionComponent_UpdatePhysics_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMMTVehicleSuspensionComponent, nullptr, "UpdatePhysics", nullptr, nullptr, sizeof(MMTVehicleSuspensionComponent_eventUpdatePhysics_Parms), Z_Construct_UFunction_UMMTVehicleSuspensionComponent_UpdatePhysics_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMMTVehicleSuspensionComponent_UpdatePhysics_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMMTVehicleSuspensionComponent_UpdatePhysics_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMMTVehicleSuspensionComponent_UpdatePhysics_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMMTVehicleSuspensionComponent_UpdatePhysics()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMMTVehicleSuspensionComponent_UpdatePhysics_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMMTVehicleSuspensionComponent_NoRegister()
	{
		return UMMTVehicleSuspensionComponent::StaticClass();
	}
	struct Z_Construct_UClass_UMMTVehicleSuspensionComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDisabled_MetaData[];
#endif
		static void NewProp_bDisabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDebugMode_MetaData[];
#endif
		static void NewProp_bDebugMode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDebugMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EffectedComponentName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_EffectedComponentName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TracksConfiguration_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TracksConfiguration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WheelsConfiguration_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WheelsConfiguration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PassiveSurfacesConfiguration_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PassiveSurfacesConfiguration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EffectedComponentMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EffectedComponentMesh;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TrackCollection_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrackCollection_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TrackCollection;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMMTVehicleSuspensionComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_MMT,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMMTVehicleSuspensionComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMMTVehicleSuspensionComponent_GetEffectedComponentMeshReference, "GetEffectedComponentMeshReference" }, // 2352001387
		{ &Z_Construct_UFunction_UMMTVehicleSuspensionComponent_UpdatePhysics, "UpdatePhysics" }, // 590402711
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMMTVehicleSuspensionComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "MMTVehicleSuspensionComponent.h" },
		{ "ModuleRelativePath", "Public/MMTVehicleSuspensionComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMMTVehicleSuspensionComponent_Statics::NewProp_bDisabled_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/MMTVehicleSuspensionComponent.h" },
		{ "ToolTip", "Disables component from doing physics calculations and applying forces, useful for debugging" },
	};
#endif
	void Z_Construct_UClass_UMMTVehicleSuspensionComponent_Statics::NewProp_bDisabled_SetBit(void* Obj)
	{
		((UMMTVehicleSuspensionComponent*)Obj)->bDisabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMMTVehicleSuspensionComponent_Statics::NewProp_bDisabled = { "bDisabled", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMMTVehicleSuspensionComponent), &Z_Construct_UClass_UMMTVehicleSuspensionComponent_Statics::NewProp_bDisabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMMTVehicleSuspensionComponent_Statics::NewProp_bDisabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMMTVehicleSuspensionComponent_Statics::NewProp_bDisabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMMTVehicleSuspensionComponent_Statics::NewProp_bDebugMode_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/MMTVehicleSuspensionComponent.h" },
		{ "ToolTip", "Enable on screen debug output" },
	};
#endif
	void Z_Construct_UClass_UMMTVehicleSuspensionComponent_Statics::NewProp_bDebugMode_SetBit(void* Obj)
	{
		((UMMTVehicleSuspensionComponent*)Obj)->bDebugMode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMMTVehicleSuspensionComponent_Statics::NewProp_bDebugMode = { "bDebugMode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMMTVehicleSuspensionComponent), &Z_Construct_UClass_UMMTVehicleSuspensionComponent_Statics::NewProp_bDebugMode_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMMTVehicleSuspensionComponent_Statics::NewProp_bDebugMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMMTVehicleSuspensionComponent_Statics::NewProp_bDebugMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMMTVehicleSuspensionComponent_Statics::NewProp_EffectedComponentName_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/MMTVehicleSuspensionComponent.h" },
		{ "ToolTip", "Name of the mesh component that will receive forces, usually chassis/root component" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMMTVehicleSuspensionComponent_Statics::NewProp_EffectedComponentName = { "EffectedComponentName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMMTVehicleSuspensionComponent, EffectedComponentName), METADATA_PARAMS(Z_Construct_UClass_UMMTVehicleSuspensionComponent_Statics::NewProp_EffectedComponentName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMMTVehicleSuspensionComponent_Statics::NewProp_EffectedComponentName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMMTVehicleSuspensionComponent_Statics::NewProp_TracksConfiguration_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/MMTVehicleSuspensionComponent.h" },
		{ "ToolTip", "Set this up if vehicle needs caterpillar tracks" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMMTVehicleSuspensionComponent_Statics::NewProp_TracksConfiguration = { "TracksConfiguration", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMMTVehicleSuspensionComponent, TracksConfiguration), Z_Construct_UScriptStruct_FTracksConfig, METADATA_PARAMS(Z_Construct_UClass_UMMTVehicleSuspensionComponent_Statics::NewProp_TracksConfiguration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMMTVehicleSuspensionComponent_Statics::NewProp_TracksConfiguration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMMTVehicleSuspensionComponent_Statics::NewProp_WheelsConfiguration_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/MMTVehicleSuspensionComponent.h" },
		{ "ToolTip", "Set this up if vehicle needs wheels" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMMTVehicleSuspensionComponent_Statics::NewProp_WheelsConfiguration = { "WheelsConfiguration", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMMTVehicleSuspensionComponent, WheelsConfiguration), Z_Construct_UScriptStruct_FWheelsConfig, METADATA_PARAMS(Z_Construct_UClass_UMMTVehicleSuspensionComponent_Statics::NewProp_WheelsConfiguration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMMTVehicleSuspensionComponent_Statics::NewProp_WheelsConfiguration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMMTVehicleSuspensionComponent_Statics::NewProp_PassiveSurfacesConfiguration_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/MMTVehicleSuspensionComponent.h" },
		{ "ToolTip", "Set this up if vehicle needs surfaces such as ski" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMMTVehicleSuspensionComponent_Statics::NewProp_PassiveSurfacesConfiguration = { "PassiveSurfacesConfiguration", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMMTVehicleSuspensionComponent, PassiveSurfacesConfiguration), Z_Construct_UScriptStruct_FPassiveSurfaceConfig, METADATA_PARAMS(Z_Construct_UClass_UMMTVehicleSuspensionComponent_Statics::NewProp_PassiveSurfacesConfiguration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMMTVehicleSuspensionComponent_Statics::NewProp_PassiveSurfacesConfiguration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMMTVehicleSuspensionComponent_Statics::NewProp_EffectedComponentMesh_MetaData[] = {
		{ "Comment", "//Mesh reference that we will apply our suspension and traction forces too. \n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MMTVehicleSuspensionComponent.h" },
		{ "ToolTip", "Mesh reference that we will apply our suspension and traction forces too." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMMTVehicleSuspensionComponent_Statics::NewProp_EffectedComponentMesh = { "EffectedComponentMesh", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMMTVehicleSuspensionComponent, EffectedComponentMesh), Z_Construct_UClass_UMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMMTVehicleSuspensionComponent_Statics::NewProp_EffectedComponentMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMMTVehicleSuspensionComponent_Statics::NewProp_EffectedComponentMesh_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMMTVehicleSuspensionComponent_Statics::NewProp_TrackCollection_Inner = { "TrackCollection", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMMTTrack_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMMTVehicleSuspensionComponent_Statics::NewProp_TrackCollection_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MMTVehicleSuspensionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMMTVehicleSuspensionComponent_Statics::NewProp_TrackCollection = { "TrackCollection", nullptr, (EPropertyFlags)0x0040008000000008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMMTVehicleSuspensionComponent, TrackCollection), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMMTVehicleSuspensionComponent_Statics::NewProp_TrackCollection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMMTVehicleSuspensionComponent_Statics::NewProp_TrackCollection_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMMTVehicleSuspensionComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMMTVehicleSuspensionComponent_Statics::NewProp_bDisabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMMTVehicleSuspensionComponent_Statics::NewProp_bDebugMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMMTVehicleSuspensionComponent_Statics::NewProp_EffectedComponentName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMMTVehicleSuspensionComponent_Statics::NewProp_TracksConfiguration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMMTVehicleSuspensionComponent_Statics::NewProp_WheelsConfiguration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMMTVehicleSuspensionComponent_Statics::NewProp_PassiveSurfacesConfiguration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMMTVehicleSuspensionComponent_Statics::NewProp_EffectedComponentMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMMTVehicleSuspensionComponent_Statics::NewProp_TrackCollection_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMMTVehicleSuspensionComponent_Statics::NewProp_TrackCollection,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMMTVehicleSuspensionComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMMTVehicleSuspensionComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMMTVehicleSuspensionComponent_Statics::ClassParams = {
		&UMMTVehicleSuspensionComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMMTVehicleSuspensionComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMMTVehicleSuspensionComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UMMTVehicleSuspensionComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMMTVehicleSuspensionComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMMTVehicleSuspensionComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMMTVehicleSuspensionComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMMTVehicleSuspensionComponent, 1865588138);
	template<> MMT_API UClass* StaticClass<UMMTVehicleSuspensionComponent>()
	{
		return UMMTVehicleSuspensionComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMMTVehicleSuspensionComponent(Z_Construct_UClass_UMMTVehicleSuspensionComponent, &UMMTVehicleSuspensionComponent::StaticClass, TEXT("/Script/MMT"), TEXT("UMMTVehicleSuspensionComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMMTVehicleSuspensionComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
