// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MMT/Public/MMTTrackAnimationComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMMTTrackAnimationComponent() {}
// Cross Module References
	MMT_API UClass* Z_Construct_UClass_UMMTTrackAnimationComponent_NoRegister();
	MMT_API UClass* Z_Construct_UClass_UMMTTrackAnimationComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_MMT();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	MMT_API UScriptStruct* Z_Construct_UScriptStruct_FTrackSplinePointAnimatedStruct();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USplineComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UMMTTrackAnimationComponent::execGetTrackAngularPosition)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetTrackAngularPosition();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMMTTrackAnimationComponent::execGetSecondaryTreadsTransformArray)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FTransform>*)Z_Param__Result=P_THIS->GetSecondaryTreadsTransformArray();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMMTTrackAnimationComponent::execGetTreadsTransformArray)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FTransform>*)Z_Param__Result=P_THIS->GetTreadsTransformArray();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMMTTrackAnimationComponent::execBuildTrackMeshAndSpline)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BuildTrackMeshAndSpline();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMMTTrackAnimationComponent::execUpdateTrackAnimation)
	{
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_DeltaTime);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_TreadAngularPosition);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_TrackPartsAngularPosition);
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_TrackPartsRotator);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateTrackAnimation(Z_Param_Out_DeltaTime,Z_Param_Out_TreadAngularPosition,Z_Param_Out_TrackPartsAngularPosition,Z_Param_Out_TrackPartsRotator);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMMTTrackAnimationComponent::execSetTrackPartsAngularVelocity)
	{
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_AngularVelocity);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTrackPartsAngularVelocity(Z_Param_Out_AngularVelocity);
		P_NATIVE_END;
	}
	void UMMTTrackAnimationComponent::StaticRegisterNativesUMMTTrackAnimationComponent()
	{
		UClass* Class = UMMTTrackAnimationComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BuildTrackMeshAndSpline", &UMMTTrackAnimationComponent::execBuildTrackMeshAndSpline },
			{ "GetSecondaryTreadsTransformArray", &UMMTTrackAnimationComponent::execGetSecondaryTreadsTransformArray },
			{ "GetTrackAngularPosition", &UMMTTrackAnimationComponent::execGetTrackAngularPosition },
			{ "GetTreadsTransformArray", &UMMTTrackAnimationComponent::execGetTreadsTransformArray },
			{ "SetTrackPartsAngularVelocity", &UMMTTrackAnimationComponent::execSetTrackPartsAngularVelocity },
			{ "UpdateTrackAnimation", &UMMTTrackAnimationComponent::execUpdateTrackAnimation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMMTTrackAnimationComponent_BuildTrackMeshAndSpline_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMMTTrackAnimationComponent_BuildTrackMeshAndSpline_Statics::Function_MetaDataParams[] = {
		{ "Category", "MMT Track Animation Component" },
		{ "Comment", "/**\n\x09*\x09""Call from BP constructor to set track spline component into default state and add tread instances to Treads Instanced Mesh component.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MMTTrackAnimationComponent.h" },
		{ "ToolTip", "Call from BP constructor to set track spline component into default state and add tread instances to Treads Instanced Mesh component." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMMTTrackAnimationComponent_BuildTrackMeshAndSpline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMMTTrackAnimationComponent, nullptr, "BuildTrackMeshAndSpline", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMMTTrackAnimationComponent_BuildTrackMeshAndSpline_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMMTTrackAnimationComponent_BuildTrackMeshAndSpline_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMMTTrackAnimationComponent_BuildTrackMeshAndSpline()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMMTTrackAnimationComponent_BuildTrackMeshAndSpline_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMMTTrackAnimationComponent_GetSecondaryTreadsTransformArray_Statics
	{
		struct MMTTrackAnimationComponent_eventGetSecondaryTreadsTransformArray_Parms
		{
			TArray<FTransform> ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMMTTrackAnimationComponent_GetSecondaryTreadsTransformArray_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMMTTrackAnimationComponent_GetSecondaryTreadsTransformArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MMTTrackAnimationComponent_eventGetSecondaryTreadsTransformArray_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMMTTrackAnimationComponent_GetSecondaryTreadsTransformArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMMTTrackAnimationComponent_GetSecondaryTreadsTransformArray_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMMTTrackAnimationComponent_GetSecondaryTreadsTransformArray_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMMTTrackAnimationComponent_GetSecondaryTreadsTransformArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "MMT Track Animation Component" },
		{ "Comment", "/**\n\x09*\x09Retrieve array of local space transforms of secondary treads, to be used for custom rendering of treads or any other purpose\n\x09*/" },
		{ "ModuleRelativePath", "Public/MMTTrackAnimationComponent.h" },
		{ "ToolTip", "Retrieve array of local space transforms of secondary treads, to be used for custom rendering of treads or any other purpose" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMMTTrackAnimationComponent_GetSecondaryTreadsTransformArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMMTTrackAnimationComponent, nullptr, "GetSecondaryTreadsTransformArray", nullptr, nullptr, sizeof(MMTTrackAnimationComponent_eventGetSecondaryTreadsTransformArray_Parms), Z_Construct_UFunction_UMMTTrackAnimationComponent_GetSecondaryTreadsTransformArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMMTTrackAnimationComponent_GetSecondaryTreadsTransformArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMMTTrackAnimationComponent_GetSecondaryTreadsTransformArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMMTTrackAnimationComponent_GetSecondaryTreadsTransformArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMMTTrackAnimationComponent_GetSecondaryTreadsTransformArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMMTTrackAnimationComponent_GetSecondaryTreadsTransformArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMMTTrackAnimationComponent_GetTrackAngularPosition_Statics
	{
		struct MMTTrackAnimationComponent_eventGetTrackAngularPosition_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMMTTrackAnimationComponent_GetTrackAngularPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MMTTrackAnimationComponent_eventGetTrackAngularPosition_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMMTTrackAnimationComponent_GetTrackAngularPosition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMMTTrackAnimationComponent_GetTrackAngularPosition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMMTTrackAnimationComponent_GetTrackAngularPosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "MMT Track Animation Component" },
		{ "Comment", "/**\n\x09*\x09Retrieve angular distance traveled by the track around sprocket in degrees. Think about it as a rope wrapped around the cylinder multiple times but we measure its length not in meters but number of times its wrapped around cylinder.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MMTTrackAnimationComponent.h" },
		{ "ToolTip", "Retrieve angular distance traveled by the track around sprocket in degrees. Think about it as a rope wrapped around the cylinder multiple times but we measure its length not in meters but number of times its wrapped around cylinder." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMMTTrackAnimationComponent_GetTrackAngularPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMMTTrackAnimationComponent, nullptr, "GetTrackAngularPosition", nullptr, nullptr, sizeof(MMTTrackAnimationComponent_eventGetTrackAngularPosition_Parms), Z_Construct_UFunction_UMMTTrackAnimationComponent_GetTrackAngularPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMMTTrackAnimationComponent_GetTrackAngularPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMMTTrackAnimationComponent_GetTrackAngularPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMMTTrackAnimationComponent_GetTrackAngularPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMMTTrackAnimationComponent_GetTrackAngularPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMMTTrackAnimationComponent_GetTrackAngularPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMMTTrackAnimationComponent_GetTreadsTransformArray_Statics
	{
		struct MMTTrackAnimationComponent_eventGetTreadsTransformArray_Parms
		{
			TArray<FTransform> ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMMTTrackAnimationComponent_GetTreadsTransformArray_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMMTTrackAnimationComponent_GetTreadsTransformArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MMTTrackAnimationComponent_eventGetTreadsTransformArray_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMMTTrackAnimationComponent_GetTreadsTransformArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMMTTrackAnimationComponent_GetTreadsTransformArray_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMMTTrackAnimationComponent_GetTreadsTransformArray_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMMTTrackAnimationComponent_GetTreadsTransformArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "MMT Track Animation Component" },
		{ "Comment", "/**\n\x09*\x09Retrieve array of local space transforms of treads, to be used for custom rendering of treads or any other purpose\n\x09*/" },
		{ "ModuleRelativePath", "Public/MMTTrackAnimationComponent.h" },
		{ "ToolTip", "Retrieve array of local space transforms of treads, to be used for custom rendering of treads or any other purpose" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMMTTrackAnimationComponent_GetTreadsTransformArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMMTTrackAnimationComponent, nullptr, "GetTreadsTransformArray", nullptr, nullptr, sizeof(MMTTrackAnimationComponent_eventGetTreadsTransformArray_Parms), Z_Construct_UFunction_UMMTTrackAnimationComponent_GetTreadsTransformArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMMTTrackAnimationComponent_GetTreadsTransformArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMMTTrackAnimationComponent_GetTreadsTransformArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMMTTrackAnimationComponent_GetTreadsTransformArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMMTTrackAnimationComponent_GetTreadsTransformArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMMTTrackAnimationComponent_GetTreadsTransformArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMMTTrackAnimationComponent_SetTrackPartsAngularVelocity_Statics
	{
		struct MMTTrackAnimationComponent_eventSetTrackPartsAngularVelocity_Parms
		{
			float AngularVelocity;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AngularVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AngularVelocity;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMMTTrackAnimationComponent_SetTrackPartsAngularVelocity_Statics::NewProp_AngularVelocity_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMMTTrackAnimationComponent_SetTrackPartsAngularVelocity_Statics::NewProp_AngularVelocity = { "AngularVelocity", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MMTTrackAnimationComponent_eventSetTrackPartsAngularVelocity_Parms, AngularVelocity), METADATA_PARAMS(Z_Construct_UFunction_UMMTTrackAnimationComponent_SetTrackPartsAngularVelocity_Statics::NewProp_AngularVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMMTTrackAnimationComponent_SetTrackPartsAngularVelocity_Statics::NewProp_AngularVelocity_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMMTTrackAnimationComponent_SetTrackPartsAngularVelocity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMMTTrackAnimationComponent_SetTrackPartsAngularVelocity_Statics::NewProp_AngularVelocity,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMMTTrackAnimationComponent_SetTrackPartsAngularVelocity_Statics::Function_MetaDataParams[] = {
		{ "Category", "MMT Track Animation Component" },
		{ "Comment", "/**\n\x09*\x09Sets new angular and linear velocity of the sprocket, idlers, roadwheels and treads\n\x09*\x09@param AngularVelocity \x09\x09used to rotate sprockets, idlers and roadwheel meshes.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MMTTrackAnimationComponent.h" },
		{ "ToolTip", "Sets new angular and linear velocity of the sprocket, idlers, roadwheels and treads\n@param AngularVelocity          used to rotate sprockets, idlers and roadwheel meshes." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMMTTrackAnimationComponent_SetTrackPartsAngularVelocity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMMTTrackAnimationComponent, nullptr, "SetTrackPartsAngularVelocity", nullptr, nullptr, sizeof(MMTTrackAnimationComponent_eventSetTrackPartsAngularVelocity_Parms), Z_Construct_UFunction_UMMTTrackAnimationComponent_SetTrackPartsAngularVelocity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMMTTrackAnimationComponent_SetTrackPartsAngularVelocity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMMTTrackAnimationComponent_SetTrackPartsAngularVelocity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMMTTrackAnimationComponent_SetTrackPartsAngularVelocity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMMTTrackAnimationComponent_SetTrackPartsAngularVelocity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMMTTrackAnimationComponent_SetTrackPartsAngularVelocity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMMTTrackAnimationComponent_UpdateTrackAnimation_Statics
	{
		struct MMTTrackAnimationComponent_eventUpdateTrackAnimation_Parms
		{
			float DeltaTime;
			float TreadAngularPosition;
			float TrackPartsAngularPosition;
			FRotator TrackPartsRotator;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeltaTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TreadAngularPosition;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TrackPartsAngularPosition;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TrackPartsRotator;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMMTTrackAnimationComponent_UpdateTrackAnimation_Statics::NewProp_DeltaTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMMTTrackAnimationComponent_UpdateTrackAnimation_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MMTTrackAnimationComponent_eventUpdateTrackAnimation_Parms, DeltaTime), METADATA_PARAMS(Z_Construct_UFunction_UMMTTrackAnimationComponent_UpdateTrackAnimation_Statics::NewProp_DeltaTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMMTTrackAnimationComponent_UpdateTrackAnimation_Statics::NewProp_DeltaTime_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMMTTrackAnimationComponent_UpdateTrackAnimation_Statics::NewProp_TreadAngularPosition = { "TreadAngularPosition", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MMTTrackAnimationComponent_eventUpdateTrackAnimation_Parms, TreadAngularPosition), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMMTTrackAnimationComponent_UpdateTrackAnimation_Statics::NewProp_TrackPartsAngularPosition = { "TrackPartsAngularPosition", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MMTTrackAnimationComponent_eventUpdateTrackAnimation_Parms, TrackPartsAngularPosition), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMMTTrackAnimationComponent_UpdateTrackAnimation_Statics::NewProp_TrackPartsRotator = { "TrackPartsRotator", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MMTTrackAnimationComponent_eventUpdateTrackAnimation_Parms, TrackPartsRotator), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMMTTrackAnimationComponent_UpdateTrackAnimation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMMTTrackAnimationComponent_UpdateTrackAnimation_Statics::NewProp_DeltaTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMMTTrackAnimationComponent_UpdateTrackAnimation_Statics::NewProp_TreadAngularPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMMTTrackAnimationComponent_UpdateTrackAnimation_Statics::NewProp_TrackPartsAngularPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMMTTrackAnimationComponent_UpdateTrackAnimation_Statics::NewProp_TrackPartsRotator,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMMTTrackAnimationComponent_UpdateTrackAnimation_Statics::Function_MetaDataParams[] = {
		{ "Category", "MMT Track Animation Component" },
		{ "Comment", "/**\n\x09*\x09Updates animation of track elements. Should be called on each tick for maximum fidelity. Call less frequently for LODs.\n\x09*\x09@param DeltaTime\x09\x09\x09\x09\x09\x09\x09""Delta time\n\x09*\x09@return TreadAngularPosition\x09\x09\x09\x09""Angular distance traveled by the track around track in degrees. Think about it as a rope wrapped around the cylinder multiple times but we measure its length not in meters but number of times we wrapped it around cylinder.\n\x09*\x09@return TrackPartsAngularPosition\x09\x09\x09Pitch of the sprocket and other parts such as idler or road-wheels.\n\x09*\x09@return TrackPartsRotator\x09\x09\x09\x09\x09Rotator of the sprocket and other parts such as idler or road-wheels.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MMTTrackAnimationComponent.h" },
		{ "ToolTip", "Updates animation of track elements. Should be called on each tick for maximum fidelity. Call less frequently for LODs.\n@param DeltaTime                                                        Delta time\n@return TreadAngularPosition                            Angular distance traveled by the track around track in degrees. Think about it as a rope wrapped around the cylinder multiple times but we measure its length not in meters but number of times we wrapped it around cylinder.\n@return TrackPartsAngularPosition                       Pitch of the sprocket and other parts such as idler or road-wheels.\n@return TrackPartsRotator                                       Rotator of the sprocket and other parts such as idler or road-wheels." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMMTTrackAnimationComponent_UpdateTrackAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMMTTrackAnimationComponent, nullptr, "UpdateTrackAnimation", nullptr, nullptr, sizeof(MMTTrackAnimationComponent_eventUpdateTrackAnimation_Parms), Z_Construct_UFunction_UMMTTrackAnimationComponent_UpdateTrackAnimation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMMTTrackAnimationComponent_UpdateTrackAnimation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMMTTrackAnimationComponent_UpdateTrackAnimation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMMTTrackAnimationComponent_UpdateTrackAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMMTTrackAnimationComponent_UpdateTrackAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMMTTrackAnimationComponent_UpdateTrackAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMMTTrackAnimationComponent_NoRegister()
	{
		return UMMTTrackAnimationComponent::StaticClass();
	}
	struct Z_Construct_UClass_UMMTTrackAnimationComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SprocketsIdlersRoadwheelsNames_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SprocketsIdlersRoadwheelsNames_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SprocketsIdlersRoadwheelsNames;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrackSplineComponentName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TrackSplineComponentName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TreadsInstancedMeshComponentName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TreadsInstancedMeshComponentName;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AnimatedTrackSplinePoints_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimatedTrackSplinePoints_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AnimatedTrackSplinePoints;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TreadsOnSide_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TreadsOnSide;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFlipAnimation_MetaData[];
#endif
		static void NewProp_bFlipAnimation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFlipAnimation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AngleBetweenSprocketTeeth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AngleBetweenSprocketTeeth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAnimationLagCompensation_MetaData[];
#endif
		static void NewProp_bAnimationLagCompensation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAnimationLagCompensation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTwoPartsTrack_MetaData[];
#endif
		static void NewProp_bTwoPartsTrack_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTwoPartsTrack;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecondTrackPartOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SecondTrackPartOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecondTreadsInstancedMeshComponentName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SecondTreadsInstancedMeshComponentName;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TrackSplinePointLocations_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrackSplinePointLocations_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TrackSplinePointLocations;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TrackSplinePointTangents_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrackSplinePointTangents_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TrackSplinePointTangents;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDebugMode_MetaData[];
#endif
		static void NewProp_bDebugMode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDebugMode;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SprocketsIdlersRoadwheelsComponents_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SprocketsIdlersRoadwheelsComponents_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SprocketsIdlersRoadwheelsComponents;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrackSplineComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TrackSplineComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TreadsInstancedMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TreadsInstancedMeshComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecondTreadsInstancedMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SecondTreadsInstancedMeshComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrackPartsAngularVelocityDegrees_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TrackPartsAngularVelocityDegrees;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TreadFractionalTravel_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TreadFractionalTravel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PartsRotationDegrees_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PartsRotationDegrees;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TreadOffsetCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_TreadOffsetCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PartsOffsetCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_PartsOffsetCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumberOfFullOffsets_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_NumberOfFullOffsets;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TreadsTransforms_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TreadsTransforms_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TreadsTransforms;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SecondaryTreadsTransforms_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecondaryTreadsTransforms_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SecondaryTreadsTransforms;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TreadAllignedTransformPreviousUpdate_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TreadAllignedTransformPreviousUpdate_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TreadAllignedTransformPreviousUpdate;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SecondaryTreadAllignedTransformPreviousUpdate_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecondaryTreadAllignedTransformPreviousUpdate_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SecondaryTreadAllignedTransformPreviousUpdate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMMTTrackAnimationComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_MMT,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMMTTrackAnimationComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMMTTrackAnimationComponent_BuildTrackMeshAndSpline, "BuildTrackMeshAndSpline" }, // 205441472
		{ &Z_Construct_UFunction_UMMTTrackAnimationComponent_GetSecondaryTreadsTransformArray, "GetSecondaryTreadsTransformArray" }, // 2209220323
		{ &Z_Construct_UFunction_UMMTTrackAnimationComponent_GetTrackAngularPosition, "GetTrackAngularPosition" }, // 2266381740
		{ &Z_Construct_UFunction_UMMTTrackAnimationComponent_GetTreadsTransformArray, "GetTreadsTransformArray" }, // 586898984
		{ &Z_Construct_UFunction_UMMTTrackAnimationComponent_SetTrackPartsAngularVelocity, "SetTrackPartsAngularVelocity" }, // 2994833974
		{ &Z_Construct_UFunction_UMMTTrackAnimationComponent_UpdateTrackAnimation, "UpdateTrackAnimation" }, // 1450406769
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMMTTrackAnimationComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "MMT" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "MMTTrackAnimationComponent.h" },
		{ "ModuleRelativePath", "Public/MMTTrackAnimationComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMMTTrackAnimationComponent_Statics::NewProp_SprocketsIdlersRoadwheelsNames_Inner = { "SprocketsIdlersRoadwheelsNames", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMMTTrackAnimationComponent_Statics::NewProp_SprocketsIdlersRoadwheelsNames_MetaData[] = {
		{ "Category", "Animation Settings" },
		{ "ModuleRelativePath", "Public/MMTTrackAnimationComponent.h" },
		{ "ToolTip", "Array of sprockets, idlers and roadwheels to be animated" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMMTTrackAnimationComponent_Statics::NewProp_SprocketsIdlersRoadwheelsNames = { "SprocketsIdlersRoadwheelsNames", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMMTTrackAnimationComponent, SprocketsIdlersRoadwheelsNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMMTTrackAnimationComponent_Statics::NewProp_SprocketsIdlersRoadwheelsNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMMTTrackAnimationComponent_Statics::NewProp_SprocketsIdlersRoadwheelsNames_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMMTTrackAnimationComponent_Statics::NewProp_TrackSplineComponentName_MetaData[] = {
		{ "Category", "Animation Settings" },
		{ "ModuleRelativePath", "Public/MMTTrackAnimationComponent.h" },
		{ "ToolTip", "Spline component that defines path of the track" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMMTTrackAnimationComponent_Statics::NewProp_TrackSplineComponentName = { "TrackSplineComponentName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMMTTrackAnimationComponent, TrackSplineComponentName), METADATA_PARAMS(Z_Construct_UClass_UMMTTrackAnimationComponent_Statics::NewProp_TrackSplineComponentName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMMTTrackAnimationComponent_Statics::NewProp_TrackSplineComponentName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMMTTrackAnimationComponent_Statics::NewProp_TreadsInstancedMeshComponentName_MetaData[] = {
		{ "Category", "Animation Settings" },
		{ "ModuleRelativePath", "Public/MMTTrackAnimationComponent.h" },
		{ "ToolTip", "Instanced mesh component for rendering treads. Set to 'none' if you want to render treads on your own. For example, using multiple ISMs or using completely different method. UpdateTrackAnimation function updates array of local space transforms for each tread which you can get using GetTreadsTransformArray function" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMMTTrackAnimationComponent_Statics::NewProp_TreadsInstancedMeshComponentName = { "TreadsInstancedMeshComponentName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMMTTrackAnimationComponent, TreadsInstancedMeshComponentName), METADATA_PARAMS(Z_Construct_UClass_UMMTTrackAnimationComponent_Statics::NewProp_TreadsInstancedMeshComponentName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMMTTrackAnimationComponent_Statics::NewProp_TreadsInstancedMeshComponentName_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMMTTrackAnimationComponent_Statics::NewProp_AnimatedTrackSplinePoints_Inner = { "AnimatedTrackSplinePoints", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTrackSplinePointAnimatedStruct, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMMTTrackAnimationComponent_Statics::NewProp_AnimatedTrackSplinePoints_MetaData[] = {
		{ "Category", "Animation Settings" },
		{ "ModuleRelativePath", "Public/MMTTrackAnimationComponent.h" },
		{ "ToolTip", "Array of spline point indexes and references for their animation" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMMTTrackAnimationComponent_Statics::NewProp_AnimatedTrackSplinePoints = { "AnimatedTrackSplinePoints", nullptr, (EPropertyFlags)0x0010008000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMMTTrackAnimationComponent, AnimatedTrackSplinePoints), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMMTTrackAnimationComponent_Statics::NewProp_AnimatedTrackSplinePoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMMTTrackAnimationComponent_Statics::NewProp_AnimatedTrackSplinePoints_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMMTTrackAnimationComponent_Statics::NewProp_TreadsOnSide_MetaData[] = {
		{ "Category", "Animation Settings" },
		{ "ModuleRelativePath", "Public/MMTTrackAnimationComponent.h" },
		{ "ToolTip", "Amount of treads on this track" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMMTTrackAnimationComponent_Statics::NewProp_TreadsOnSide = { "TreadsOnSide", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMMTTrackAnimationComponent, TreadsOnSide), METADATA_PARAMS(Z_Construct_UClass_UMMTTrackAnimationComponent_Statics::NewProp_TreadsOnSide_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMMTTrackAnimationComponent_Statics::NewProp_TreadsOnSide_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMMTTrackAnimationComponent_Statics::NewProp_bFlipAnimation_MetaData[] = {
		{ "Category", "Animation Settings" },
		{ "ModuleRelativePath", "Public/MMTTrackAnimationComponent.h" },
		{ "ToolTip", "Plays animation in reverse if meshes are rotated 180 degrees" },
	};
#endif
	void Z_Construct_UClass_UMMTTrackAnimationComponent_Statics::NewProp_bFlipAnimation_SetBit(void* Obj)
	{
		((UMMTTrackAnimationComponent*)Obj)->bFlipAnimation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMMTTrackAnimationComponent_Statics::NewProp_bFlipAnimation = { "bFlipAnimation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMMTTrackAnimationComponent), &Z_Construct_UClass_UMMTTrackAnimationComponent_Statics::NewProp_bFlipAnimation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMMTTrackAnimationComponent_Statics::NewProp_bFlipAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMMTTrackAnimationComponent_Statics::NewProp_bFlipAnimation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMMTTrackAnimationComponent_Statics::NewProp_AngleBetweenSprocketTeeth_MetaData[] = {
		{ "Category", "Animation Settings" },
		{ "ModuleRelativePath", "Public/MMTTrackAnimationComponent.h" },
		{ "ToolTip", "Angle between sprocket's teeth. Can be calculated as 360 / total number of teeth" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMMTTrackAnimationComponent_Statics::NewProp_AngleBetweenSprocketTeeth = { "AngleBetweenSprocketTeeth", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMMTTrackAnimationComponent, AngleBetweenSprocketTeeth), METADATA_PARAMS(Z_Construct_UClass_UMMTTrackAnimationComponent_Statics::NewProp_AngleBetweenSprocketTeeth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMMTTrackAnimationComponent_Statics::NewProp_AngleBetweenSprocketTeeth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMMTTrackAnimationComponent_Statics::NewProp_bAnimationLagCompensation_MetaData[] = {
		{ "Category", "Animation Settings" },
		{ "ModuleRelativePath", "Public/MMTTrackAnimationComponent.h" },
		{ "ToolTip", "Skeletal mesh rotation lags by one frame, to solve this we can update track instances movement with one frame lag. Output of the UpdateTrackAnimation function doesn't compensate for lag but GetTreadsTransformArray returns compensated position of tread instances." },
	};
#endif
	void Z_Construct_UClass_UMMTTrackAnimationComponent_Statics::NewProp_bAnimationLagCompensation_SetBit(void* Obj)
	{
		((UMMTTrackAnimationComponent*)Obj)->bAnimationLagCompensation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMMTTrackAnimationComponent_Statics::NewProp_bAnimationLagCompensation = { "bAnimationLagCompensation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMMTTrackAnimationComponent), &Z_Construct_UClass_UMMTTrackAnimationComponent_Statics::NewProp_bAnimationLagCompensation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMMTTrackAnimationComponent_Statics::NewProp_bAnimationLagCompensation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMMTTrackAnimationComponent_Statics::NewProp_bAnimationLagCompensation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMMTTrackAnimationComponent_Statics::NewProp_bTwoPartsTrack_MetaData[] = {
		{ "Category", "Animation Settings" },
		{ "ModuleRelativePath", "Public/MMTTrackAnimationComponent.h" },
		{ "ToolTip", "Set to true if pivot of your tread mesh is aligned with front connection pin. This approach provides more precise alignment of the treads. When false it's assumed that pivot is in middle of the tread mesh." },
	};
#endif
	void Z_Construct_UClass_UMMTTrackAnimationComponent_Statics::NewProp_bTwoPartsTrack_SetBit(void* Obj)
	{
		((UMMTTrackAnimationComponent*)Obj)->bTwoPartsTrack = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMMTTrackAnimationComponent_Statics::NewProp_bTwoPartsTrack = { "bTwoPartsTrack", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMMTTrackAnimationComponent), &Z_Construct_UClass_UMMTTrackAnimationComponent_Statics::NewProp_bTwoPartsTrack_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMMTTrackAnimationComponent_Statics::NewProp_bTwoPartsTrack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMMTTrackAnimationComponent_Statics::NewProp_bTwoPartsTrack_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMMTTrackAnimationComponent_Statics::NewProp_SecondTrackPartOffset_MetaData[] = {
		{ "Category", "Animation Settings" },
		{ "EditCondition", "bTwoPartsTrack" },
		{ "ModuleRelativePath", "Public/MMTTrackAnimationComponent.h" },
		{ "ToolTip", "Offset of the second tread part from pivot point of the first" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMMTTrackAnimationComponent_Statics::NewProp_SecondTrackPartOffset = { "SecondTrackPartOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMMTTrackAnimationComponent, SecondTrackPartOffset), METADATA_PARAMS(Z_Construct_UClass_UMMTTrackAnimationComponent_Statics::NewProp_SecondTrackPartOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMMTTrackAnimationComponent_Statics::NewProp_SecondTrackPartOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMMTTrackAnimationComponent_Statics::NewProp_SecondTreadsInstancedMeshComponentName_MetaData[] = {
		{ "Category", "Animation Settings" },
		{ "EditCondition", "bTwoPartsTrack" },
		{ "ModuleRelativePath", "Public/MMTTrackAnimationComponent.h" },
		{ "ToolTip", "Instanced mesh component for rendering secondary tread elements. Set to 'none' if you want to render treads on your own. For example, using multiple ISMs or using completely different method. UpdateTrackAnimation function updates array of local space transforms for each tread which you can get using GetTreadsTransformArray function" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMMTTrackAnimationComponent_Statics::NewProp_SecondTreadsInstancedMeshComponentName = { "SecondTreadsInstancedMeshComponentName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMMTTrackAnimationComponent, SecondTreadsInstancedMeshComponentName), METADATA_PARAMS(Z_Construct_UClass_UMMTTrackAnimationComponent_Statics::NewProp_SecondTreadsInstancedMeshComponentName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMMTTrackAnimationComponent_Statics::NewProp_SecondTreadsInstancedMeshComponentName_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMMTTrackAnimationComponent_Statics::NewProp_TrackSplinePointLocations_Inner = { "TrackSplinePointLocations", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMMTTrackAnimationComponent_Statics::NewProp_TrackSplinePointLocations_MetaData[] = {
		{ "Category", "Animation Settings" },
		{ "ModuleRelativePath", "Public/MMTTrackAnimationComponent.h" },
		{ "ToolTip", "(Optional) Array of default location for track spline control points in case you don't prepared spline in editor" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMMTTrackAnimationComponent_Statics::NewProp_TrackSplinePointLocations = { "TrackSplinePointLocations", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMMTTrackAnimationComponent, TrackSplinePointLocations), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMMTTrackAnimationComponent_Statics::NewProp_TrackSplinePointLocations_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMMTTrackAnimationComponent_Statics::NewProp_TrackSplinePointLocations_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMMTTrackAnimationComponent_Statics::NewProp_TrackSplinePointTangents_Inner = { "TrackSplinePointTangents", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMMTTrackAnimationComponent_Statics::NewProp_TrackSplinePointTangents_MetaData[] = {
		{ "Category", "Animation Settings" },
		{ "ModuleRelativePath", "Public/MMTTrackAnimationComponent.h" },
		{ "ToolTip", "(Optional) Array of default tangents for track spline control points in case you don't prepared spline in editor" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMMTTrackAnimationComponent_Statics::NewProp_TrackSplinePointTangents = { "TrackSplinePointTangents", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMMTTrackAnimationComponent, TrackSplinePointTangents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMMTTrackAnimationComponent_Statics::NewProp_TrackSplinePointTangents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMMTTrackAnimationComponent_Statics::NewProp_TrackSplinePointTangents_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMMTTrackAnimationComponent_Statics::NewProp_bDebugMode_MetaData[] = {
		{ "Category", "Animation Settings" },
		{ "ModuleRelativePath", "Public/MMTTrackAnimationComponent.h" },
		{ "ToolTip", "Enable on screen debug output" },
	};
#endif
	void Z_Construct_UClass_UMMTTrackAnimationComponent_Statics::NewProp_bDebugMode_SetBit(void* Obj)
	{
		((UMMTTrackAnimationComponent*)Obj)->bDebugMode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMMTTrackAnimationComponent_Statics::NewProp_bDebugMode = { "bDebugMode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMMTTrackAnimationComponent), &Z_Construct_UClass_UMMTTrackAnimationComponent_Statics::NewProp_bDebugMode_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMMTTrackAnimationComponent_Statics::NewProp_bDebugMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMMTTrackAnimationComponent_Statics::NewProp_bDebugMode_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMMTTrackAnimationComponent_Statics::NewProp_SprocketsIdlersRoadwheelsComponents_Inner = { "SprocketsIdlersRoadwheelsComponents", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMeshComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMMTTrackAnimationComponent_Statics::NewProp_SprocketsIdlersRoadwheelsComponents_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MMTTrackAnimationComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMMTTrackAnimationComponent_Statics::NewProp_SprocketsIdlersRoadwheelsComponents = { "SprocketsIdlersRoadwheelsComponents", nullptr, (EPropertyFlags)0x0040008000000008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMMTTrackAnimationComponent, SprocketsIdlersRoadwheelsComponents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMMTTrackAnimationComponent_Statics::NewProp_SprocketsIdlersRoadwheelsComponents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMMTTrackAnimationComponent_Statics::NewProp_SprocketsIdlersRoadwheelsComponents_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMMTTrackAnimationComponent_Statics::NewProp_TrackSplineComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MMTTrackAnimationComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMMTTrackAnimationComponent_Statics::NewProp_TrackSplineComponent = { "TrackSplineComponent", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMMTTrackAnimationComponent, TrackSplineComponent), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMMTTrackAnimationComponent_Statics::NewProp_TrackSplineComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMMTTrackAnimationComponent_Statics::NewProp_TrackSplineComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMMTTrackAnimationComponent_Statics::NewProp_TreadsInstancedMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MMTTrackAnimationComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMMTTrackAnimationComponent_Statics::NewProp_TreadsInstancedMeshComponent = { "TreadsInstancedMeshComponent", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMMTTrackAnimationComponent, TreadsInstancedMeshComponent), Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMMTTrackAnimationComponent_Statics::NewProp_TreadsInstancedMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMMTTrackAnimationComponent_Statics::NewProp_TreadsInstancedMeshComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMMTTrackAnimationComponent_Statics::NewProp_SecondTreadsInstancedMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MMTTrackAnimationComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMMTTrackAnimationComponent_Statics::NewProp_SecondTreadsInstancedMeshComponent = { "SecondTreadsInstancedMeshComponent", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMMTTrackAnimationComponent, SecondTreadsInstancedMeshComponent), Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMMTTrackAnimationComponent_Statics::NewProp_SecondTreadsInstancedMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMMTTrackAnimationComponent_Statics::NewProp_SecondTreadsInstancedMeshComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMMTTrackAnimationComponent_Statics::NewProp_TrackPartsAngularVelocityDegrees_MetaData[] = {
		{ "ModuleRelativePath", "Public/MMTTrackAnimationComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMMTTrackAnimationComponent_Statics::NewProp_TrackPartsAngularVelocityDegrees = { "TrackPartsAngularVelocityDegrees", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMMTTrackAnimationComponent, TrackPartsAngularVelocityDegrees), METADATA_PARAMS(Z_Construct_UClass_UMMTTrackAnimationComponent_Statics::NewProp_TrackPartsAngularVelocityDegrees_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMMTTrackAnimationComponent_Statics::NewProp_TrackPartsAngularVelocityDegrees_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMMTTrackAnimationComponent_Statics::NewProp_TreadFractionalTravel_MetaData[] = {
		{ "ModuleRelativePath", "Public/MMTTrackAnimationComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMMTTrackAnimationComponent_Statics::NewProp_TreadFractionalTravel = { "TreadFractionalTravel", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMMTTrackAnimationComponent, TreadFractionalTravel), METADATA_PARAMS(Z_Construct_UClass_UMMTTrackAnimationComponent_Statics::NewProp_TreadFractionalTravel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMMTTrackAnimationComponent_Statics::NewProp_TreadFractionalTravel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMMTTrackAnimationComponent_Statics::NewProp_PartsRotationDegrees_MetaData[] = {
		{ "ModuleRelativePath", "Public/MMTTrackAnimationComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMMTTrackAnimationComponent_Statics::NewProp_PartsRotationDegrees = { "PartsRotationDegrees", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMMTTrackAnimationComponent, PartsRotationDegrees), METADATA_PARAMS(Z_Construct_UClass_UMMTTrackAnimationComponent_Statics::NewProp_PartsRotationDegrees_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMMTTrackAnimationComponent_Statics::NewProp_PartsRotationDegrees_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMMTTrackAnimationComponent_Statics::NewProp_TreadOffsetCount_MetaData[] = {
		{ "ModuleRelativePath", "Public/MMTTrackAnimationComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UMMTTrackAnimationComponent_Statics::NewProp_TreadOffsetCount = { "TreadOffsetCount", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMMTTrackAnimationComponent, TreadOffsetCount), METADATA_PARAMS(Z_Construct_UClass_UMMTTrackAnimationComponent_Statics::NewProp_TreadOffsetCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMMTTrackAnimationComponent_Statics::NewProp_TreadOffsetCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMMTTrackAnimationComponent_Statics::NewProp_PartsOffsetCount_MetaData[] = {
		{ "ModuleRelativePath", "Public/MMTTrackAnimationComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UMMTTrackAnimationComponent_Statics::NewProp_PartsOffsetCount = { "PartsOffsetCount", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMMTTrackAnimationComponent, PartsOffsetCount), METADATA_PARAMS(Z_Construct_UClass_UMMTTrackAnimationComponent_Statics::NewProp_PartsOffsetCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMMTTrackAnimationComponent_Statics::NewProp_PartsOffsetCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMMTTrackAnimationComponent_Statics::NewProp_NumberOfFullOffsets_MetaData[] = {
		{ "ModuleRelativePath", "Public/MMTTrackAnimationComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UMMTTrackAnimationComponent_Statics::NewProp_NumberOfFullOffsets = { "NumberOfFullOffsets", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMMTTrackAnimationComponent, NumberOfFullOffsets), METADATA_PARAMS(Z_Construct_UClass_UMMTTrackAnimationComponent_Statics::NewProp_NumberOfFullOffsets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMMTTrackAnimationComponent_Statics::NewProp_NumberOfFullOffsets_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMMTTrackAnimationComponent_Statics::NewProp_TreadsTransforms_Inner = { "TreadsTransforms", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMMTTrackAnimationComponent_Statics::NewProp_TreadsTransforms_MetaData[] = {
		{ "ModuleRelativePath", "Public/MMTTrackAnimationComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMMTTrackAnimationComponent_Statics::NewProp_TreadsTransforms = { "TreadsTransforms", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMMTTrackAnimationComponent, TreadsTransforms), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMMTTrackAnimationComponent_Statics::NewProp_TreadsTransforms_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMMTTrackAnimationComponent_Statics::NewProp_TreadsTransforms_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMMTTrackAnimationComponent_Statics::NewProp_SecondaryTreadsTransforms_Inner = { "SecondaryTreadsTransforms", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMMTTrackAnimationComponent_Statics::NewProp_SecondaryTreadsTransforms_MetaData[] = {
		{ "ModuleRelativePath", "Public/MMTTrackAnimationComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMMTTrackAnimationComponent_Statics::NewProp_SecondaryTreadsTransforms = { "SecondaryTreadsTransforms", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMMTTrackAnimationComponent, SecondaryTreadsTransforms), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMMTTrackAnimationComponent_Statics::NewProp_SecondaryTreadsTransforms_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMMTTrackAnimationComponent_Statics::NewProp_SecondaryTreadsTransforms_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMMTTrackAnimationComponent_Statics::NewProp_TreadAllignedTransformPreviousUpdate_Inner = { "TreadAllignedTransformPreviousUpdate", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMMTTrackAnimationComponent_Statics::NewProp_TreadAllignedTransformPreviousUpdate_MetaData[] = {
		{ "ModuleRelativePath", "Public/MMTTrackAnimationComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMMTTrackAnimationComponent_Statics::NewProp_TreadAllignedTransformPreviousUpdate = { "TreadAllignedTransformPreviousUpdate", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMMTTrackAnimationComponent, TreadAllignedTransformPreviousUpdate), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMMTTrackAnimationComponent_Statics::NewProp_TreadAllignedTransformPreviousUpdate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMMTTrackAnimationComponent_Statics::NewProp_TreadAllignedTransformPreviousUpdate_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMMTTrackAnimationComponent_Statics::NewProp_SecondaryTreadAllignedTransformPreviousUpdate_Inner = { "SecondaryTreadAllignedTransformPreviousUpdate", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMMTTrackAnimationComponent_Statics::NewProp_SecondaryTreadAllignedTransformPreviousUpdate_MetaData[] = {
		{ "ModuleRelativePath", "Public/MMTTrackAnimationComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMMTTrackAnimationComponent_Statics::NewProp_SecondaryTreadAllignedTransformPreviousUpdate = { "SecondaryTreadAllignedTransformPreviousUpdate", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMMTTrackAnimationComponent, SecondaryTreadAllignedTransformPreviousUpdate), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMMTTrackAnimationComponent_Statics::NewProp_SecondaryTreadAllignedTransformPreviousUpdate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMMTTrackAnimationComponent_Statics::NewProp_SecondaryTreadAllignedTransformPreviousUpdate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMMTTrackAnimationComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMMTTrackAnimationComponent_Statics::NewProp_SprocketsIdlersRoadwheelsNames_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMMTTrackAnimationComponent_Statics::NewProp_SprocketsIdlersRoadwheelsNames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMMTTrackAnimationComponent_Statics::NewProp_TrackSplineComponentName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMMTTrackAnimationComponent_Statics::NewProp_TreadsInstancedMeshComponentName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMMTTrackAnimationComponent_Statics::NewProp_AnimatedTrackSplinePoints_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMMTTrackAnimationComponent_Statics::NewProp_AnimatedTrackSplinePoints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMMTTrackAnimationComponent_Statics::NewProp_TreadsOnSide,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMMTTrackAnimationComponent_Statics::NewProp_bFlipAnimation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMMTTrackAnimationComponent_Statics::NewProp_AngleBetweenSprocketTeeth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMMTTrackAnimationComponent_Statics::NewProp_bAnimationLagCompensation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMMTTrackAnimationComponent_Statics::NewProp_bTwoPartsTrack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMMTTrackAnimationComponent_Statics::NewProp_SecondTrackPartOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMMTTrackAnimationComponent_Statics::NewProp_SecondTreadsInstancedMeshComponentName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMMTTrackAnimationComponent_Statics::NewProp_TrackSplinePointLocations_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMMTTrackAnimationComponent_Statics::NewProp_TrackSplinePointLocations,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMMTTrackAnimationComponent_Statics::NewProp_TrackSplinePointTangents_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMMTTrackAnimationComponent_Statics::NewProp_TrackSplinePointTangents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMMTTrackAnimationComponent_Statics::NewProp_bDebugMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMMTTrackAnimationComponent_Statics::NewProp_SprocketsIdlersRoadwheelsComponents_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMMTTrackAnimationComponent_Statics::NewProp_SprocketsIdlersRoadwheelsComponents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMMTTrackAnimationComponent_Statics::NewProp_TrackSplineComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMMTTrackAnimationComponent_Statics::NewProp_TreadsInstancedMeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMMTTrackAnimationComponent_Statics::NewProp_SecondTreadsInstancedMeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMMTTrackAnimationComponent_Statics::NewProp_TrackPartsAngularVelocityDegrees,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMMTTrackAnimationComponent_Statics::NewProp_TreadFractionalTravel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMMTTrackAnimationComponent_Statics::NewProp_PartsRotationDegrees,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMMTTrackAnimationComponent_Statics::NewProp_TreadOffsetCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMMTTrackAnimationComponent_Statics::NewProp_PartsOffsetCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMMTTrackAnimationComponent_Statics::NewProp_NumberOfFullOffsets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMMTTrackAnimationComponent_Statics::NewProp_TreadsTransforms_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMMTTrackAnimationComponent_Statics::NewProp_TreadsTransforms,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMMTTrackAnimationComponent_Statics::NewProp_SecondaryTreadsTransforms_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMMTTrackAnimationComponent_Statics::NewProp_SecondaryTreadsTransforms,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMMTTrackAnimationComponent_Statics::NewProp_TreadAllignedTransformPreviousUpdate_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMMTTrackAnimationComponent_Statics::NewProp_TreadAllignedTransformPreviousUpdate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMMTTrackAnimationComponent_Statics::NewProp_SecondaryTreadAllignedTransformPreviousUpdate_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMMTTrackAnimationComponent_Statics::NewProp_SecondaryTreadAllignedTransformPreviousUpdate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMMTTrackAnimationComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMMTTrackAnimationComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMMTTrackAnimationComponent_Statics::ClassParams = {
		&UMMTTrackAnimationComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMMTTrackAnimationComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMMTTrackAnimationComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UMMTTrackAnimationComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMMTTrackAnimationComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMMTTrackAnimationComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMMTTrackAnimationComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMMTTrackAnimationComponent, 1081242698);
	template<> MMT_API UClass* StaticClass<UMMTTrackAnimationComponent>()
	{
		return UMMTTrackAnimationComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMMTTrackAnimationComponent(Z_Construct_UClass_UMMTTrackAnimationComponent, &UMMTTrackAnimationComponent::StaticClass, TEXT("/Script/MMT"), TEXT("UMMTTrackAnimationComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMMTTrackAnimationComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
