// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MMT/Public/MMTFrictionComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMMTFrictionComponent() {}
// Cross Module References
	MMT_API UClass* Z_Construct_UClass_UMMTFrictionComponent_NoRegister();
	MMT_API UClass* Z_Construct_UClass_UMMTFrictionComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_MMT();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	PHYSICSCORE_API UClass* Z_Construct_UClass_UPhysicalMaterial_NoRegister();
	MMT_API UScriptStruct* Z_Construct_UScriptStruct_FPhysicalSurfaceRollingFrictionCoefficientStruct();
	ENGINE_API UClass* Z_Construct_UClass_UMeshComponent_NoRegister();
	MMT_API UScriptStruct* Z_Construct_UScriptStruct_FContactPointDataStruct();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
// End Cross Module References
	DEFINE_FUNCTION(UMMTFrictionComponent::execGetFrictionLimit)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetFrictionLimit();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMMTFrictionComponent::execGetFrictionForce)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetFrictionForce();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMMTFrictionComponent::execToggleDebugMode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ToggleDebugMode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMMTFrictionComponent::execPhysicsUpdate)
	{
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_NumberOfContactPoints);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_DeltaTime);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_NormalizedReactionForce);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_RollingFrictionForce);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->PhysicsUpdate(Z_Param_Out_NumberOfContactPoints,Z_Param_Out_DeltaTime,Z_Param_Out_NormalizedReactionForce,Z_Param_Out_RollingFrictionForce);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMMTFrictionComponent::execSetFrictionSurfaceSpeed)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_FrictionSurfaceSpeed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFrictionSurfaceSpeed(Z_Param_FrictionSurfaceSpeed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMMTFrictionComponent::execSetFrictionSurfaceVelocity)
	{
		P_GET_STRUCT(FVector,Z_Param_FrictionSurfaceVel);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFrictionSurfaceVelocity(Z_Param_FrictionSurfaceVel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMMTFrictionComponent::execResetFrictionPoints)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetFrictionPoints();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMMTFrictionComponent::execIsFrictionPointActive)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsFrictionPointActive();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMMTFrictionComponent::execRegisterFrictionPoint)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_ImpactForceOrImpulseAtPoint);
		P_GET_UBOOL(Z_Param_TreatAsImpulse);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_ContactPointLocation);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_ContactPointNormal);
		P_GET_OBJECT(UPhysicalMaterial,Z_Param_PhysicalMaterial);
		P_GET_STRUCT(FVector,Z_Param_InducedVelocity);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RegisterFrictionPoint(Z_Param_Out_ImpactForceOrImpulseAtPoint,Z_Param_TreatAsImpulse,Z_Param_Out_ContactPointLocation,Z_Param_Out_ContactPointNormal,Z_Param_PhysicalMaterial,Z_Param_InducedVelocity);
		P_NATIVE_END;
	}
	void UMMTFrictionComponent::StaticRegisterNativesUMMTFrictionComponent()
	{
		UClass* Class = UMMTFrictionComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetFrictionForce", &UMMTFrictionComponent::execGetFrictionForce },
			{ "GetFrictionLimit", &UMMTFrictionComponent::execGetFrictionLimit },
			{ "IsFrictionPointActive", &UMMTFrictionComponent::execIsFrictionPointActive },
			{ "PhysicsUpdate", &UMMTFrictionComponent::execPhysicsUpdate },
			{ "RegisterFrictionPoint", &UMMTFrictionComponent::execRegisterFrictionPoint },
			{ "ResetFrictionPoints", &UMMTFrictionComponent::execResetFrictionPoints },
			{ "SetFrictionSurfaceSpeed", &UMMTFrictionComponent::execSetFrictionSurfaceSpeed },
			{ "SetFrictionSurfaceVelocity", &UMMTFrictionComponent::execSetFrictionSurfaceVelocity },
			{ "ToggleDebugMode", &UMMTFrictionComponent::execToggleDebugMode },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMMTFrictionComponent_GetFrictionForce_Statics
	{
		struct MMTFrictionComponent_eventGetFrictionForce_Parms
		{
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMMTFrictionComponent_GetFrictionForce_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MMTFrictionComponent_eventGetFrictionForce_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMMTFrictionComponent_GetFrictionForce_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMMTFrictionComponent_GetFrictionForce_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMMTFrictionComponent_GetFrictionForce_Statics::Function_MetaDataParams[] = {
		{ "Category", "MMT Friction Component" },
		{ "Comment", "/**\n\x09*\x09Returns last calculated friction force vector in world space\n\x09*\x09@return\x09\x09""Friction force vector in world space from last update\n\x09*/" },
		{ "ModuleRelativePath", "Public/MMTFrictionComponent.h" },
		{ "ToolTip", "Returns last calculated friction force vector in world space\n@return         Friction force vector in world space from last update" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMMTFrictionComponent_GetFrictionForce_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMMTFrictionComponent, nullptr, "GetFrictionForce", nullptr, nullptr, sizeof(MMTFrictionComponent_eventGetFrictionForce_Parms), Z_Construct_UFunction_UMMTFrictionComponent_GetFrictionForce_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMMTFrictionComponent_GetFrictionForce_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMMTFrictionComponent_GetFrictionForce_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMMTFrictionComponent_GetFrictionForce_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMMTFrictionComponent_GetFrictionForce()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMMTFrictionComponent_GetFrictionForce_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMMTFrictionComponent_GetFrictionLimit_Statics
	{
		struct MMTFrictionComponent_eventGetFrictionLimit_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMMTFrictionComponent_GetFrictionLimit_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MMTFrictionComponent_eventGetFrictionLimit_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMMTFrictionComponent_GetFrictionLimit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMMTFrictionComponent_GetFrictionLimit_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMMTFrictionComponent_GetFrictionLimit_Statics::Function_MetaDataParams[] = {
		{ "Category", "MMT Friction Component" },
		{ "Comment", "/**\n\x09*\x09Returns last calculated friction limit magnitude (N * mu)\n\x09*\x09@return\x09\x09Last known friction limit (N * mu)\n\x09*/" },
		{ "ModuleRelativePath", "Public/MMTFrictionComponent.h" },
		{ "ToolTip", "Returns last calculated friction limit magnitude (N * mu)\n@return         Last known friction limit (N * mu)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMMTFrictionComponent_GetFrictionLimit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMMTFrictionComponent, nullptr, "GetFrictionLimit", nullptr, nullptr, sizeof(MMTFrictionComponent_eventGetFrictionLimit_Parms), Z_Construct_UFunction_UMMTFrictionComponent_GetFrictionLimit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMMTFrictionComponent_GetFrictionLimit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMMTFrictionComponent_GetFrictionLimit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMMTFrictionComponent_GetFrictionLimit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMMTFrictionComponent_GetFrictionLimit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMMTFrictionComponent_GetFrictionLimit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMMTFrictionComponent_IsFrictionPointActive_Statics
	{
		struct MMTFrictionComponent_eventIsFrictionPointActive_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMMTFrictionComponent_IsFrictionPointActive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MMTFrictionComponent_eventIsFrictionPointActive_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMMTFrictionComponent_IsFrictionPointActive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MMTFrictionComponent_eventIsFrictionPointActive_Parms), &Z_Construct_UFunction_UMMTFrictionComponent_IsFrictionPointActive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMMTFrictionComponent_IsFrictionPointActive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMMTFrictionComponent_IsFrictionPointActive_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMMTFrictionComponent_IsFrictionPointActive_Statics::Function_MetaDataParams[] = {
		{ "Category", "MMT Friction Component" },
		{ "Comment", "/**\n\x09*\x09""Checks if registered friction point is active\n\x09*\x09@return \x09Returns true if the next contact point in line will be processed in friction calculation.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MMTFrictionComponent.h" },
		{ "ToolTip", "Checks if registered friction point is active\n@return         Returns true if the next contact point in line will be processed in friction calculation." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMMTFrictionComponent_IsFrictionPointActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMMTFrictionComponent, nullptr, "IsFrictionPointActive", nullptr, nullptr, sizeof(MMTFrictionComponent_eventIsFrictionPointActive_Parms), Z_Construct_UFunction_UMMTFrictionComponent_IsFrictionPointActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMMTFrictionComponent_IsFrictionPointActive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMMTFrictionComponent_IsFrictionPointActive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMMTFrictionComponent_IsFrictionPointActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMMTFrictionComponent_IsFrictionPointActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMMTFrictionComponent_IsFrictionPointActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMMTFrictionComponent_PhysicsUpdate_Statics
	{
		struct MMTFrictionComponent_eventPhysicsUpdate_Parms
		{
			float NumberOfContactPoints;
			float DeltaTime;
			FVector NormalizedReactionForce;
			float RollingFrictionForce;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumberOfContactPoints_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NumberOfContactPoints;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeltaTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NormalizedReactionForce;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RollingFrictionForce;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMMTFrictionComponent_PhysicsUpdate_Statics::NewProp_NumberOfContactPoints_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMMTFrictionComponent_PhysicsUpdate_Statics::NewProp_NumberOfContactPoints = { "NumberOfContactPoints", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MMTFrictionComponent_eventPhysicsUpdate_Parms, NumberOfContactPoints), METADATA_PARAMS(Z_Construct_UFunction_UMMTFrictionComponent_PhysicsUpdate_Statics::NewProp_NumberOfContactPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMMTFrictionComponent_PhysicsUpdate_Statics::NewProp_NumberOfContactPoints_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMMTFrictionComponent_PhysicsUpdate_Statics::NewProp_DeltaTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMMTFrictionComponent_PhysicsUpdate_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MMTFrictionComponent_eventPhysicsUpdate_Parms, DeltaTime), METADATA_PARAMS(Z_Construct_UFunction_UMMTFrictionComponent_PhysicsUpdate_Statics::NewProp_DeltaTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMMTFrictionComponent_PhysicsUpdate_Statics::NewProp_DeltaTime_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMMTFrictionComponent_PhysicsUpdate_Statics::NewProp_NormalizedReactionForce = { "NormalizedReactionForce", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MMTFrictionComponent_eventPhysicsUpdate_Parms, NormalizedReactionForce), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMMTFrictionComponent_PhysicsUpdate_Statics::NewProp_RollingFrictionForce = { "RollingFrictionForce", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MMTFrictionComponent_eventPhysicsUpdate_Parms, RollingFrictionForce), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMMTFrictionComponent_PhysicsUpdate_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MMTFrictionComponent_eventPhysicsUpdate_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMMTFrictionComponent_PhysicsUpdate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MMTFrictionComponent_eventPhysicsUpdate_Parms), &Z_Construct_UFunction_UMMTFrictionComponent_PhysicsUpdate_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMMTFrictionComponent_PhysicsUpdate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMMTFrictionComponent_PhysicsUpdate_Statics::NewProp_NumberOfContactPoints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMMTFrictionComponent_PhysicsUpdate_Statics::NewProp_DeltaTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMMTFrictionComponent_PhysicsUpdate_Statics::NewProp_NormalizedReactionForce,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMMTFrictionComponent_PhysicsUpdate_Statics::NewProp_RollingFrictionForce,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMMTFrictionComponent_PhysicsUpdate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMMTFrictionComponent_PhysicsUpdate_Statics::Function_MetaDataParams[] = {
		{ "Category", "MMT Friction Component" },
		{ "Comment", "/**\n\x09*\x09Runs calculations on friction component, applies friction force to effected component and returns reaction forces (forces that can effect track or a wheel)\n\x09*\x09@param NumberOfContactPoints\x09\x09Total number of friction points active on this update cycle\n\x09*\x09@param DeltaTime\x09\x09\x09\x09\x09""Delta time\n\x09*\x09@return\x09\x09\x09\x09\x09\x09\x09\x09Returns true if point was active and state of static friction was achieved, including absence of induced of friction surface velocity \n\x09*\x09@return\x09NormalizedReactionForce\x09\x09Reaction force to friction force. When friction force between track and ground pushes vehicle forward, reaction force pushes track in opposite direction\n\x09*\x09@return\x09RollingFrictionForce\x09\x09Rolling friction force is a force opposing rolling of the track or the wheel, it depends on ground pressure and ground surface properties\n\x09*/" },
		{ "ModuleRelativePath", "Public/MMTFrictionComponent.h" },
		{ "ToolTip", "Runs calculations on friction component, applies friction force to effected component and returns reaction forces (forces that can effect track or a wheel)\n@param NumberOfContactPoints            Total number of friction points active on this update cycle\n@param DeltaTime                                        Delta time\n@return                                                         Returns true if point was active and state of static friction was achieved, including absence of induced of friction surface velocity\n@return NormalizedReactionForce         Reaction force to friction force. When friction force between track and ground pushes vehicle forward, reaction force pushes track in opposite direction\n@return RollingFrictionForce            Rolling friction force is a force opposing rolling of the track or the wheel, it depends on ground pressure and ground surface properties" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMMTFrictionComponent_PhysicsUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMMTFrictionComponent, nullptr, "PhysicsUpdate", nullptr, nullptr, sizeof(MMTFrictionComponent_eventPhysicsUpdate_Parms), Z_Construct_UFunction_UMMTFrictionComponent_PhysicsUpdate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMMTFrictionComponent_PhysicsUpdate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMMTFrictionComponent_PhysicsUpdate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMMTFrictionComponent_PhysicsUpdate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMMTFrictionComponent_PhysicsUpdate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMMTFrictionComponent_PhysicsUpdate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMMTFrictionComponent_RegisterFrictionPoint_Statics
	{
		struct MMTFrictionComponent_eventRegisterFrictionPoint_Parms
		{
			FVector ImpactForceOrImpulseAtPoint;
			bool TreatAsImpulse;
			FVector ContactPointLocation;
			FVector ContactPointNormal;
			UPhysicalMaterial* PhysicalMaterial;
			FVector InducedVelocity;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImpactForceOrImpulseAtPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ImpactForceOrImpulseAtPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TreatAsImpulse_MetaData[];
#endif
		static void NewProp_TreatAsImpulse_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_TreatAsImpulse;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ContactPointLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ContactPointLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ContactPointNormal_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ContactPointNormal;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PhysicalMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InducedVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InducedVelocity;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMMTFrictionComponent_RegisterFrictionPoint_Statics::NewProp_ImpactForceOrImpulseAtPoint_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMMTFrictionComponent_RegisterFrictionPoint_Statics::NewProp_ImpactForceOrImpulseAtPoint = { "ImpactForceOrImpulseAtPoint", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MMTFrictionComponent_eventRegisterFrictionPoint_Parms, ImpactForceOrImpulseAtPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UMMTFrictionComponent_RegisterFrictionPoint_Statics::NewProp_ImpactForceOrImpulseAtPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMMTFrictionComponent_RegisterFrictionPoint_Statics::NewProp_ImpactForceOrImpulseAtPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMMTFrictionComponent_RegisterFrictionPoint_Statics::NewProp_TreatAsImpulse_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UMMTFrictionComponent_RegisterFrictionPoint_Statics::NewProp_TreatAsImpulse_SetBit(void* Obj)
	{
		((MMTFrictionComponent_eventRegisterFrictionPoint_Parms*)Obj)->TreatAsImpulse = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMMTFrictionComponent_RegisterFrictionPoint_Statics::NewProp_TreatAsImpulse = { "TreatAsImpulse", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MMTFrictionComponent_eventRegisterFrictionPoint_Parms), &Z_Construct_UFunction_UMMTFrictionComponent_RegisterFrictionPoint_Statics::NewProp_TreatAsImpulse_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UMMTFrictionComponent_RegisterFrictionPoint_Statics::NewProp_TreatAsImpulse_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMMTFrictionComponent_RegisterFrictionPoint_Statics::NewProp_TreatAsImpulse_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMMTFrictionComponent_RegisterFrictionPoint_Statics::NewProp_ContactPointLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMMTFrictionComponent_RegisterFrictionPoint_Statics::NewProp_ContactPointLocation = { "ContactPointLocation", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MMTFrictionComponent_eventRegisterFrictionPoint_Parms, ContactPointLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UMMTFrictionComponent_RegisterFrictionPoint_Statics::NewProp_ContactPointLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMMTFrictionComponent_RegisterFrictionPoint_Statics::NewProp_ContactPointLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMMTFrictionComponent_RegisterFrictionPoint_Statics::NewProp_ContactPointNormal_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMMTFrictionComponent_RegisterFrictionPoint_Statics::NewProp_ContactPointNormal = { "ContactPointNormal", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MMTFrictionComponent_eventRegisterFrictionPoint_Parms, ContactPointNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UMMTFrictionComponent_RegisterFrictionPoint_Statics::NewProp_ContactPointNormal_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMMTFrictionComponent_RegisterFrictionPoint_Statics::NewProp_ContactPointNormal_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMMTFrictionComponent_RegisterFrictionPoint_Statics::NewProp_PhysicalMaterial = { "PhysicalMaterial", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MMTFrictionComponent_eventRegisterFrictionPoint_Parms, PhysicalMaterial), Z_Construct_UClass_UPhysicalMaterial_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMMTFrictionComponent_RegisterFrictionPoint_Statics::NewProp_InducedVelocity_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMMTFrictionComponent_RegisterFrictionPoint_Statics::NewProp_InducedVelocity = { "InducedVelocity", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MMTFrictionComponent_eventRegisterFrictionPoint_Parms, InducedVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UMMTFrictionComponent_RegisterFrictionPoint_Statics::NewProp_InducedVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMMTFrictionComponent_RegisterFrictionPoint_Statics::NewProp_InducedVelocity_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMMTFrictionComponent_RegisterFrictionPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMMTFrictionComponent_RegisterFrictionPoint_Statics::NewProp_ImpactForceOrImpulseAtPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMMTFrictionComponent_RegisterFrictionPoint_Statics::NewProp_TreatAsImpulse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMMTFrictionComponent_RegisterFrictionPoint_Statics::NewProp_ContactPointLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMMTFrictionComponent_RegisterFrictionPoint_Statics::NewProp_ContactPointNormal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMMTFrictionComponent_RegisterFrictionPoint_Statics::NewProp_PhysicalMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMMTFrictionComponent_RegisterFrictionPoint_Statics::NewProp_InducedVelocity,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMMTFrictionComponent_RegisterFrictionPoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "MMT Friction Component" },
		{ "Comment", "/**\n\x09*\x09Register collision event of the component related to Friction Component\n\x09*\x09@param NormalImpulseAtPoint\x09\x09Normal impulse is amount of \"force\" that was exerted on object as the result of collision.  Normal impulse is a typical output of OnComponentHit event.\n\x09*\x09@param ContactPointLocation\x09\x09World Space Location of the contact point.\n\x09*\x09@param ContactPointNormal\x09\x09Normal vector of the contact point.\n\x09*\x09@param PhysicalMaterial\x09\x09PhysicalMaterial of the object with which contact occurred.\n\x09*\x09@param InducedVelocity\x09\x09Optional. Induced velocity is the velocity of the surface or an object where contact occurred. For example, for tank being transported on the train cart, induced velocity would be velocity of the cart.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MMTFrictionComponent.h" },
		{ "ToolTip", "Register collision event of the component related to Friction Component\n@param NormalImpulseAtPoint             Normal impulse is amount of \"force\" that was exerted on object as the result of collision.  Normal impulse is a typical output of OnComponentHit event.\n@param ContactPointLocation             World Space Location of the contact point.\n@param ContactPointNormal               Normal vector of the contact point.\n@param PhysicalMaterial         PhysicalMaterial of the object with which contact occurred.\n@param InducedVelocity          Optional. Induced velocity is the velocity of the surface or an object where contact occurred. For example, for tank being transported on the train cart, induced velocity would be velocity of the cart." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMMTFrictionComponent_RegisterFrictionPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMMTFrictionComponent, nullptr, "RegisterFrictionPoint", nullptr, nullptr, sizeof(MMTFrictionComponent_eventRegisterFrictionPoint_Parms), Z_Construct_UFunction_UMMTFrictionComponent_RegisterFrictionPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMMTFrictionComponent_RegisterFrictionPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMMTFrictionComponent_RegisterFrictionPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMMTFrictionComponent_RegisterFrictionPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMMTFrictionComponent_RegisterFrictionPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMMTFrictionComponent_RegisterFrictionPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMMTFrictionComponent_ResetFrictionPoints_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMMTFrictionComponent_ResetFrictionPoints_Statics::Function_MetaDataParams[] = {
		{ "Category", "MMT Friction Component" },
		{ "Comment", "/**\n\x09*\x09""Empties array of stored friction points, this needs to be done after physics sub-stepping or before new collision information come in\n\x09*/" },
		{ "ModuleRelativePath", "Public/MMTFrictionComponent.h" },
		{ "ToolTip", "Empties array of stored friction points, this needs to be done after physics sub-stepping or before new collision information come in" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMMTFrictionComponent_ResetFrictionPoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMMTFrictionComponent, nullptr, "ResetFrictionPoints", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMMTFrictionComponent_ResetFrictionPoints_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMMTFrictionComponent_ResetFrictionPoints_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMMTFrictionComponent_ResetFrictionPoints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMMTFrictionComponent_ResetFrictionPoints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMMTFrictionComponent_SetFrictionSurfaceSpeed_Statics
	{
		struct MMTFrictionComponent_eventSetFrictionSurfaceSpeed_Parms
		{
			float FrictionSurfaceSpeed;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FrictionSurfaceSpeed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMMTFrictionComponent_SetFrictionSurfaceSpeed_Statics::NewProp_FrictionSurfaceSpeed = { "FrictionSurfaceSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MMTFrictionComponent_eventSetFrictionSurfaceSpeed_Parms, FrictionSurfaceSpeed), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMMTFrictionComponent_SetFrictionSurfaceSpeed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMMTFrictionComponent_SetFrictionSurfaceSpeed_Statics::NewProp_FrictionSurfaceSpeed,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMMTFrictionComponent_SetFrictionSurfaceSpeed_Statics::Function_MetaDataParams[] = {
		{ "Category", "MMT Friction Component" },
		{ "Comment", "/**\n\x09*\x09Sets speed of the friction surface. In case of the tank it would be linear velocity of the track.\n\x09*\x09@param FrictionSurfacespeed\x09\x09Linear speed of the friction surface\n\x09*/" },
		{ "CPP_Default_FrictionSurfaceSpeed", "0.000000" },
		{ "ModuleRelativePath", "Public/MMTFrictionComponent.h" },
		{ "ToolTip", "Sets speed of the friction surface. In case of the tank it would be linear velocity of the track.\n@param FrictionSurfacespeed             Linear speed of the friction surface" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMMTFrictionComponent_SetFrictionSurfaceSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMMTFrictionComponent, nullptr, "SetFrictionSurfaceSpeed", nullptr, nullptr, sizeof(MMTFrictionComponent_eventSetFrictionSurfaceSpeed_Parms), Z_Construct_UFunction_UMMTFrictionComponent_SetFrictionSurfaceSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMMTFrictionComponent_SetFrictionSurfaceSpeed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMMTFrictionComponent_SetFrictionSurfaceSpeed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMMTFrictionComponent_SetFrictionSurfaceSpeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMMTFrictionComponent_SetFrictionSurfaceSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMMTFrictionComponent_SetFrictionSurfaceSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMMTFrictionComponent_SetFrictionSurfaceVelocity_Statics
	{
		struct MMTFrictionComponent_eventSetFrictionSurfaceVelocity_Parms
		{
			FVector FrictionSurfaceVel;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FrictionSurfaceVel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMMTFrictionComponent_SetFrictionSurfaceVelocity_Statics::NewProp_FrictionSurfaceVel = { "FrictionSurfaceVel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MMTFrictionComponent_eventSetFrictionSurfaceVelocity_Parms, FrictionSurfaceVel), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMMTFrictionComponent_SetFrictionSurfaceVelocity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMMTFrictionComponent_SetFrictionSurfaceVelocity_Statics::NewProp_FrictionSurfaceVel,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMMTFrictionComponent_SetFrictionSurfaceVelocity_Statics::Function_MetaDataParams[] = {
		{ "Category", "MMT Friction Component" },
		{ "Comment", "/**\n\x09*\x09Sets velocity of the friction surface. In case of the tank it would be linear velocity of the track.\n\x09*\x09@param FrictionSurfaceVel\x09Linear velocity of the friction surface\n\x09*/" },
		{ "CPP_Default_FrictionSurfaceVel", "" },
		{ "ModuleRelativePath", "Public/MMTFrictionComponent.h" },
		{ "ToolTip", "Sets velocity of the friction surface. In case of the tank it would be linear velocity of the track.\n@param FrictionSurfaceVel       Linear velocity of the friction surface" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMMTFrictionComponent_SetFrictionSurfaceVelocity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMMTFrictionComponent, nullptr, "SetFrictionSurfaceVelocity", nullptr, nullptr, sizeof(MMTFrictionComponent_eventSetFrictionSurfaceVelocity_Parms), Z_Construct_UFunction_UMMTFrictionComponent_SetFrictionSurfaceVelocity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMMTFrictionComponent_SetFrictionSurfaceVelocity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMMTFrictionComponent_SetFrictionSurfaceVelocity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMMTFrictionComponent_SetFrictionSurfaceVelocity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMMTFrictionComponent_SetFrictionSurfaceVelocity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMMTFrictionComponent_SetFrictionSurfaceVelocity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMMTFrictionComponent_ToggleDebugMode_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMMTFrictionComponent_ToggleDebugMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "MMT Friction Component" },
		{ "Comment", "/**\n\x09*\x09Switches debug mode on/off with every call\n\x09*/" },
		{ "ModuleRelativePath", "Public/MMTFrictionComponent.h" },
		{ "ToolTip", "Switches debug mode on/off with every call" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMMTFrictionComponent_ToggleDebugMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMMTFrictionComponent, nullptr, "ToggleDebugMode", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMMTFrictionComponent_ToggleDebugMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMMTFrictionComponent_ToggleDebugMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMMTFrictionComponent_ToggleDebugMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMMTFrictionComponent_ToggleDebugMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMMTFrictionComponent_NoRegister()
	{
		return UMMTFrictionComponent::StaticClass();
	}
	struct Z_Construct_UClass_UMMTFrictionComponent_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EffectedComponentName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_EffectedComponentName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsDebugMode_MetaData[];
#endif
		static void NewProp_IsDebugMode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsDebugMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MuXStatic_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MuXStatic;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MuXKinetic_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MuXKinetic;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseAnisotropicFriction_MetaData[];
#endif
		static void NewProp_bUseAnisotropicFriction_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseAnisotropicFriction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MuYStatic_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MuYStatic;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MuYKinetic_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MuYKinetic;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PhysicsSurfaceResponse_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PhysicsSurfaceResponse_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PhysicsSurfaceResponse;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsAlternateFriction_MetaData[];
#endif
		static void NewProp_IsAlternateFriction_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsAlternateFriction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EffectedComponentMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EffectedComponentMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrictionSurfaceVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FrictionSurfaceVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrictionSurfaceSpd_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FrictionSurfaceSpd;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ContactPointsData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ContactPointsData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ContactPointsData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReferenceFrameTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReferenceFrameTransform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrevRelativeVelocityAtPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PrevRelativeVelocityAtPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastFrictionForce_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LastFrictionForce;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastFrictionLimit_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LastFrictionLimit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrevAngularVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PrevAngularVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrevLinearVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PrevLinearVelocity;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMMTFrictionComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_MMT,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMMTFrictionComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMMTFrictionComponent_GetFrictionForce, "GetFrictionForce" }, // 850288554
		{ &Z_Construct_UFunction_UMMTFrictionComponent_GetFrictionLimit, "GetFrictionLimit" }, // 3919140902
		{ &Z_Construct_UFunction_UMMTFrictionComponent_IsFrictionPointActive, "IsFrictionPointActive" }, // 219202695
		{ &Z_Construct_UFunction_UMMTFrictionComponent_PhysicsUpdate, "PhysicsUpdate" }, // 1992459867
		{ &Z_Construct_UFunction_UMMTFrictionComponent_RegisterFrictionPoint, "RegisterFrictionPoint" }, // 2365178759
		{ &Z_Construct_UFunction_UMMTFrictionComponent_ResetFrictionPoints, "ResetFrictionPoints" }, // 3121442783
		{ &Z_Construct_UFunction_UMMTFrictionComponent_SetFrictionSurfaceSpeed, "SetFrictionSurfaceSpeed" }, // 2793142727
		{ &Z_Construct_UFunction_UMMTFrictionComponent_SetFrictionSurfaceVelocity, "SetFrictionSurfaceVelocity" }, // 4051911233
		{ &Z_Construct_UFunction_UMMTFrictionComponent_ToggleDebugMode, "ToggleDebugMode" }, // 2728848656
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMMTFrictionComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "MMT" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "MMTFrictionComponent.h" },
		{ "ModuleRelativePath", "Public/MMTFrictionComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMMTFrictionComponent_Statics::NewProp_bDisabled_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/MMTFrictionComponent.h" },
		{ "ToolTip", "Disables component from doing physics calculations and applying forces, useful for debugging." },
	};
#endif
	void Z_Construct_UClass_UMMTFrictionComponent_Statics::NewProp_bDisabled_SetBit(void* Obj)
	{
		((UMMTFrictionComponent*)Obj)->bDisabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMMTFrictionComponent_Statics::NewProp_bDisabled = { "bDisabled", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMMTFrictionComponent), &Z_Construct_UClass_UMMTFrictionComponent_Statics::NewProp_bDisabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMMTFrictionComponent_Statics::NewProp_bDisabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMMTFrictionComponent_Statics::NewProp_bDisabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMMTFrictionComponent_Statics::NewProp_EffectedComponentName_MetaData[] = {
		{ "Category", "Friction Settings" },
		{ "ModuleRelativePath", "Public/MMTFrictionComponent.h" },
		{ "ToolTip", "Component to which friction force will be applied, it has to simulate physics" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMMTFrictionComponent_Statics::NewProp_EffectedComponentName = { "EffectedComponentName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMMTFrictionComponent, EffectedComponentName), METADATA_PARAMS(Z_Construct_UClass_UMMTFrictionComponent_Statics::NewProp_EffectedComponentName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMMTFrictionComponent_Statics::NewProp_EffectedComponentName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMMTFrictionComponent_Statics::NewProp_IsDebugMode_MetaData[] = {
		{ "Category", "Friction Settings" },
		{ "ModuleRelativePath", "Public/MMTFrictionComponent.h" },
		{ "ToolTip", "Enable on screen debug output" },
	};
#endif
	void Z_Construct_UClass_UMMTFrictionComponent_Statics::NewProp_IsDebugMode_SetBit(void* Obj)
	{
		((UMMTFrictionComponent*)Obj)->IsDebugMode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMMTFrictionComponent_Statics::NewProp_IsDebugMode = { "IsDebugMode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMMTFrictionComponent), &Z_Construct_UClass_UMMTFrictionComponent_Statics::NewProp_IsDebugMode_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMMTFrictionComponent_Statics::NewProp_IsDebugMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMMTFrictionComponent_Statics::NewProp_IsDebugMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMMTFrictionComponent_Statics::NewProp_MuXStatic_MetaData[] = {
		{ "Category", "Friction Settings" },
		{ "ModuleRelativePath", "Public/MMTFrictionComponent.h" },
		{ "ToolTip", "Static friction coefficient in X axis" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMMTFrictionComponent_Statics::NewProp_MuXStatic = { "MuXStatic", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMMTFrictionComponent, MuXStatic), METADATA_PARAMS(Z_Construct_UClass_UMMTFrictionComponent_Statics::NewProp_MuXStatic_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMMTFrictionComponent_Statics::NewProp_MuXStatic_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMMTFrictionComponent_Statics::NewProp_MuXKinetic_MetaData[] = {
		{ "Category", "Friction Settings" },
		{ "ModuleRelativePath", "Public/MMTFrictionComponent.h" },
		{ "ToolTip", "Kinetic friction coefficient in X axis" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMMTFrictionComponent_Statics::NewProp_MuXKinetic = { "MuXKinetic", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMMTFrictionComponent, MuXKinetic), METADATA_PARAMS(Z_Construct_UClass_UMMTFrictionComponent_Statics::NewProp_MuXKinetic_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMMTFrictionComponent_Statics::NewProp_MuXKinetic_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMMTFrictionComponent_Statics::NewProp_bUseAnisotropicFriction_MetaData[] = {
		{ "Category", "Friction Settings" },
		{ "ModuleRelativePath", "Public/MMTFrictionComponent.h" },
		{ "ToolTip", "Set TRUE to specify different friction coefficient in Y axis, otherwise MuX is used as uniform coefficient. Useful for objects such as ice skates, brushed contact surface and some types of tank tracks." },
	};
#endif
	void Z_Construct_UClass_UMMTFrictionComponent_Statics::NewProp_bUseAnisotropicFriction_SetBit(void* Obj)
	{
		((UMMTFrictionComponent*)Obj)->bUseAnisotropicFriction = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMMTFrictionComponent_Statics::NewProp_bUseAnisotropicFriction = { "bUseAnisotropicFriction", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMMTFrictionComponent), &Z_Construct_UClass_UMMTFrictionComponent_Statics::NewProp_bUseAnisotropicFriction_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMMTFrictionComponent_Statics::NewProp_bUseAnisotropicFriction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMMTFrictionComponent_Statics::NewProp_bUseAnisotropicFriction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMMTFrictionComponent_Statics::NewProp_MuYStatic_MetaData[] = {
		{ "Category", "Friction Settings" },
		{ "EditCondition", "bUseAnisotropicFriction" },
		{ "ModuleRelativePath", "Public/MMTFrictionComponent.h" },
		{ "ToolTip", "Static friction coefficient in Y axis" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMMTFrictionComponent_Statics::NewProp_MuYStatic = { "MuYStatic", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMMTFrictionComponent, MuYStatic), METADATA_PARAMS(Z_Construct_UClass_UMMTFrictionComponent_Statics::NewProp_MuYStatic_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMMTFrictionComponent_Statics::NewProp_MuYStatic_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMMTFrictionComponent_Statics::NewProp_MuYKinetic_MetaData[] = {
		{ "Category", "Friction Settings" },
		{ "EditCondition", "bUseAnisotropicFriction" },
		{ "ModuleRelativePath", "Public/MMTFrictionComponent.h" },
		{ "ToolTip", "Kinetic friction coefficient in Y axis" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMMTFrictionComponent_Statics::NewProp_MuYKinetic = { "MuYKinetic", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMMTFrictionComponent, MuYKinetic), METADATA_PARAMS(Z_Construct_UClass_UMMTFrictionComponent_Statics::NewProp_MuYKinetic_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMMTFrictionComponent_Statics::NewProp_MuYKinetic_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMMTFrictionComponent_Statics::NewProp_PhysicsSurfaceResponse_Inner = { "PhysicsSurfaceResponse", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPhysicalSurfaceRollingFrictionCoefficientStruct, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMMTFrictionComponent_Statics::NewProp_PhysicsSurfaceResponse_MetaData[] = {
		{ "Category", "Friction Settings" },
		{ "ModuleRelativePath", "Public/MMTFrictionComponent.h" },
		{ "ToolTip", "Array of physical surfaces and desired rolling friction coefficients for them" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMMTFrictionComponent_Statics::NewProp_PhysicsSurfaceResponse = { "PhysicsSurfaceResponse", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMMTFrictionComponent, PhysicsSurfaceResponse), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMMTFrictionComponent_Statics::NewProp_PhysicsSurfaceResponse_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMMTFrictionComponent_Statics::NewProp_PhysicsSurfaceResponse_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMMTFrictionComponent_Statics::NewProp_IsAlternateFriction_MetaData[] = {
		{ "Category", "Friction Settings" },
		{ "ModuleRelativePath", "Public/MMTFrictionComponent.h" },
		{ "ToolTip", "Experimental calculation of friction force" },
	};
#endif
	void Z_Construct_UClass_UMMTFrictionComponent_Statics::NewProp_IsAlternateFriction_SetBit(void* Obj)
	{
		((UMMTFrictionComponent*)Obj)->IsAlternateFriction = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMMTFrictionComponent_Statics::NewProp_IsAlternateFriction = { "IsAlternateFriction", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMMTFrictionComponent), &Z_Construct_UClass_UMMTFrictionComponent_Statics::NewProp_IsAlternateFriction_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMMTFrictionComponent_Statics::NewProp_IsAlternateFriction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMMTFrictionComponent_Statics::NewProp_IsAlternateFriction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMMTFrictionComponent_Statics::NewProp_EffectedComponentMesh_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MMTFrictionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMMTFrictionComponent_Statics::NewProp_EffectedComponentMesh = { "EffectedComponentMesh", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMMTFrictionComponent, EffectedComponentMesh), Z_Construct_UClass_UMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMMTFrictionComponent_Statics::NewProp_EffectedComponentMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMMTFrictionComponent_Statics::NewProp_EffectedComponentMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMMTFrictionComponent_Statics::NewProp_FrictionSurfaceVelocity_MetaData[] = {
		{ "ModuleRelativePath", "Public/MMTFrictionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMMTFrictionComponent_Statics::NewProp_FrictionSurfaceVelocity = { "FrictionSurfaceVelocity", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMMTFrictionComponent, FrictionSurfaceVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UMMTFrictionComponent_Statics::NewProp_FrictionSurfaceVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMMTFrictionComponent_Statics::NewProp_FrictionSurfaceVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMMTFrictionComponent_Statics::NewProp_FrictionSurfaceSpd_MetaData[] = {
		{ "Comment", "//Linear Track Velocity in case of a tank\n" },
		{ "ModuleRelativePath", "Public/MMTFrictionComponent.h" },
		{ "ToolTip", "Linear Track Velocity in case of a tank" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMMTFrictionComponent_Statics::NewProp_FrictionSurfaceSpd = { "FrictionSurfaceSpd", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMMTFrictionComponent, FrictionSurfaceSpd), METADATA_PARAMS(Z_Construct_UClass_UMMTFrictionComponent_Statics::NewProp_FrictionSurfaceSpd_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMMTFrictionComponent_Statics::NewProp_FrictionSurfaceSpd_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMMTFrictionComponent_Statics::NewProp_ContactPointsData_Inner = { "ContactPointsData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FContactPointDataStruct, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMMTFrictionComponent_Statics::NewProp_ContactPointsData_MetaData[] = {
		{ "Comment", "//Linear Track Speed in case of a tank\n" },
		{ "ModuleRelativePath", "Public/MMTFrictionComponent.h" },
		{ "ToolTip", "Linear Track Speed in case of a tank" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMMTFrictionComponent_Statics::NewProp_ContactPointsData = { "ContactPointsData", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMMTFrictionComponent, ContactPointsData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMMTFrictionComponent_Statics::NewProp_ContactPointsData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMMTFrictionComponent_Statics::NewProp_ContactPointsData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMMTFrictionComponent_Statics::NewProp_ReferenceFrameTransform_MetaData[] = {
		{ "ModuleRelativePath", "Public/MMTFrictionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMMTFrictionComponent_Statics::NewProp_ReferenceFrameTransform = { "ReferenceFrameTransform", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMMTFrictionComponent, ReferenceFrameTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_UMMTFrictionComponent_Statics::NewProp_ReferenceFrameTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMMTFrictionComponent_Statics::NewProp_ReferenceFrameTransform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMMTFrictionComponent_Statics::NewProp_PrevRelativeVelocityAtPoint_MetaData[] = {
		{ "ModuleRelativePath", "Public/MMTFrictionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMMTFrictionComponent_Statics::NewProp_PrevRelativeVelocityAtPoint = { "PrevRelativeVelocityAtPoint", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMMTFrictionComponent, PrevRelativeVelocityAtPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UMMTFrictionComponent_Statics::NewProp_PrevRelativeVelocityAtPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMMTFrictionComponent_Statics::NewProp_PrevRelativeVelocityAtPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMMTFrictionComponent_Statics::NewProp_LastFrictionForce_MetaData[] = {
		{ "ModuleRelativePath", "Public/MMTFrictionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMMTFrictionComponent_Statics::NewProp_LastFrictionForce = { "LastFrictionForce", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMMTFrictionComponent, LastFrictionForce), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UMMTFrictionComponent_Statics::NewProp_LastFrictionForce_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMMTFrictionComponent_Statics::NewProp_LastFrictionForce_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMMTFrictionComponent_Statics::NewProp_LastFrictionLimit_MetaData[] = {
		{ "ModuleRelativePath", "Public/MMTFrictionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMMTFrictionComponent_Statics::NewProp_LastFrictionLimit = { "LastFrictionLimit", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMMTFrictionComponent, LastFrictionLimit), METADATA_PARAMS(Z_Construct_UClass_UMMTFrictionComponent_Statics::NewProp_LastFrictionLimit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMMTFrictionComponent_Statics::NewProp_LastFrictionLimit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMMTFrictionComponent_Statics::NewProp_PrevAngularVelocity_MetaData[] = {
		{ "ModuleRelativePath", "Public/MMTFrictionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMMTFrictionComponent_Statics::NewProp_PrevAngularVelocity = { "PrevAngularVelocity", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMMTFrictionComponent, PrevAngularVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UMMTFrictionComponent_Statics::NewProp_PrevAngularVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMMTFrictionComponent_Statics::NewProp_PrevAngularVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMMTFrictionComponent_Statics::NewProp_PrevLinearVelocity_MetaData[] = {
		{ "ModuleRelativePath", "Public/MMTFrictionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMMTFrictionComponent_Statics::NewProp_PrevLinearVelocity = { "PrevLinearVelocity", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMMTFrictionComponent, PrevLinearVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UMMTFrictionComponent_Statics::NewProp_PrevLinearVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMMTFrictionComponent_Statics::NewProp_PrevLinearVelocity_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMMTFrictionComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMMTFrictionComponent_Statics::NewProp_bDisabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMMTFrictionComponent_Statics::NewProp_EffectedComponentName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMMTFrictionComponent_Statics::NewProp_IsDebugMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMMTFrictionComponent_Statics::NewProp_MuXStatic,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMMTFrictionComponent_Statics::NewProp_MuXKinetic,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMMTFrictionComponent_Statics::NewProp_bUseAnisotropicFriction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMMTFrictionComponent_Statics::NewProp_MuYStatic,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMMTFrictionComponent_Statics::NewProp_MuYKinetic,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMMTFrictionComponent_Statics::NewProp_PhysicsSurfaceResponse_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMMTFrictionComponent_Statics::NewProp_PhysicsSurfaceResponse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMMTFrictionComponent_Statics::NewProp_IsAlternateFriction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMMTFrictionComponent_Statics::NewProp_EffectedComponentMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMMTFrictionComponent_Statics::NewProp_FrictionSurfaceVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMMTFrictionComponent_Statics::NewProp_FrictionSurfaceSpd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMMTFrictionComponent_Statics::NewProp_ContactPointsData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMMTFrictionComponent_Statics::NewProp_ContactPointsData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMMTFrictionComponent_Statics::NewProp_ReferenceFrameTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMMTFrictionComponent_Statics::NewProp_PrevRelativeVelocityAtPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMMTFrictionComponent_Statics::NewProp_LastFrictionForce,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMMTFrictionComponent_Statics::NewProp_LastFrictionLimit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMMTFrictionComponent_Statics::NewProp_PrevAngularVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMMTFrictionComponent_Statics::NewProp_PrevLinearVelocity,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMMTFrictionComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMMTFrictionComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMMTFrictionComponent_Statics::ClassParams = {
		&UMMTFrictionComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMMTFrictionComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMMTFrictionComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UMMTFrictionComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMMTFrictionComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMMTFrictionComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMMTFrictionComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMMTFrictionComponent, 2744876411);
	template<> MMT_API UClass* StaticClass<UMMTFrictionComponent>()
	{
		return UMMTFrictionComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMMTFrictionComponent(Z_Construct_UClass_UMMTFrictionComponent, &UMMTFrictionComponent::StaticClass, TEXT("/Script/MMT"), TEXT("UMMTFrictionComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMMTFrictionComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
