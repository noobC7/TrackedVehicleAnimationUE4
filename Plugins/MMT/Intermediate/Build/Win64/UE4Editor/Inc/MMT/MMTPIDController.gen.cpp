// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MMT/Public/MMTPIDController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMMTPIDController() {}
// Cross Module References
	MMT_API UClass* Z_Construct_UClass_UMMTPIDController_NoRegister();
	MMT_API UClass* Z_Construct_UClass_UMMTPIDController();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_MMT();
	MMT_API UScriptStruct* Z_Construct_UScriptStruct_FPIDErrorItemStruct();
// End Cross Module References
	DEFINE_FUNCTION(UMMTPIDController::execResetController)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetController();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMMTPIDController::execGetControlCoefficient)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetControlCoefficient();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMMTPIDController::execAddMeasuredError)
	{
		P_GET_STRUCT_REF(FPIDErrorItemStruct,Z_Param_Out_PIDErrorItem);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddMeasuredError(Z_Param_Out_PIDErrorItem);
		P_NATIVE_END;
	}
	void UMMTPIDController::StaticRegisterNativesUMMTPIDController()
	{
		UClass* Class = UMMTPIDController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddMeasuredError", &UMMTPIDController::execAddMeasuredError },
			{ "GetControlCoefficient", &UMMTPIDController::execGetControlCoefficient },
			{ "ResetController", &UMMTPIDController::execResetController },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMMTPIDController_AddMeasuredError_Statics
	{
		struct MMTPIDController_eventAddMeasuredError_Parms
		{
			FPIDErrorItemStruct PIDErrorItem;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PIDErrorItem_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PIDErrorItem;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMMTPIDController_AddMeasuredError_Statics::NewProp_PIDErrorItem_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMMTPIDController_AddMeasuredError_Statics::NewProp_PIDErrorItem = { "PIDErrorItem", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MMTPIDController_eventAddMeasuredError_Parms, PIDErrorItem), Z_Construct_UScriptStruct_FPIDErrorItemStruct, METADATA_PARAMS(Z_Construct_UFunction_UMMTPIDController_AddMeasuredError_Statics::NewProp_PIDErrorItem_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMMTPIDController_AddMeasuredError_Statics::NewProp_PIDErrorItem_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMMTPIDController_AddMeasuredError_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMMTPIDController_AddMeasuredError_Statics::NewProp_PIDErrorItem,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMMTPIDController_AddMeasuredError_Statics::Function_MetaDataParams[] = {
		{ "Category", "MMT PID Controller" },
		{ "Comment", "/**\n\x09*\x09""Add measurement error and delta time to PID Controller's memory \n\x09*\x09@param PIDErrorItem\x09measurement error and delta time item\n\x09*/" },
		{ "ModuleRelativePath", "Public/MMTPIDController.h" },
		{ "ToolTip", "Add measurement error and delta time to PID Controller's memory\n@param PIDErrorItem     measurement error and delta time item" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMMTPIDController_AddMeasuredError_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMMTPIDController, nullptr, "AddMeasuredError", nullptr, nullptr, sizeof(MMTPIDController_eventAddMeasuredError_Parms), Z_Construct_UFunction_UMMTPIDController_AddMeasuredError_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMMTPIDController_AddMeasuredError_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMMTPIDController_AddMeasuredError_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMMTPIDController_AddMeasuredError_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMMTPIDController_AddMeasuredError()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMMTPIDController_AddMeasuredError_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMMTPIDController_GetControlCoefficient_Statics
	{
		struct MMTPIDController_eventGetControlCoefficient_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMMTPIDController_GetControlCoefficient_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MMTPIDController_eventGetControlCoefficient_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMMTPIDController_GetControlCoefficient_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMMTPIDController_GetControlCoefficient_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMMTPIDController_GetControlCoefficient_Statics::Function_MetaDataParams[] = {
		{ "Category", "MMT PID Controller" },
		{ "Comment", "/**\n\x09*\x09Get calculated control signal\n\x09*\x09@return calculated control signal\n\x09*/" },
		{ "ModuleRelativePath", "Public/MMTPIDController.h" },
		{ "ToolTip", "Get calculated control signal\n@return calculated control signal" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMMTPIDController_GetControlCoefficient_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMMTPIDController, nullptr, "GetControlCoefficient", nullptr, nullptr, sizeof(MMTPIDController_eventGetControlCoefficient_Parms), Z_Construct_UFunction_UMMTPIDController_GetControlCoefficient_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMMTPIDController_GetControlCoefficient_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMMTPIDController_GetControlCoefficient_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMMTPIDController_GetControlCoefficient_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMMTPIDController_GetControlCoefficient()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMMTPIDController_GetControlCoefficient_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMMTPIDController_ResetController_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMMTPIDController_ResetController_Statics::Function_MetaDataParams[] = {
		{ "Category", "MMT PID Controller" },
		{ "Comment", "/**\n\x09*\x09Resets PID Controller by deleting all previously measured errors\n\x09*/" },
		{ "ModuleRelativePath", "Public/MMTPIDController.h" },
		{ "ToolTip", "Resets PID Controller by deleting all previously measured errors" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMMTPIDController_ResetController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMMTPIDController, nullptr, "ResetController", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMMTPIDController_ResetController_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMMTPIDController_ResetController_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMMTPIDController_ResetController()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMMTPIDController_ResetController_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMMTPIDController_NoRegister()
	{
		return UMMTPIDController::StaticClass();
	}
	struct Z_Construct_UClass_UMMTPIDController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumOfErrorsToStore_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumOfErrorsToStore;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProportionalCoefficient_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ProportionalCoefficient;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IntegralCoefficient_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_IntegralCoefficient;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DerivativeCoefficient_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DerivativeCoefficient;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MeasuredErrors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeasuredErrors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MeasuredErrors;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMMTPIDController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_MMT,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMMTPIDController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMMTPIDController_AddMeasuredError, "AddMeasuredError" }, // 4267204234
		{ &Z_Construct_UFunction_UMMTPIDController_GetControlCoefficient, "GetControlCoefficient" }, // 4168362442
		{ &Z_Construct_UFunction_UMMTPIDController_ResetController, "ResetController" }, // 2414380503
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMMTPIDController_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "MMT" },
		{ "IncludePath", "MMTPIDController.h" },
		{ "ModuleRelativePath", "Public/MMTPIDController.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMMTPIDController_Statics::NewProp_NumOfErrorsToStore_MetaData[] = {
		{ "Category", "PID Settings" },
		{ "ClampMin", "3" },
		{ "ModuleRelativePath", "Public/MMTPIDController.h" },
		{ "ToolTip", "Minimum of 3 errors need to be stored. Storing more errors is necessary for Integral part of the controller as it corrects systematic errors of measurements taken over time." },
		{ "UIMin", "3" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMMTPIDController_Statics::NewProp_NumOfErrorsToStore = { "NumOfErrorsToStore", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMMTPIDController, NumOfErrorsToStore), METADATA_PARAMS(Z_Construct_UClass_UMMTPIDController_Statics::NewProp_NumOfErrorsToStore_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMMTPIDController_Statics::NewProp_NumOfErrorsToStore_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMMTPIDController_Statics::NewProp_ProportionalCoefficient_MetaData[] = {
		{ "Category", "PID Settings" },
		{ "ModuleRelativePath", "Public/MMTPIDController.h" },
		{ "ToolTip", "Proportional coefficient is responsible for how fast error should be corrected" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMMTPIDController_Statics::NewProp_ProportionalCoefficient = { "ProportionalCoefficient", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMMTPIDController, ProportionalCoefficient), METADATA_PARAMS(Z_Construct_UClass_UMMTPIDController_Statics::NewProp_ProportionalCoefficient_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMMTPIDController_Statics::NewProp_ProportionalCoefficient_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMMTPIDController_Statics::NewProp_IntegralCoefficient_MetaData[] = {
		{ "Category", "PID Settings" },
		{ "ModuleRelativePath", "Public/MMTPIDController.h" },
		{ "ToolTip", "Integral coefficient is responsible for correcting systematic errors of measurement over time" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMMTPIDController_Statics::NewProp_IntegralCoefficient = { "IntegralCoefficient", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMMTPIDController, IntegralCoefficient), METADATA_PARAMS(Z_Construct_UClass_UMMTPIDController_Statics::NewProp_IntegralCoefficient_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMMTPIDController_Statics::NewProp_IntegralCoefficient_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMMTPIDController_Statics::NewProp_DerivativeCoefficient_MetaData[] = {
		{ "Category", "PID Settings" },
		{ "ModuleRelativePath", "Public/MMTPIDController.h" },
		{ "ToolTip", "Derivative coefficient is responsible for correcting oscillation introduced by derivative coefficient" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMMTPIDController_Statics::NewProp_DerivativeCoefficient = { "DerivativeCoefficient", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMMTPIDController, DerivativeCoefficient), METADATA_PARAMS(Z_Construct_UClass_UMMTPIDController_Statics::NewProp_DerivativeCoefficient_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMMTPIDController_Statics::NewProp_DerivativeCoefficient_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMMTPIDController_Statics::NewProp_MeasuredErrors_Inner = { "MeasuredErrors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPIDErrorItemStruct, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMMTPIDController_Statics::NewProp_MeasuredErrors_MetaData[] = {
		{ "ModuleRelativePath", "Public/MMTPIDController.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMMTPIDController_Statics::NewProp_MeasuredErrors = { "MeasuredErrors", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMMTPIDController, MeasuredErrors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMMTPIDController_Statics::NewProp_MeasuredErrors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMMTPIDController_Statics::NewProp_MeasuredErrors_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMMTPIDController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMMTPIDController_Statics::NewProp_NumOfErrorsToStore,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMMTPIDController_Statics::NewProp_ProportionalCoefficient,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMMTPIDController_Statics::NewProp_IntegralCoefficient,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMMTPIDController_Statics::NewProp_DerivativeCoefficient,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMMTPIDController_Statics::NewProp_MeasuredErrors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMMTPIDController_Statics::NewProp_MeasuredErrors,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMMTPIDController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMMTPIDController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMMTPIDController_Statics::ClassParams = {
		&UMMTPIDController::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMMTPIDController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMMTPIDController_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UMMTPIDController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMMTPIDController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMMTPIDController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMMTPIDController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMMTPIDController, 1727454144);
	template<> MMT_API UClass* StaticClass<UMMTPIDController>()
	{
		return UMMTPIDController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMMTPIDController(Z_Construct_UClass_UMMTPIDController, &UMMTPIDController::StaticClass, TEXT("/Script/MMT"), TEXT("UMMTPIDController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMMTPIDController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
