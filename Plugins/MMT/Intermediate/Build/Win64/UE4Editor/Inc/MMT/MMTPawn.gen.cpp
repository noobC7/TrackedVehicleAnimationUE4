// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MMT/Public/MMTPawn.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMMTPawn() {}
// Cross Module References
	MMT_API UClass* Z_Construct_UClass_AMMTPawn_NoRegister();
	MMT_API UClass* Z_Construct_UClass_AMMTPawn();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_MMT();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AMMTPawn::execMMTGetTransformThisPawn)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=P_THIS->MMTGetTransformThisPawn();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMMTPawn::execMMTAfterPhysicsTick)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MMTAfterPhysicsTick_Implementation(Z_Param_DeltaTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMMTPawn::execMMTPhysicsTick)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_SubstepDeltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MMTPhysicsTick_Implementation(Z_Param_SubstepDeltaTime);
		P_NATIVE_END;
	}
	static FName NAME_AMMTPawn_MMTAfterPhysicsTick = FName(TEXT("MMTAfterPhysicsTick"));
	void AMMTPawn::MMTAfterPhysicsTick(float DeltaTime)
	{
		MMTPawn_eventMMTAfterPhysicsTick_Parms Parms;
		Parms.DeltaTime=DeltaTime;
		ProcessEvent(FindFunctionChecked(NAME_AMMTPawn_MMTAfterPhysicsTick),&Parms);
	}
	static FName NAME_AMMTPawn_MMTPhysicsTick = FName(TEXT("MMTPhysicsTick"));
	void AMMTPawn::MMTPhysicsTick(float SubstepDeltaTime)
	{
		MMTPawn_eventMMTPhysicsTick_Parms Parms;
		Parms.SubstepDeltaTime=SubstepDeltaTime;
		ProcessEvent(FindFunctionChecked(NAME_AMMTPawn_MMTPhysicsTick),&Parms);
	}
	void AMMTPawn::StaticRegisterNativesAMMTPawn()
	{
		UClass* Class = AMMTPawn::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "MMTAfterPhysicsTick", &AMMTPawn::execMMTAfterPhysicsTick },
			{ "MMTGetTransformThisPawn", &AMMTPawn::execMMTGetTransformThisPawn },
			{ "MMTPhysicsTick", &AMMTPawn::execMMTPhysicsTick },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMMTPawn_MMTAfterPhysicsTick_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMMTPawn_MMTAfterPhysicsTick_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MMTPawn_eventMMTAfterPhysicsTick_Parms, DeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMMTPawn_MMTAfterPhysicsTick_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMMTPawn_MMTAfterPhysicsTick_Statics::NewProp_DeltaTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMMTPawn_MMTAfterPhysicsTick_Statics::Function_MetaDataParams[] = {
		{ "Category", "MMT" },
		{ "Comment", "/* This event is called ones per frame after physics update. */" },
		{ "DisplayName", "MMT Post-Physics Tick" },
		{ "ModuleRelativePath", "Public/MMTPawn.h" },
		{ "ToolTip", "This event is called ones per frame after physics update." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMMTPawn_MMTAfterPhysicsTick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMMTPawn, nullptr, "MMTAfterPhysicsTick", nullptr, nullptr, sizeof(MMTPawn_eventMMTAfterPhysicsTick_Parms), Z_Construct_UFunction_AMMTPawn_MMTAfterPhysicsTick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMMTPawn_MMTAfterPhysicsTick_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMMTPawn_MMTAfterPhysicsTick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMMTPawn_MMTAfterPhysicsTick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMMTPawn_MMTAfterPhysicsTick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMMTPawn_MMTAfterPhysicsTick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMMTPawn_MMTGetTransformThisPawn_Statics
	{
		struct MMTPawn_eventMMTGetTransformThisPawn_Parms
		{
			FTransform ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMMTPawn_MMTGetTransformThisPawn_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MMTPawn_eventMMTGetTransformThisPawn_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMMTPawn_MMTGetTransformThisPawn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMMTPawn_MMTGetTransformThisPawn_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMMTPawn_MMTGetTransformThisPawn_Statics::Function_MetaDataParams[] = {
		{ "Category", "MMT physics sub-stepping" },
		{ "Comment", "/**\n\x09*\x09Get world-space transform of this pawn. BodyInstance is used to retrieve transform, its up-to date with physics sub-stepping.\n\x09*\x09@return\x09\x09\x09Pawn's transform in world space\n\x09*/" },
		{ "DisplayName", "MMT Get Transform -Pawn" },
		{ "ModuleRelativePath", "Public/MMTPawn.h" },
		{ "ToolTip", "Get world-space transform of this pawn. BodyInstance is used to retrieve transform, its up-to date with physics sub-stepping.\n@return                 Pawn's transform in world space" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMMTPawn_MMTGetTransformThisPawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMMTPawn, nullptr, "MMTGetTransformThisPawn", nullptr, nullptr, sizeof(MMTPawn_eventMMTGetTransformThisPawn_Parms), Z_Construct_UFunction_AMMTPawn_MMTGetTransformThisPawn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMMTPawn_MMTGetTransformThisPawn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMMTPawn_MMTGetTransformThisPawn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMMTPawn_MMTGetTransformThisPawn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMMTPawn_MMTGetTransformThisPawn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMMTPawn_MMTGetTransformThisPawn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMMTPawn_MMTPhysicsTick_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SubstepDeltaTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMMTPawn_MMTPhysicsTick_Statics::NewProp_SubstepDeltaTime = { "SubstepDeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MMTPawn_eventMMTPhysicsTick_Parms, SubstepDeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMMTPawn_MMTPhysicsTick_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMMTPawn_MMTPhysicsTick_Statics::NewProp_SubstepDeltaTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMMTPawn_MMTPhysicsTick_Statics::Function_MetaDataParams[] = {
		{ "Category", "MMT physics sub-stepping" },
		{ "Comment", "/* This event is called on every physics tick, including sub-steps. */" },
		{ "DisplayName", "MMT Physics Tick" },
		{ "ModuleRelativePath", "Public/MMTPawn.h" },
		{ "ToolTip", "This event is called on every physics tick, including sub-steps." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMMTPawn_MMTPhysicsTick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMMTPawn, nullptr, "MMTPhysicsTick", nullptr, nullptr, sizeof(MMTPawn_eventMMTPhysicsTick_Parms), Z_Construct_UFunction_AMMTPawn_MMTPhysicsTick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMMTPawn_MMTPhysicsTick_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMMTPawn_MMTPhysicsTick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMMTPawn_MMTPhysicsTick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMMTPawn_MMTPhysicsTick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMMTPawn_MMTPhysicsTick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMMTPawn_NoRegister()
	{
		return AMMTPawn::StaticClass();
	}
	struct Z_Construct_UClass_AMMTPawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MMTPawnTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MMTPawnTransform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PawnRootComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PawnRootComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMMTPawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_MMT,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMMTPawn_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMMTPawn_MMTAfterPhysicsTick, "MMTAfterPhysicsTick" }, // 2795250357
		{ &Z_Construct_UFunction_AMMTPawn_MMTGetTransformThisPawn, "MMTGetTransformThisPawn" }, // 3785546030
		{ &Z_Construct_UFunction_AMMTPawn_MMTPhysicsTick, "MMTPhysicsTick" }, // 2609881313
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMMTPawn_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MMTPawn.h" },
		{ "ModuleRelativePath", "Public/MMTPawn.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMMTPawn_Statics::NewProp_MMTPawnTransform_MetaData[] = {
		{ "Category", "MMTPawn" },
		{ "Comment", "// Pawn transform that is updated during sub-stepping\n" },
		{ "ModuleRelativePath", "Public/MMTPawn.h" },
		{ "ToolTip", "Pawn transform that is updated during sub-stepping" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMMTPawn_Statics::NewProp_MMTPawnTransform = { "MMTPawnTransform", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMMTPawn, MMTPawnTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_AMMTPawn_Statics::NewProp_MMTPawnTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMMTPawn_Statics::NewProp_MMTPawnTransform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMMTPawn_Statics::NewProp_PawnRootComponent_MetaData[] = {
		{ "Comment", "// Reference to MMTPawn root component\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MMTPawn.h" },
		{ "ToolTip", "Reference to MMTPawn root component" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMMTPawn_Statics::NewProp_PawnRootComponent = { "PawnRootComponent", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMMTPawn, PawnRootComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMMTPawn_Statics::NewProp_PawnRootComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMMTPawn_Statics::NewProp_PawnRootComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMMTPawn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMMTPawn_Statics::NewProp_MMTPawnTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMMTPawn_Statics::NewProp_PawnRootComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMMTPawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMMTPawn>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMMTPawn_Statics::ClassParams = {
		&AMMTPawn::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMMTPawn_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMMTPawn_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMMTPawn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMMTPawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMMTPawn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMMTPawn_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMMTPawn, 918150985);
	template<> MMT_API UClass* StaticClass<AMMTPawn>()
	{
		return AMMTPawn::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMMTPawn(Z_Construct_UClass_AMMTPawn, &AMMTPawn::StaticClass, TEXT("/Script/MMT"), TEXT("AMMTPawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMMTPawn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
