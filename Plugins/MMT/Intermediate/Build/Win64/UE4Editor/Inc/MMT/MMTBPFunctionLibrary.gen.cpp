// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MMT/Public/MMTBPFunctionLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMMTBPFunctionLibrary() {}
// Cross Module References
	MMT_API UClass* Z_Construct_UClass_UMMTBPFunctionLibrary_NoRegister();
	MMT_API UClass* Z_Construct_UClass_UMMTBPFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_MMT();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USplineComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPhysicsConstraintComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UMMTBPFunctionLibrary::execCartesianToSpherical)
	{
		P_GET_STRUCT(FVector,Z_Param_inputUnitVector);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector2D*)Z_Param__Result=UMMTBPFunctionLibrary::CartesianToSpherical(Z_Param_inputUnitVector);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMMTBPFunctionLibrary::execSphericalToUnitCartesian)
	{
		P_GET_STRUCT(FVector2D,Z_Param_inputAngles);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=UMMTBPFunctionLibrary::SphericalToUnitCartesian(Z_Param_inputAngles);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMMTBPFunctionLibrary::execSetLinearBreakThreshold)
	{
		P_GET_OBJECT(UPhysicsConstraintComponent,Z_Param_Target);
		P_GET_PROPERTY(FFloatProperty,Z_Param_LinearBreakThreshold);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMMTBPFunctionLibrary::SetLinearBreakThreshold(Z_Param_Target,Z_Param_LinearBreakThreshold);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMMTBPFunctionLibrary::execGetMuFromFrictionElipse)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_VelocityDirectionNormalizedWS);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_ForwardVectorWS);
		P_GET_PROPERTY(FFloatProperty,Z_Param_MuXStatic);
		P_GET_PROPERTY(FFloatProperty,Z_Param_MuXKinetic);
		P_GET_PROPERTY(FFloatProperty,Z_Param_MuYStatic);
		P_GET_PROPERTY(FFloatProperty,Z_Param_MuYKinetic);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_MuStatic);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_MuKinetic);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMMTBPFunctionLibrary::GetMuFromFrictionElipse(Z_Param_Out_VelocityDirectionNormalizedWS,Z_Param_Out_ForwardVectorWS,Z_Param_MuXStatic,Z_Param_MuXKinetic,Z_Param_MuYStatic,Z_Param_MuYKinetic,Z_Param_Out_MuStatic,Z_Param_Out_MuKinetic);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMMTBPFunctionLibrary::execGetInstancedStaticMeshComponentReferenceByName)
	{
		P_GET_OBJECT(UActorComponent,Z_Param_Target);
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UInstancedStaticMeshComponent**)Z_Param__Result=UMMTBPFunctionLibrary::GetInstancedStaticMeshComponentReferenceByName(Z_Param_Target,Z_Param_Name);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMMTBPFunctionLibrary::execGetSplineComponentReferenceByName)
	{
		P_GET_OBJECT(UActorComponent,Z_Param_Target);
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USplineComponent**)Z_Param__Result=UMMTBPFunctionLibrary::GetSplineComponentReferenceByName(Z_Param_Target,Z_Param_Name);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMMTBPFunctionLibrary::execGetMeshComponentReferenceByName)
	{
		P_GET_OBJECT(UActorComponent,Z_Param_Target);
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMeshComponent**)Z_Param__Result=UMMTBPFunctionLibrary::GetMeshComponentReferenceByName(Z_Param_Target,Z_Param_Name);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMMTBPFunctionLibrary::execMMTSetInertiaTensor)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_Target);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_InertiaTensor);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMMTBPFunctionLibrary::MMTSetInertiaTensor(Z_Param_Target,Z_Param_Out_InertiaTensor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMMTBPFunctionLibrary::execMMTAddTorqueComponent)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_Target);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Torque);
		P_GET_UBOOL(Z_Param_bAccelChange);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMMTBPFunctionLibrary::MMTAddTorqueComponent(Z_Param_Target,Z_Param_Out_Torque,Z_Param_bAccelChange);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMMTBPFunctionLibrary::execMMTAddForceAtLocationComponent)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_Target);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Force);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Location);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMMTBPFunctionLibrary::MMTAddForceAtLocationComponent(Z_Param_Target,Z_Param_Out_Force,Z_Param_Out_Location);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMMTBPFunctionLibrary::execMMTAddForceComponent)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_Target);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Force);
		P_GET_UBOOL(Z_Param_bAccelChange);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMMTBPFunctionLibrary::MMTAddForceComponent(Z_Param_Target,Z_Param_Out_Force,Z_Param_bAccelChange);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMMTBPFunctionLibrary::execMMTGetTransformActor)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=UMMTBPFunctionLibrary::MMTGetTransformActor(Z_Param_Actor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMMTBPFunctionLibrary::execMMTSetTransformComponent)
	{
		P_GET_OBJECT(USceneComponent,Z_Param_Target);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_Transform);
		P_GET_UBOOL(Z_Param_bTeleport);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMMTBPFunctionLibrary::MMTSetTransformComponent(Z_Param_Target,Z_Param_Out_Transform,Z_Param_bTeleport);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMMTBPFunctionLibrary::execMMTGetTransformComponent)
	{
		P_GET_OBJECT(USceneComponent,Z_Param_Target);
		P_GET_PROPERTY(FNameProperty,Z_Param_InSocketName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=UMMTBPFunctionLibrary::MMTGetTransformComponent(Z_Param_Target,Z_Param_InSocketName);
		P_NATIVE_END;
	}
	void UMMTBPFunctionLibrary::StaticRegisterNativesUMMTBPFunctionLibrary()
	{
		UClass* Class = UMMTBPFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CartesianToSpherical", &UMMTBPFunctionLibrary::execCartesianToSpherical },
			{ "GetInstancedStaticMeshComponentReferenceByName", &UMMTBPFunctionLibrary::execGetInstancedStaticMeshComponentReferenceByName },
			{ "GetMeshComponentReferenceByName", &UMMTBPFunctionLibrary::execGetMeshComponentReferenceByName },
			{ "GetMuFromFrictionElipse", &UMMTBPFunctionLibrary::execGetMuFromFrictionElipse },
			{ "GetSplineComponentReferenceByName", &UMMTBPFunctionLibrary::execGetSplineComponentReferenceByName },
			{ "MMTAddForceAtLocationComponent", &UMMTBPFunctionLibrary::execMMTAddForceAtLocationComponent },
			{ "MMTAddForceComponent", &UMMTBPFunctionLibrary::execMMTAddForceComponent },
			{ "MMTAddTorqueComponent", &UMMTBPFunctionLibrary::execMMTAddTorqueComponent },
			{ "MMTGetTransformActor", &UMMTBPFunctionLibrary::execMMTGetTransformActor },
			{ "MMTGetTransformComponent", &UMMTBPFunctionLibrary::execMMTGetTransformComponent },
			{ "MMTSetInertiaTensor", &UMMTBPFunctionLibrary::execMMTSetInertiaTensor },
			{ "MMTSetTransformComponent", &UMMTBPFunctionLibrary::execMMTSetTransformComponent },
			{ "SetLinearBreakThreshold", &UMMTBPFunctionLibrary::execSetLinearBreakThreshold },
			{ "SphericalToUnitCartesian", &UMMTBPFunctionLibrary::execSphericalToUnitCartesian },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMMTBPFunctionLibrary_CartesianToSpherical_Statics
	{
		struct MMTBPFunctionLibrary_eventCartesianToSpherical_Parms
		{
			FVector inputUnitVector;
			FVector2D ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_inputUnitVector;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMMTBPFunctionLibrary_CartesianToSpherical_Statics::NewProp_inputUnitVector = { "inputUnitVector", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MMTBPFunctionLibrary_eventCartesianToSpherical_Parms, inputUnitVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMMTBPFunctionLibrary_CartesianToSpherical_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MMTBPFunctionLibrary_eventCartesianToSpherical_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMMTBPFunctionLibrary_CartesianToSpherical_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMMTBPFunctionLibrary_CartesianToSpherical_Statics::NewProp_inputUnitVector,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMMTBPFunctionLibrary_CartesianToSpherical_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMMTBPFunctionLibrary_CartesianToSpherical_Statics::Function_MetaDataParams[] = {
		{ "Category", "MMT Utility" },
		{ "Comment", "/**\n\x09*\x09""Converts from Unit Cartesian to Spherical\n\x09*\x09@param inputUnitVector\x09\x09""Cartesian coordinates\n\x09*\x09@return\x09\x09\x09\x09\x09\x09Spherical coordinates angles\n\x09*/" },
		{ "DisplayName", "Unit Cartesian to Spherical" },
		{ "ModuleRelativePath", "Public/MMTBPFunctionLibrary.h" },
		{ "ToolTip", "Converts from Unit Cartesian to Spherical\n@param inputUnitVector          Cartesian coordinates\n@return                                         Spherical coordinates angles" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMMTBPFunctionLibrary_CartesianToSpherical_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMMTBPFunctionLibrary, nullptr, "CartesianToSpherical", nullptr, nullptr, sizeof(MMTBPFunctionLibrary_eventCartesianToSpherical_Parms), Z_Construct_UFunction_UMMTBPFunctionLibrary_CartesianToSpherical_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMMTBPFunctionLibrary_CartesianToSpherical_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMMTBPFunctionLibrary_CartesianToSpherical_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMMTBPFunctionLibrary_CartesianToSpherical_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMMTBPFunctionLibrary_CartesianToSpherical()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMMTBPFunctionLibrary_CartesianToSpherical_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMMTBPFunctionLibrary_GetInstancedStaticMeshComponentReferenceByName_Statics
	{
		struct MMTBPFunctionLibrary_eventGetInstancedStaticMeshComponentReferenceByName_Parms
		{
			UActorComponent* Target;
			FString Name;
			UInstancedStaticMeshComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Target;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMMTBPFunctionLibrary_GetInstancedStaticMeshComponentReferenceByName_Statics::NewProp_Target_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMMTBPFunctionLibrary_GetInstancedStaticMeshComponentReferenceByName_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MMTBPFunctionLibrary_eventGetInstancedStaticMeshComponentReferenceByName_Parms, Target), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMMTBPFunctionLibrary_GetInstancedStaticMeshComponentReferenceByName_Statics::NewProp_Target_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMMTBPFunctionLibrary_GetInstancedStaticMeshComponentReferenceByName_Statics::NewProp_Target_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMMTBPFunctionLibrary_GetInstancedStaticMeshComponentReferenceByName_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MMTBPFunctionLibrary_eventGetInstancedStaticMeshComponentReferenceByName_Parms, Name), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMMTBPFunctionLibrary_GetInstancedStaticMeshComponentReferenceByName_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMMTBPFunctionLibrary_GetInstancedStaticMeshComponentReferenceByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MMTBPFunctionLibrary_eventGetInstancedStaticMeshComponentReferenceByName_Parms, ReturnValue), Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMMTBPFunctionLibrary_GetInstancedStaticMeshComponentReferenceByName_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMMTBPFunctionLibrary_GetInstancedStaticMeshComponentReferenceByName_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMMTBPFunctionLibrary_GetInstancedStaticMeshComponentReferenceByName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMMTBPFunctionLibrary_GetInstancedStaticMeshComponentReferenceByName_Statics::NewProp_Target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMMTBPFunctionLibrary_GetInstancedStaticMeshComponentReferenceByName_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMMTBPFunctionLibrary_GetInstancedStaticMeshComponentReferenceByName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMMTBPFunctionLibrary_GetInstancedStaticMeshComponentReferenceByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "MMT Utility" },
		{ "Comment", "/**\n\x09*\x09Returns reference to instanced static mesh component by the name of the component.\n\x09*\x09@param Target\x09\x09""Components reference that requests reference to mesh component\n\x09*\x09@param Name\x09\x09\x09Name of the spline component that needs to be found\n\x09*/" },
		{ "DisplayName", "MMT Get Instanced Static Mesh Component Reference by Name" },
		{ "ModuleRelativePath", "Public/MMTBPFunctionLibrary.h" },
		{ "ToolTip", "Returns reference to instanced static mesh component by the name of the component.\n@param Target           Components reference that requests reference to mesh component\n@param Name                     Name of the spline component that needs to be found" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMMTBPFunctionLibrary_GetInstancedStaticMeshComponentReferenceByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMMTBPFunctionLibrary, nullptr, "GetInstancedStaticMeshComponentReferenceByName", nullptr, nullptr, sizeof(MMTBPFunctionLibrary_eventGetInstancedStaticMeshComponentReferenceByName_Parms), Z_Construct_UFunction_UMMTBPFunctionLibrary_GetInstancedStaticMeshComponentReferenceByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMMTBPFunctionLibrary_GetInstancedStaticMeshComponentReferenceByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMMTBPFunctionLibrary_GetInstancedStaticMeshComponentReferenceByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMMTBPFunctionLibrary_GetInstancedStaticMeshComponentReferenceByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMMTBPFunctionLibrary_GetInstancedStaticMeshComponentReferenceByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMMTBPFunctionLibrary_GetInstancedStaticMeshComponentReferenceByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMMTBPFunctionLibrary_GetMeshComponentReferenceByName_Statics
	{
		struct MMTBPFunctionLibrary_eventGetMeshComponentReferenceByName_Parms
		{
			UActorComponent* Target;
			FString Name;
			UMeshComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Target;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMMTBPFunctionLibrary_GetMeshComponentReferenceByName_Statics::NewProp_Target_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMMTBPFunctionLibrary_GetMeshComponentReferenceByName_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MMTBPFunctionLibrary_eventGetMeshComponentReferenceByName_Parms, Target), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMMTBPFunctionLibrary_GetMeshComponentReferenceByName_Statics::NewProp_Target_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMMTBPFunctionLibrary_GetMeshComponentReferenceByName_Statics::NewProp_Target_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMMTBPFunctionLibrary_GetMeshComponentReferenceByName_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MMTBPFunctionLibrary_eventGetMeshComponentReferenceByName_Parms, Name), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMMTBPFunctionLibrary_GetMeshComponentReferenceByName_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMMTBPFunctionLibrary_GetMeshComponentReferenceByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MMTBPFunctionLibrary_eventGetMeshComponentReferenceByName_Parms, ReturnValue), Z_Construct_UClass_UMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMMTBPFunctionLibrary_GetMeshComponentReferenceByName_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMMTBPFunctionLibrary_GetMeshComponentReferenceByName_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMMTBPFunctionLibrary_GetMeshComponentReferenceByName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMMTBPFunctionLibrary_GetMeshComponentReferenceByName_Statics::NewProp_Target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMMTBPFunctionLibrary_GetMeshComponentReferenceByName_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMMTBPFunctionLibrary_GetMeshComponentReferenceByName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMMTBPFunctionLibrary_GetMeshComponentReferenceByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "MMT Utility" },
		{ "Comment", "/**\n\x09*\x09Returns reference to mesh component by the name of the component.\n\x09*\x09@param Target\x09\x09""Components reference that requests reference to mesh component\n\x09*\x09@param Name\x09\x09\x09Name of the mesh component that needs to be found\n\x09*/" },
		{ "DisplayName", "MMT Get Mesh Component Reference by Name" },
		{ "ModuleRelativePath", "Public/MMTBPFunctionLibrary.h" },
		{ "ToolTip", "Returns reference to mesh component by the name of the component.\n@param Target           Components reference that requests reference to mesh component\n@param Name                     Name of the mesh component that needs to be found" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMMTBPFunctionLibrary_GetMeshComponentReferenceByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMMTBPFunctionLibrary, nullptr, "GetMeshComponentReferenceByName", nullptr, nullptr, sizeof(MMTBPFunctionLibrary_eventGetMeshComponentReferenceByName_Parms), Z_Construct_UFunction_UMMTBPFunctionLibrary_GetMeshComponentReferenceByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMMTBPFunctionLibrary_GetMeshComponentReferenceByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMMTBPFunctionLibrary_GetMeshComponentReferenceByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMMTBPFunctionLibrary_GetMeshComponentReferenceByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMMTBPFunctionLibrary_GetMeshComponentReferenceByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMMTBPFunctionLibrary_GetMeshComponentReferenceByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMMTBPFunctionLibrary_GetMuFromFrictionElipse_Statics
	{
		struct MMTBPFunctionLibrary_eventGetMuFromFrictionElipse_Parms
		{
			FVector VelocityDirectionNormalizedWS;
			FVector ForwardVectorWS;
			float MuXStatic;
			float MuXKinetic;
			float MuYStatic;
			float MuYKinetic;
			float MuStatic;
			float MuKinetic;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VelocityDirectionNormalizedWS_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VelocityDirectionNormalizedWS;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForwardVectorWS_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ForwardVectorWS;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MuXStatic_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MuXStatic;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MuXKinetic_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MuXKinetic;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MuYStatic_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MuYStatic;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MuYKinetic_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MuYKinetic;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MuStatic;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MuKinetic;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMMTBPFunctionLibrary_GetMuFromFrictionElipse_Statics::NewProp_VelocityDirectionNormalizedWS_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMMTBPFunctionLibrary_GetMuFromFrictionElipse_Statics::NewProp_VelocityDirectionNormalizedWS = { "VelocityDirectionNormalizedWS", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MMTBPFunctionLibrary_eventGetMuFromFrictionElipse_Parms, VelocityDirectionNormalizedWS), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UMMTBPFunctionLibrary_GetMuFromFrictionElipse_Statics::NewProp_VelocityDirectionNormalizedWS_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMMTBPFunctionLibrary_GetMuFromFrictionElipse_Statics::NewProp_VelocityDirectionNormalizedWS_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMMTBPFunctionLibrary_GetMuFromFrictionElipse_Statics::NewProp_ForwardVectorWS_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMMTBPFunctionLibrary_GetMuFromFrictionElipse_Statics::NewProp_ForwardVectorWS = { "ForwardVectorWS", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MMTBPFunctionLibrary_eventGetMuFromFrictionElipse_Parms, ForwardVectorWS), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UMMTBPFunctionLibrary_GetMuFromFrictionElipse_Statics::NewProp_ForwardVectorWS_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMMTBPFunctionLibrary_GetMuFromFrictionElipse_Statics::NewProp_ForwardVectorWS_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMMTBPFunctionLibrary_GetMuFromFrictionElipse_Statics::NewProp_MuXStatic_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMMTBPFunctionLibrary_GetMuFromFrictionElipse_Statics::NewProp_MuXStatic = { "MuXStatic", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MMTBPFunctionLibrary_eventGetMuFromFrictionElipse_Parms, MuXStatic), METADATA_PARAMS(Z_Construct_UFunction_UMMTBPFunctionLibrary_GetMuFromFrictionElipse_Statics::NewProp_MuXStatic_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMMTBPFunctionLibrary_GetMuFromFrictionElipse_Statics::NewProp_MuXStatic_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMMTBPFunctionLibrary_GetMuFromFrictionElipse_Statics::NewProp_MuXKinetic_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMMTBPFunctionLibrary_GetMuFromFrictionElipse_Statics::NewProp_MuXKinetic = { "MuXKinetic", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MMTBPFunctionLibrary_eventGetMuFromFrictionElipse_Parms, MuXKinetic), METADATA_PARAMS(Z_Construct_UFunction_UMMTBPFunctionLibrary_GetMuFromFrictionElipse_Statics::NewProp_MuXKinetic_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMMTBPFunctionLibrary_GetMuFromFrictionElipse_Statics::NewProp_MuXKinetic_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMMTBPFunctionLibrary_GetMuFromFrictionElipse_Statics::NewProp_MuYStatic_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMMTBPFunctionLibrary_GetMuFromFrictionElipse_Statics::NewProp_MuYStatic = { "MuYStatic", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MMTBPFunctionLibrary_eventGetMuFromFrictionElipse_Parms, MuYStatic), METADATA_PARAMS(Z_Construct_UFunction_UMMTBPFunctionLibrary_GetMuFromFrictionElipse_Statics::NewProp_MuYStatic_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMMTBPFunctionLibrary_GetMuFromFrictionElipse_Statics::NewProp_MuYStatic_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMMTBPFunctionLibrary_GetMuFromFrictionElipse_Statics::NewProp_MuYKinetic_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMMTBPFunctionLibrary_GetMuFromFrictionElipse_Statics::NewProp_MuYKinetic = { "MuYKinetic", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MMTBPFunctionLibrary_eventGetMuFromFrictionElipse_Parms, MuYKinetic), METADATA_PARAMS(Z_Construct_UFunction_UMMTBPFunctionLibrary_GetMuFromFrictionElipse_Statics::NewProp_MuYKinetic_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMMTBPFunctionLibrary_GetMuFromFrictionElipse_Statics::NewProp_MuYKinetic_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMMTBPFunctionLibrary_GetMuFromFrictionElipse_Statics::NewProp_MuStatic = { "MuStatic", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MMTBPFunctionLibrary_eventGetMuFromFrictionElipse_Parms, MuStatic), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMMTBPFunctionLibrary_GetMuFromFrictionElipse_Statics::NewProp_MuKinetic = { "MuKinetic", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MMTBPFunctionLibrary_eventGetMuFromFrictionElipse_Parms, MuKinetic), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMMTBPFunctionLibrary_GetMuFromFrictionElipse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMMTBPFunctionLibrary_GetMuFromFrictionElipse_Statics::NewProp_VelocityDirectionNormalizedWS,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMMTBPFunctionLibrary_GetMuFromFrictionElipse_Statics::NewProp_ForwardVectorWS,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMMTBPFunctionLibrary_GetMuFromFrictionElipse_Statics::NewProp_MuXStatic,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMMTBPFunctionLibrary_GetMuFromFrictionElipse_Statics::NewProp_MuXKinetic,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMMTBPFunctionLibrary_GetMuFromFrictionElipse_Statics::NewProp_MuYStatic,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMMTBPFunctionLibrary_GetMuFromFrictionElipse_Statics::NewProp_MuYKinetic,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMMTBPFunctionLibrary_GetMuFromFrictionElipse_Statics::NewProp_MuStatic,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMMTBPFunctionLibrary_GetMuFromFrictionElipse_Statics::NewProp_MuKinetic,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMMTBPFunctionLibrary_GetMuFromFrictionElipse_Statics::Function_MetaDataParams[] = {
		{ "Category", "MMT Utility" },
		{ "Comment", "/**\n\x09*\x09Returns static and kinetic friction coefficients from friction ellipse in relation to direction of velocity vector\n\x09*\x09@param VelocityDirectionNormalizedWS\x09Normalized direction vector in world space for which friction coefficient need to be calculated\n\x09*\x09@param ForwardVectorWS\x09\x09\x09\x09\x09World space direction that defines direction of X axis of friction ellipse\n\x09*\x09@param MuXStatic\x09\x09\x09\x09Static friction coefficient in X axis\n\x09*\x09@param MuXKinetic\x09\x09\x09\x09Kinetic friction coefficient in X axis\n\x09*\x09@param MuYStatic\x09\x09\x09\x09Static friction coefficient in Y axis\n\x09*\x09@param MuYKinetic\x09\x09\x09\x09Kinetic friction coefficient in Y axis\n\x09*\x09@return\x09MuStatic\x09\x09\x09\x09""Calculated static friction coefficient\n\x09*\x09@return\x09MuKinetic\x09\x09\x09\x09""Calculated kinetic friction coefficient\n\x09*/" },
		{ "DisplayName", "MMT Get Friction Coefficients from Friction Ellipse" },
		{ "ModuleRelativePath", "Public/MMTBPFunctionLibrary.h" },
		{ "ToolTip", "Returns static and kinetic friction coefficients from friction ellipse in relation to direction of velocity vector\n@param VelocityDirectionNormalizedWS    Normalized direction vector in world space for which friction coefficient need to be calculated\n@param ForwardVectorWS                                  World space direction that defines direction of X axis of friction ellipse\n@param MuXStatic                                Static friction coefficient in X axis\n@param MuXKinetic                               Kinetic friction coefficient in X axis\n@param MuYStatic                                Static friction coefficient in Y axis\n@param MuYKinetic                               Kinetic friction coefficient in Y axis\n@return MuStatic                                Calculated static friction coefficient\n@return MuKinetic                               Calculated kinetic friction coefficient" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMMTBPFunctionLibrary_GetMuFromFrictionElipse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMMTBPFunctionLibrary, nullptr, "GetMuFromFrictionElipse", nullptr, nullptr, sizeof(MMTBPFunctionLibrary_eventGetMuFromFrictionElipse_Parms), Z_Construct_UFunction_UMMTBPFunctionLibrary_GetMuFromFrictionElipse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMMTBPFunctionLibrary_GetMuFromFrictionElipse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMMTBPFunctionLibrary_GetMuFromFrictionElipse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMMTBPFunctionLibrary_GetMuFromFrictionElipse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMMTBPFunctionLibrary_GetMuFromFrictionElipse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMMTBPFunctionLibrary_GetMuFromFrictionElipse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMMTBPFunctionLibrary_GetSplineComponentReferenceByName_Statics
	{
		struct MMTBPFunctionLibrary_eventGetSplineComponentReferenceByName_Parms
		{
			UActorComponent* Target;
			FString Name;
			USplineComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Target;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMMTBPFunctionLibrary_GetSplineComponentReferenceByName_Statics::NewProp_Target_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMMTBPFunctionLibrary_GetSplineComponentReferenceByName_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MMTBPFunctionLibrary_eventGetSplineComponentReferenceByName_Parms, Target), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMMTBPFunctionLibrary_GetSplineComponentReferenceByName_Statics::NewProp_Target_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMMTBPFunctionLibrary_GetSplineComponentReferenceByName_Statics::NewProp_Target_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMMTBPFunctionLibrary_GetSplineComponentReferenceByName_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MMTBPFunctionLibrary_eventGetSplineComponentReferenceByName_Parms, Name), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMMTBPFunctionLibrary_GetSplineComponentReferenceByName_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMMTBPFunctionLibrary_GetSplineComponentReferenceByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MMTBPFunctionLibrary_eventGetSplineComponentReferenceByName_Parms, ReturnValue), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMMTBPFunctionLibrary_GetSplineComponentReferenceByName_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMMTBPFunctionLibrary_GetSplineComponentReferenceByName_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMMTBPFunctionLibrary_GetSplineComponentReferenceByName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMMTBPFunctionLibrary_GetSplineComponentReferenceByName_Statics::NewProp_Target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMMTBPFunctionLibrary_GetSplineComponentReferenceByName_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMMTBPFunctionLibrary_GetSplineComponentReferenceByName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMMTBPFunctionLibrary_GetSplineComponentReferenceByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "MMT Utility" },
		{ "Comment", "/**\n\x09*\x09Returns reference to spline component by the name of the component.\n\x09*\x09@param Target\x09\x09""Components reference that requests reference to mesh component\n\x09*\x09@param Name\x09\x09\x09Name of the spline component that needs to be found\n\x09*/" },
		{ "DisplayName", "MMT Get Spline Component Reference by Name" },
		{ "ModuleRelativePath", "Public/MMTBPFunctionLibrary.h" },
		{ "ToolTip", "Returns reference to spline component by the name of the component.\n@param Target           Components reference that requests reference to mesh component\n@param Name                     Name of the spline component that needs to be found" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMMTBPFunctionLibrary_GetSplineComponentReferenceByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMMTBPFunctionLibrary, nullptr, "GetSplineComponentReferenceByName", nullptr, nullptr, sizeof(MMTBPFunctionLibrary_eventGetSplineComponentReferenceByName_Parms), Z_Construct_UFunction_UMMTBPFunctionLibrary_GetSplineComponentReferenceByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMMTBPFunctionLibrary_GetSplineComponentReferenceByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMMTBPFunctionLibrary_GetSplineComponentReferenceByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMMTBPFunctionLibrary_GetSplineComponentReferenceByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMMTBPFunctionLibrary_GetSplineComponentReferenceByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMMTBPFunctionLibrary_GetSplineComponentReferenceByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMMTBPFunctionLibrary_MMTAddForceAtLocationComponent_Statics
	{
		struct MMTBPFunctionLibrary_eventMMTAddForceAtLocationComponent_Parms
		{
			UPrimitiveComponent* Target;
			FVector Force;
			FVector Location;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Target;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Force_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Force;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMMTBPFunctionLibrary_MMTAddForceAtLocationComponent_Statics::NewProp_Target_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMMTBPFunctionLibrary_MMTAddForceAtLocationComponent_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MMTBPFunctionLibrary_eventMMTAddForceAtLocationComponent_Parms, Target), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMMTBPFunctionLibrary_MMTAddForceAtLocationComponent_Statics::NewProp_Target_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMMTBPFunctionLibrary_MMTAddForceAtLocationComponent_Statics::NewProp_Target_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMMTBPFunctionLibrary_MMTAddForceAtLocationComponent_Statics::NewProp_Force_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMMTBPFunctionLibrary_MMTAddForceAtLocationComponent_Statics::NewProp_Force = { "Force", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MMTBPFunctionLibrary_eventMMTAddForceAtLocationComponent_Parms, Force), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UMMTBPFunctionLibrary_MMTAddForceAtLocationComponent_Statics::NewProp_Force_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMMTBPFunctionLibrary_MMTAddForceAtLocationComponent_Statics::NewProp_Force_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMMTBPFunctionLibrary_MMTAddForceAtLocationComponent_Statics::NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMMTBPFunctionLibrary_MMTAddForceAtLocationComponent_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MMTBPFunctionLibrary_eventMMTAddForceAtLocationComponent_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UMMTBPFunctionLibrary_MMTAddForceAtLocationComponent_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMMTBPFunctionLibrary_MMTAddForceAtLocationComponent_Statics::NewProp_Location_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMMTBPFunctionLibrary_MMTAddForceAtLocationComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMMTBPFunctionLibrary_MMTAddForceAtLocationComponent_Statics::NewProp_Target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMMTBPFunctionLibrary_MMTAddForceAtLocationComponent_Statics::NewProp_Force,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMMTBPFunctionLibrary_MMTAddForceAtLocationComponent_Statics::NewProp_Location,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMMTBPFunctionLibrary_MMTAddForceAtLocationComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "MMT physics sub-stepping" },
		{ "Comment", "/**\n\x09*\x09""Add a force to a component at a particular location. Can apply force during physics sub-steps.\n\x09*\x09@param Target\x09\x09""Component's reference to apply force to\n\x09*\x09@param Force\x09\x09""Force vector to apply. Magnitude indicates strength of force.\n\x09*\x09@param Location\x09\x09Location to apply force, in world space.\n\x09*/" },
		{ "DisplayName", "MMT Add Force At Location -Comp" },
		{ "ModuleRelativePath", "Public/MMTBPFunctionLibrary.h" },
		{ "ToolTip", "Add a force to a component at a particular location. Can apply force during physics sub-steps.\n@param Target           Component's reference to apply force to\n@param Force            Force vector to apply. Magnitude indicates strength of force.\n@param Location         Location to apply force, in world space." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMMTBPFunctionLibrary_MMTAddForceAtLocationComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMMTBPFunctionLibrary, nullptr, "MMTAddForceAtLocationComponent", nullptr, nullptr, sizeof(MMTBPFunctionLibrary_eventMMTAddForceAtLocationComponent_Parms), Z_Construct_UFunction_UMMTBPFunctionLibrary_MMTAddForceAtLocationComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMMTBPFunctionLibrary_MMTAddForceAtLocationComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMMTBPFunctionLibrary_MMTAddForceAtLocationComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMMTBPFunctionLibrary_MMTAddForceAtLocationComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMMTBPFunctionLibrary_MMTAddForceAtLocationComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMMTBPFunctionLibrary_MMTAddForceAtLocationComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMMTBPFunctionLibrary_MMTAddForceComponent_Statics
	{
		struct MMTBPFunctionLibrary_eventMMTAddForceComponent_Parms
		{
			UPrimitiveComponent* Target;
			FVector Force;
			bool bAccelChange;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Target;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Force_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Force;
		static void NewProp_bAccelChange_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAccelChange;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMMTBPFunctionLibrary_MMTAddForceComponent_Statics::NewProp_Target_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMMTBPFunctionLibrary_MMTAddForceComponent_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MMTBPFunctionLibrary_eventMMTAddForceComponent_Parms, Target), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMMTBPFunctionLibrary_MMTAddForceComponent_Statics::NewProp_Target_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMMTBPFunctionLibrary_MMTAddForceComponent_Statics::NewProp_Target_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMMTBPFunctionLibrary_MMTAddForceComponent_Statics::NewProp_Force_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMMTBPFunctionLibrary_MMTAddForceComponent_Statics::NewProp_Force = { "Force", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MMTBPFunctionLibrary_eventMMTAddForceComponent_Parms, Force), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UMMTBPFunctionLibrary_MMTAddForceComponent_Statics::NewProp_Force_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMMTBPFunctionLibrary_MMTAddForceComponent_Statics::NewProp_Force_MetaData)) };
	void Z_Construct_UFunction_UMMTBPFunctionLibrary_MMTAddForceComponent_Statics::NewProp_bAccelChange_SetBit(void* Obj)
	{
		((MMTBPFunctionLibrary_eventMMTAddForceComponent_Parms*)Obj)->bAccelChange = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMMTBPFunctionLibrary_MMTAddForceComponent_Statics::NewProp_bAccelChange = { "bAccelChange", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MMTBPFunctionLibrary_eventMMTAddForceComponent_Parms), &Z_Construct_UFunction_UMMTBPFunctionLibrary_MMTAddForceComponent_Statics::NewProp_bAccelChange_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMMTBPFunctionLibrary_MMTAddForceComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMMTBPFunctionLibrary_MMTAddForceComponent_Statics::NewProp_Target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMMTBPFunctionLibrary_MMTAddForceComponent_Statics::NewProp_Force,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMMTBPFunctionLibrary_MMTAddForceComponent_Statics::NewProp_bAccelChange,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMMTBPFunctionLibrary_MMTAddForceComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "MMT physics sub-stepping" },
		{ "Comment", "/**\n\x09*\x09""Add a force to a component. Can apply force during physics sub-steps.\n\x09*\x09@param Target\x09\x09""Component's reference to apply force to\n\x09*\x09@param Force\x09\x09""Force vector to apply. Magnitude indicates strength of force.\n\x09*\x09@param bAccelChange If true, Force is taken as a change in acceleration instead of a physical force (i.e. mass will have no affect).\n\x09*/" },
		{ "DisplayName", "MMT Add Force -Comp" },
		{ "ModuleRelativePath", "Public/MMTBPFunctionLibrary.h" },
		{ "ToolTip", "Add a force to a component. Can apply force during physics sub-steps.\n@param Target           Component's reference to apply force to\n@param Force            Force vector to apply. Magnitude indicates strength of force.\n@param bAccelChange If true, Force is taken as a change in acceleration instead of a physical force (i.e. mass will have no affect)." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMMTBPFunctionLibrary_MMTAddForceComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMMTBPFunctionLibrary, nullptr, "MMTAddForceComponent", nullptr, nullptr, sizeof(MMTBPFunctionLibrary_eventMMTAddForceComponent_Parms), Z_Construct_UFunction_UMMTBPFunctionLibrary_MMTAddForceComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMMTBPFunctionLibrary_MMTAddForceComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMMTBPFunctionLibrary_MMTAddForceComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMMTBPFunctionLibrary_MMTAddForceComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMMTBPFunctionLibrary_MMTAddForceComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMMTBPFunctionLibrary_MMTAddForceComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMMTBPFunctionLibrary_MMTAddTorqueComponent_Statics
	{
		struct MMTBPFunctionLibrary_eventMMTAddTorqueComponent_Parms
		{
			UPrimitiveComponent* Target;
			FVector Torque;
			bool bAccelChange;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Target;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Torque_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Torque;
		static void NewProp_bAccelChange_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAccelChange;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMMTBPFunctionLibrary_MMTAddTorqueComponent_Statics::NewProp_Target_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMMTBPFunctionLibrary_MMTAddTorqueComponent_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MMTBPFunctionLibrary_eventMMTAddTorqueComponent_Parms, Target), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMMTBPFunctionLibrary_MMTAddTorqueComponent_Statics::NewProp_Target_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMMTBPFunctionLibrary_MMTAddTorqueComponent_Statics::NewProp_Target_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMMTBPFunctionLibrary_MMTAddTorqueComponent_Statics::NewProp_Torque_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMMTBPFunctionLibrary_MMTAddTorqueComponent_Statics::NewProp_Torque = { "Torque", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MMTBPFunctionLibrary_eventMMTAddTorqueComponent_Parms, Torque), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UMMTBPFunctionLibrary_MMTAddTorqueComponent_Statics::NewProp_Torque_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMMTBPFunctionLibrary_MMTAddTorqueComponent_Statics::NewProp_Torque_MetaData)) };
	void Z_Construct_UFunction_UMMTBPFunctionLibrary_MMTAddTorqueComponent_Statics::NewProp_bAccelChange_SetBit(void* Obj)
	{
		((MMTBPFunctionLibrary_eventMMTAddTorqueComponent_Parms*)Obj)->bAccelChange = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMMTBPFunctionLibrary_MMTAddTorqueComponent_Statics::NewProp_bAccelChange = { "bAccelChange", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MMTBPFunctionLibrary_eventMMTAddTorqueComponent_Parms), &Z_Construct_UFunction_UMMTBPFunctionLibrary_MMTAddTorqueComponent_Statics::NewProp_bAccelChange_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMMTBPFunctionLibrary_MMTAddTorqueComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMMTBPFunctionLibrary_MMTAddTorqueComponent_Statics::NewProp_Target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMMTBPFunctionLibrary_MMTAddTorqueComponent_Statics::NewProp_Torque,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMMTBPFunctionLibrary_MMTAddTorqueComponent_Statics::NewProp_bAccelChange,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMMTBPFunctionLibrary_MMTAddTorqueComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "MMT physics sub-stepping" },
		{ "Comment", "/**\n\x09*\x09""Add a torque to a component. Can apply torque during physics sub-steps.\n\x09*\x09@param Target\x09\x09""Component's reference to apply torque to\n\x09*\x09@param Torque\x09\x09""Force vector to apply. Magnitude indicates strength of force.\n\x09*\x09@param bAccelChange If true, Force is taken as a change in acceleration instead of a physical force (i.e. mass will have no affect).\n\x09*/" },
		{ "DisplayName", "MMT Add Torque -Comp" },
		{ "ModuleRelativePath", "Public/MMTBPFunctionLibrary.h" },
		{ "ToolTip", "Add a torque to a component. Can apply torque during physics sub-steps.\n@param Target           Component's reference to apply torque to\n@param Torque           Force vector to apply. Magnitude indicates strength of force.\n@param bAccelChange If true, Force is taken as a change in acceleration instead of a physical force (i.e. mass will have no affect)." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMMTBPFunctionLibrary_MMTAddTorqueComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMMTBPFunctionLibrary, nullptr, "MMTAddTorqueComponent", nullptr, nullptr, sizeof(MMTBPFunctionLibrary_eventMMTAddTorqueComponent_Parms), Z_Construct_UFunction_UMMTBPFunctionLibrary_MMTAddTorqueComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMMTBPFunctionLibrary_MMTAddTorqueComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMMTBPFunctionLibrary_MMTAddTorqueComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMMTBPFunctionLibrary_MMTAddTorqueComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMMTBPFunctionLibrary_MMTAddTorqueComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMMTBPFunctionLibrary_MMTAddTorqueComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMMTBPFunctionLibrary_MMTGetTransformActor_Statics
	{
		struct MMTBPFunctionLibrary_eventMMTGetTransformActor_Parms
		{
			AActor* Actor;
			FTransform ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMMTBPFunctionLibrary_MMTGetTransformActor_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MMTBPFunctionLibrary_eventMMTGetTransformActor_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMMTBPFunctionLibrary_MMTGetTransformActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MMTBPFunctionLibrary_eventMMTGetTransformActor_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMMTBPFunctionLibrary_MMTGetTransformActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMMTBPFunctionLibrary_MMTGetTransformActor_Statics::NewProp_Actor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMMTBPFunctionLibrary_MMTGetTransformActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMMTBPFunctionLibrary_MMTGetTransformActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "MMT physics sub-stepping" },
		{ "Comment", "/**\n\x09*\x09Get world-space actor's root component transform. BodyInstance is used to retrieve transform, its up-to date with physics sub-stepping.\n\x09*\x09@param Actor\x09""Actor's reference to get the transform for\n\x09*\x09@return\x09\x09\x09""Actor's root component transform in world space\n\x09*/" },
		{ "DisplayName", "MMT Get Transform -Actor" },
		{ "ModuleRelativePath", "Public/MMTBPFunctionLibrary.h" },
		{ "ToolTip", "Get world-space actor's root component transform. BodyInstance is used to retrieve transform, its up-to date with physics sub-stepping.\n@param Actor    Actor's reference to get the transform for\n@return                 Actor's root component transform in world space" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMMTBPFunctionLibrary_MMTGetTransformActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMMTBPFunctionLibrary, nullptr, "MMTGetTransformActor", nullptr, nullptr, sizeof(MMTBPFunctionLibrary_eventMMTGetTransformActor_Parms), Z_Construct_UFunction_UMMTBPFunctionLibrary_MMTGetTransformActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMMTBPFunctionLibrary_MMTGetTransformActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMMTBPFunctionLibrary_MMTGetTransformActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMMTBPFunctionLibrary_MMTGetTransformActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMMTBPFunctionLibrary_MMTGetTransformActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMMTBPFunctionLibrary_MMTGetTransformActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMMTBPFunctionLibrary_MMTGetTransformComponent_Statics
	{
		struct MMTBPFunctionLibrary_eventMMTGetTransformComponent_Parms
		{
			USceneComponent* Target;
			FName InSocketName;
			FTransform ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Target;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_InSocketName;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMMTBPFunctionLibrary_MMTGetTransformComponent_Statics::NewProp_Target_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMMTBPFunctionLibrary_MMTGetTransformComponent_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MMTBPFunctionLibrary_eventMMTGetTransformComponent_Parms, Target), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMMTBPFunctionLibrary_MMTGetTransformComponent_Statics::NewProp_Target_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMMTBPFunctionLibrary_MMTGetTransformComponent_Statics::NewProp_Target_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMMTBPFunctionLibrary_MMTGetTransformComponent_Statics::NewProp_InSocketName = { "InSocketName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MMTBPFunctionLibrary_eventMMTGetTransformComponent_Parms, InSocketName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMMTBPFunctionLibrary_MMTGetTransformComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MMTBPFunctionLibrary_eventMMTGetTransformComponent_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMMTBPFunctionLibrary_MMTGetTransformComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMMTBPFunctionLibrary_MMTGetTransformComponent_Statics::NewProp_Target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMMTBPFunctionLibrary_MMTGetTransformComponent_Statics::NewProp_InSocketName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMMTBPFunctionLibrary_MMTGetTransformComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMMTBPFunctionLibrary_MMTGetTransformComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "MMT physics sub-stepping" },
		{ "Comment", "/**\n\x09*\x09Get world-space component's transform. BodyInstance is used to retrieve transform, its up-to date with physics sub-stepping.\n\x09*\x09@param Target\x09""Component's reference to get the transform for\n\x09*\x09@param InSocketName\x09Optional socket name parameter. Will return socket transform, if socket not found returns component's transform\n\x09*\x09@return\x09\x09\x09""Component's or socket's transform in world space\n\x09*/" },
		{ "DisplayName", "MMT Get Transform -Comp" },
		{ "ModuleRelativePath", "Public/MMTBPFunctionLibrary.h" },
		{ "ToolTip", "Get world-space component's transform. BodyInstance is used to retrieve transform, its up-to date with physics sub-stepping.\n@param Target   Component's reference to get the transform for\n@param InSocketName     Optional socket name parameter. Will return socket transform, if socket not found returns component's transform\n@return                 Component's or socket's transform in world space" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMMTBPFunctionLibrary_MMTGetTransformComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMMTBPFunctionLibrary, nullptr, "MMTGetTransformComponent", nullptr, nullptr, sizeof(MMTBPFunctionLibrary_eventMMTGetTransformComponent_Parms), Z_Construct_UFunction_UMMTBPFunctionLibrary_MMTGetTransformComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMMTBPFunctionLibrary_MMTGetTransformComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMMTBPFunctionLibrary_MMTGetTransformComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMMTBPFunctionLibrary_MMTGetTransformComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMMTBPFunctionLibrary_MMTGetTransformComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMMTBPFunctionLibrary_MMTGetTransformComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMMTBPFunctionLibrary_MMTSetInertiaTensor_Statics
	{
		struct MMTBPFunctionLibrary_eventMMTSetInertiaTensor_Parms
		{
			UPrimitiveComponent* Target;
			FVector InertiaTensor;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Target;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InertiaTensor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InertiaTensor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMMTBPFunctionLibrary_MMTSetInertiaTensor_Statics::NewProp_Target_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMMTBPFunctionLibrary_MMTSetInertiaTensor_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MMTBPFunctionLibrary_eventMMTSetInertiaTensor_Parms, Target), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMMTBPFunctionLibrary_MMTSetInertiaTensor_Statics::NewProp_Target_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMMTBPFunctionLibrary_MMTSetInertiaTensor_Statics::NewProp_Target_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMMTBPFunctionLibrary_MMTSetInertiaTensor_Statics::NewProp_InertiaTensor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMMTBPFunctionLibrary_MMTSetInertiaTensor_Statics::NewProp_InertiaTensor = { "InertiaTensor", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MMTBPFunctionLibrary_eventMMTSetInertiaTensor_Parms, InertiaTensor), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UMMTBPFunctionLibrary_MMTSetInertiaTensor_Statics::NewProp_InertiaTensor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMMTBPFunctionLibrary_MMTSetInertiaTensor_Statics::NewProp_InertiaTensor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMMTBPFunctionLibrary_MMTSetInertiaTensor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMMTBPFunctionLibrary_MMTSetInertiaTensor_Statics::NewProp_Target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMMTBPFunctionLibrary_MMTSetInertiaTensor_Statics::NewProp_InertiaTensor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMMTBPFunctionLibrary_MMTSetInertiaTensor_Statics::Function_MetaDataParams[] = {
		{ "Category", "MMT physics sub-stepping" },
		{ "Comment", "/**\n\x09*\x09Sets inertia tensor on component.\n\x09*\x09@param Target\x09\x09""Component's reference to set inertia tensor\n\x09*\x09@param TensorVector\x09Inertia tensor vector\n\x09*/" },
		{ "DisplayName", "MMT Set Inertia Tensor -Comp" },
		{ "ModuleRelativePath", "Public/MMTBPFunctionLibrary.h" },
		{ "ToolTip", "Sets inertia tensor on component.\n@param Target           Component's reference to set inertia tensor\n@param TensorVector     Inertia tensor vector" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMMTBPFunctionLibrary_MMTSetInertiaTensor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMMTBPFunctionLibrary, nullptr, "MMTSetInertiaTensor", nullptr, nullptr, sizeof(MMTBPFunctionLibrary_eventMMTSetInertiaTensor_Parms), Z_Construct_UFunction_UMMTBPFunctionLibrary_MMTSetInertiaTensor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMMTBPFunctionLibrary_MMTSetInertiaTensor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMMTBPFunctionLibrary_MMTSetInertiaTensor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMMTBPFunctionLibrary_MMTSetInertiaTensor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMMTBPFunctionLibrary_MMTSetInertiaTensor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMMTBPFunctionLibrary_MMTSetInertiaTensor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMMTBPFunctionLibrary_MMTSetTransformComponent_Statics
	{
		struct MMTBPFunctionLibrary_eventMMTSetTransformComponent_Parms
		{
			USceneComponent* Target;
			FTransform Transform;
			bool bTeleport;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Target;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Transform;
		static void NewProp_bTeleport_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTeleport;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMMTBPFunctionLibrary_MMTSetTransformComponent_Statics::NewProp_Target_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMMTBPFunctionLibrary_MMTSetTransformComponent_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MMTBPFunctionLibrary_eventMMTSetTransformComponent_Parms, Target), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMMTBPFunctionLibrary_MMTSetTransformComponent_Statics::NewProp_Target_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMMTBPFunctionLibrary_MMTSetTransformComponent_Statics::NewProp_Target_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMMTBPFunctionLibrary_MMTSetTransformComponent_Statics::NewProp_Transform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMMTBPFunctionLibrary_MMTSetTransformComponent_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MMTBPFunctionLibrary_eventMMTSetTransformComponent_Parms, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UMMTBPFunctionLibrary_MMTSetTransformComponent_Statics::NewProp_Transform_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMMTBPFunctionLibrary_MMTSetTransformComponent_Statics::NewProp_Transform_MetaData)) };
	void Z_Construct_UFunction_UMMTBPFunctionLibrary_MMTSetTransformComponent_Statics::NewProp_bTeleport_SetBit(void* Obj)
	{
		((MMTBPFunctionLibrary_eventMMTSetTransformComponent_Parms*)Obj)->bTeleport = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMMTBPFunctionLibrary_MMTSetTransformComponent_Statics::NewProp_bTeleport = { "bTeleport", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MMTBPFunctionLibrary_eventMMTSetTransformComponent_Parms), &Z_Construct_UFunction_UMMTBPFunctionLibrary_MMTSetTransformComponent_Statics::NewProp_bTeleport_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMMTBPFunctionLibrary_MMTSetTransformComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMMTBPFunctionLibrary_MMTSetTransformComponent_Statics::NewProp_Target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMMTBPFunctionLibrary_MMTSetTransformComponent_Statics::NewProp_Transform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMMTBPFunctionLibrary_MMTSetTransformComponent_Statics::NewProp_bTeleport,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMMTBPFunctionLibrary_MMTSetTransformComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "MMT physics sub-stepping" },
		{ "Comment", "/**\n\x09*\x09Sets component's BodyInstance transform. To be used during sub-stepping to move/rotate PhysX bodies directly.\n\x09*\x09@param Target\x09""Component's reference to set transform for\n\x09*\x09@param bTeleport\x09\x09No velocity will be inferred, object is moved in instant\n\x09*\x09@param Transform\x09New transform to be set\n\x09*/" },
		{ "DisplayName", "MMT Set Transform -Comp" },
		{ "ModuleRelativePath", "Public/MMTBPFunctionLibrary.h" },
		{ "ToolTip", "Sets component's BodyInstance transform. To be used during sub-stepping to move/rotate PhysX bodies directly.\n@param Target   Component's reference to set transform for\n@param bTeleport                No velocity will be inferred, object is moved in instant\n@param Transform        New transform to be set" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMMTBPFunctionLibrary_MMTSetTransformComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMMTBPFunctionLibrary, nullptr, "MMTSetTransformComponent", nullptr, nullptr, sizeof(MMTBPFunctionLibrary_eventMMTSetTransformComponent_Parms), Z_Construct_UFunction_UMMTBPFunctionLibrary_MMTSetTransformComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMMTBPFunctionLibrary_MMTSetTransformComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMMTBPFunctionLibrary_MMTSetTransformComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMMTBPFunctionLibrary_MMTSetTransformComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMMTBPFunctionLibrary_MMTSetTransformComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMMTBPFunctionLibrary_MMTSetTransformComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMMTBPFunctionLibrary_SetLinearBreakThreshold_Statics
	{
		struct MMTBPFunctionLibrary_eventSetLinearBreakThreshold_Parms
		{
			UPhysicsConstraintComponent* Target;
			float LinearBreakThreshold;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Target;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LinearBreakThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LinearBreakThreshold;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMMTBPFunctionLibrary_SetLinearBreakThreshold_Statics::NewProp_Target_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMMTBPFunctionLibrary_SetLinearBreakThreshold_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MMTBPFunctionLibrary_eventSetLinearBreakThreshold_Parms, Target), Z_Construct_UClass_UPhysicsConstraintComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMMTBPFunctionLibrary_SetLinearBreakThreshold_Statics::NewProp_Target_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMMTBPFunctionLibrary_SetLinearBreakThreshold_Statics::NewProp_Target_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMMTBPFunctionLibrary_SetLinearBreakThreshold_Statics::NewProp_LinearBreakThreshold_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMMTBPFunctionLibrary_SetLinearBreakThreshold_Statics::NewProp_LinearBreakThreshold = { "LinearBreakThreshold", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MMTBPFunctionLibrary_eventSetLinearBreakThreshold_Parms, LinearBreakThreshold), METADATA_PARAMS(Z_Construct_UFunction_UMMTBPFunctionLibrary_SetLinearBreakThreshold_Statics::NewProp_LinearBreakThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMMTBPFunctionLibrary_SetLinearBreakThreshold_Statics::NewProp_LinearBreakThreshold_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMMTBPFunctionLibrary_SetLinearBreakThreshold_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMMTBPFunctionLibrary_SetLinearBreakThreshold_Statics::NewProp_Target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMMTBPFunctionLibrary_SetLinearBreakThreshold_Statics::NewProp_LinearBreakThreshold,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMMTBPFunctionLibrary_SetLinearBreakThreshold_Statics::Function_MetaDataParams[] = {
		{ "Category", "MMT Utility" },
		{ "Comment", "/**\n\x09*\x09Sets linear break threshold on physics constraint component as such functionality is not exposed to BP.\n\x09*\x09@param Target\x09\x09\x09\x09\x09Physics constraint to set break threshold on\n\x09*\x09@param LinearBreakThreshold\x09\x09""Float magnitude of force that is enough to break constraint\n\x09*/" },
		{ "DisplayName", "MMT Set physics constraint linear break threshold" },
		{ "ModuleRelativePath", "Public/MMTBPFunctionLibrary.h" },
		{ "ToolTip", "Sets linear break threshold on physics constraint component as such functionality is not exposed to BP.\n@param Target                                   Physics constraint to set break threshold on\n@param LinearBreakThreshold             Float magnitude of force that is enough to break constraint" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMMTBPFunctionLibrary_SetLinearBreakThreshold_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMMTBPFunctionLibrary, nullptr, "SetLinearBreakThreshold", nullptr, nullptr, sizeof(MMTBPFunctionLibrary_eventSetLinearBreakThreshold_Parms), Z_Construct_UFunction_UMMTBPFunctionLibrary_SetLinearBreakThreshold_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMMTBPFunctionLibrary_SetLinearBreakThreshold_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMMTBPFunctionLibrary_SetLinearBreakThreshold_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMMTBPFunctionLibrary_SetLinearBreakThreshold_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMMTBPFunctionLibrary_SetLinearBreakThreshold()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMMTBPFunctionLibrary_SetLinearBreakThreshold_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMMTBPFunctionLibrary_SphericalToUnitCartesian_Statics
	{
		struct MMTBPFunctionLibrary_eventSphericalToUnitCartesian_Parms
		{
			FVector2D inputAngles;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_inputAngles;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMMTBPFunctionLibrary_SphericalToUnitCartesian_Statics::NewProp_inputAngles = { "inputAngles", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MMTBPFunctionLibrary_eventSphericalToUnitCartesian_Parms, inputAngles), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMMTBPFunctionLibrary_SphericalToUnitCartesian_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MMTBPFunctionLibrary_eventSphericalToUnitCartesian_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMMTBPFunctionLibrary_SphericalToUnitCartesian_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMMTBPFunctionLibrary_SphericalToUnitCartesian_Statics::NewProp_inputAngles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMMTBPFunctionLibrary_SphericalToUnitCartesian_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMMTBPFunctionLibrary_SphericalToUnitCartesian_Statics::Function_MetaDataParams[] = {
		{ "Category", "MMT Utility" },
		{ "Comment", "/**\n\x09*\x09""Converts from Spherical coordinates to Unit Cartesian\n\x09*\x09@param inputAngles\x09\x09Spherical coordinates angles\n\x09*\x09@return\x09\x09\x09\x09\x09""Cartesian coordinates\n\x09*/" },
		{ "DisplayName", "Spherical to Unit Cartesian" },
		{ "ModuleRelativePath", "Public/MMTBPFunctionLibrary.h" },
		{ "ToolTip", "Converts from Spherical coordinates to Unit Cartesian\n@param inputAngles              Spherical coordinates angles\n@return                                 Cartesian coordinates" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMMTBPFunctionLibrary_SphericalToUnitCartesian_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMMTBPFunctionLibrary, nullptr, "SphericalToUnitCartesian", nullptr, nullptr, sizeof(MMTBPFunctionLibrary_eventSphericalToUnitCartesian_Parms), Z_Construct_UFunction_UMMTBPFunctionLibrary_SphericalToUnitCartesian_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMMTBPFunctionLibrary_SphericalToUnitCartesian_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMMTBPFunctionLibrary_SphericalToUnitCartesian_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMMTBPFunctionLibrary_SphericalToUnitCartesian_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMMTBPFunctionLibrary_SphericalToUnitCartesian()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMMTBPFunctionLibrary_SphericalToUnitCartesian_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMMTBPFunctionLibrary_NoRegister()
	{
		return UMMTBPFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UMMTBPFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMMTBPFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_MMT,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMMTBPFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMMTBPFunctionLibrary_CartesianToSpherical, "CartesianToSpherical" }, // 1178794772
		{ &Z_Construct_UFunction_UMMTBPFunctionLibrary_GetInstancedStaticMeshComponentReferenceByName, "GetInstancedStaticMeshComponentReferenceByName" }, // 1862346914
		{ &Z_Construct_UFunction_UMMTBPFunctionLibrary_GetMeshComponentReferenceByName, "GetMeshComponentReferenceByName" }, // 1169646756
		{ &Z_Construct_UFunction_UMMTBPFunctionLibrary_GetMuFromFrictionElipse, "GetMuFromFrictionElipse" }, // 2856083229
		{ &Z_Construct_UFunction_UMMTBPFunctionLibrary_GetSplineComponentReferenceByName, "GetSplineComponentReferenceByName" }, // 459950840
		{ &Z_Construct_UFunction_UMMTBPFunctionLibrary_MMTAddForceAtLocationComponent, "MMTAddForceAtLocationComponent" }, // 2013796202
		{ &Z_Construct_UFunction_UMMTBPFunctionLibrary_MMTAddForceComponent, "MMTAddForceComponent" }, // 680806498
		{ &Z_Construct_UFunction_UMMTBPFunctionLibrary_MMTAddTorqueComponent, "MMTAddTorqueComponent" }, // 2559919123
		{ &Z_Construct_UFunction_UMMTBPFunctionLibrary_MMTGetTransformActor, "MMTGetTransformActor" }, // 2749069809
		{ &Z_Construct_UFunction_UMMTBPFunctionLibrary_MMTGetTransformComponent, "MMTGetTransformComponent" }, // 3234330977
		{ &Z_Construct_UFunction_UMMTBPFunctionLibrary_MMTSetInertiaTensor, "MMTSetInertiaTensor" }, // 1717401042
		{ &Z_Construct_UFunction_UMMTBPFunctionLibrary_MMTSetTransformComponent, "MMTSetTransformComponent" }, // 1949942578
		{ &Z_Construct_UFunction_UMMTBPFunctionLibrary_SetLinearBreakThreshold, "SetLinearBreakThreshold" }, // 1264647528
		{ &Z_Construct_UFunction_UMMTBPFunctionLibrary_SphericalToUnitCartesian, "SphericalToUnitCartesian" }, // 855610388
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMMTBPFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MMTBPFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/MMTBPFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMMTBPFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMMTBPFunctionLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMMTBPFunctionLibrary_Statics::ClassParams = {
		&UMMTBPFunctionLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMMTBPFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMMTBPFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMMTBPFunctionLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMMTBPFunctionLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMMTBPFunctionLibrary, 663907009);
	template<> MMT_API UClass* StaticClass<UMMTBPFunctionLibrary>()
	{
		return UMMTBPFunctionLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMMTBPFunctionLibrary(Z_Construct_UClass_UMMTBPFunctionLibrary, &UMMTBPFunctionLibrary::StaticClass, TEXT("/Script/MMT"), TEXT("UMMTBPFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMMTBPFunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
