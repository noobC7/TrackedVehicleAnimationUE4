// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MMT/Public/MMTFrictionSolver.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMMTFrictionSolver() {}
// Cross Module References
	MMT_API UClass* Z_Construct_UClass_UMMTFrictionSolver_NoRegister();
	MMT_API UClass* Z_Construct_UClass_UMMTFrictionSolver();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_MMT();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMeshComponent_NoRegister();
	MMT_API UClass* Z_Construct_UClass_UMMTPhysicalSurfaceFrictionCoefficientsDataAsset_NoRegister();
	MMT_API UClass* Z_Construct_UClass_UMMTFrictionSetPassive_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UMMTFrictionSolver::execInitialize)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Initialize();
		P_NATIVE_END;
	}
	void UMMTFrictionSolver::StaticRegisterNativesUMMTFrictionSolver()
	{
		UClass* Class = UMMTFrictionSolver::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Initialize", &UMMTFrictionSolver::execInitialize },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMMTFrictionSolver_Initialize_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMMTFrictionSolver_Initialize_Statics::Function_MetaDataParams[] = {
		{ "Category", "MMT Friction Solver" },
		{ "Comment", "// Initializes class logic, finds references and pre-calculates parameters. Expected to be called from BeginPlay only\n" },
		{ "ModuleRelativePath", "Public/MMTFrictionSolver.h" },
		{ "ToolTip", "Initializes class logic, finds references and pre-calculates parameters. Expected to be called from BeginPlay only" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMMTFrictionSolver_Initialize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMMTFrictionSolver, nullptr, "Initialize", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMMTFrictionSolver_Initialize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMMTFrictionSolver_Initialize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMMTFrictionSolver_Initialize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMMTFrictionSolver_Initialize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMMTFrictionSolver_NoRegister()
	{
		return UMMTFrictionSolver::StaticClass();
	}
	struct Z_Construct_UClass_UMMTFrictionSolver_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParentComponentRef_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ParentComponentRef;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EffectedComponentMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EffectedComponentMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ComponentName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ComponentName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ComponentsParentName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ComponentsParentName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PassivePhysicalSurfaceFrictionCoefficients_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PassivePhysicalSurfaceFrictionCoefficients;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PassiveFrictionSets_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PassiveFrictionSets_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PassiveFrictionSets;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMMTFrictionSolver_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MMT,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMMTFrictionSolver_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMMTFrictionSolver_Initialize, "Initialize" }, // 1284773394
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMMTFrictionSolver_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MMTFrictionSolver.h" },
		{ "ModuleRelativePath", "Public/MMTFrictionSolver.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMMTFrictionSolver_Statics::NewProp_bDisabled_MetaData[] = {
		{ "ModuleRelativePath", "Public/MMTFrictionSolver.h" },
	};
#endif
	void Z_Construct_UClass_UMMTFrictionSolver_Statics::NewProp_bDisabled_SetBit(void* Obj)
	{
		((UMMTFrictionSolver*)Obj)->bDisabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMMTFrictionSolver_Statics::NewProp_bDisabled = { "bDisabled", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMMTFrictionSolver), &Z_Construct_UClass_UMMTFrictionSolver_Statics::NewProp_bDisabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMMTFrictionSolver_Statics::NewProp_bDisabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMMTFrictionSolver_Statics::NewProp_bDisabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMMTFrictionSolver_Statics::NewProp_bDebugMode_MetaData[] = {
		{ "ModuleRelativePath", "Public/MMTFrictionSolver.h" },
	};
#endif
	void Z_Construct_UClass_UMMTFrictionSolver_Statics::NewProp_bDebugMode_SetBit(void* Obj)
	{
		((UMMTFrictionSolver*)Obj)->bDebugMode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMMTFrictionSolver_Statics::NewProp_bDebugMode = { "bDebugMode", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMMTFrictionSolver), &Z_Construct_UClass_UMMTFrictionSolver_Statics::NewProp_bDebugMode_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMMTFrictionSolver_Statics::NewProp_bDebugMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMMTFrictionSolver_Statics::NewProp_bDebugMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMMTFrictionSolver_Statics::NewProp_ParentComponentRef_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MMTFrictionSolver.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMMTFrictionSolver_Statics::NewProp_ParentComponentRef = { "ParentComponentRef", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMMTFrictionSolver, ParentComponentRef), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMMTFrictionSolver_Statics::NewProp_ParentComponentRef_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMMTFrictionSolver_Statics::NewProp_ParentComponentRef_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMMTFrictionSolver_Statics::NewProp_EffectedComponentMesh_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MMTFrictionSolver.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMMTFrictionSolver_Statics::NewProp_EffectedComponentMesh = { "EffectedComponentMesh", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMMTFrictionSolver, EffectedComponentMesh), Z_Construct_UClass_UMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMMTFrictionSolver_Statics::NewProp_EffectedComponentMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMMTFrictionSolver_Statics::NewProp_EffectedComponentMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMMTFrictionSolver_Statics::NewProp_ComponentName_MetaData[] = {
		{ "ModuleRelativePath", "Public/MMTFrictionSolver.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMMTFrictionSolver_Statics::NewProp_ComponentName = { "ComponentName", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMMTFrictionSolver, ComponentName), METADATA_PARAMS(Z_Construct_UClass_UMMTFrictionSolver_Statics::NewProp_ComponentName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMMTFrictionSolver_Statics::NewProp_ComponentName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMMTFrictionSolver_Statics::NewProp_ComponentsParentName_MetaData[] = {
		{ "ModuleRelativePath", "Public/MMTFrictionSolver.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMMTFrictionSolver_Statics::NewProp_ComponentsParentName = { "ComponentsParentName", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMMTFrictionSolver, ComponentsParentName), METADATA_PARAMS(Z_Construct_UClass_UMMTFrictionSolver_Statics::NewProp_ComponentsParentName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMMTFrictionSolver_Statics::NewProp_ComponentsParentName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMMTFrictionSolver_Statics::NewProp_PassivePhysicalSurfaceFrictionCoefficients_MetaData[] = {
		{ "ModuleRelativePath", "Public/MMTFrictionSolver.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMMTFrictionSolver_Statics::NewProp_PassivePhysicalSurfaceFrictionCoefficients = { "PassivePhysicalSurfaceFrictionCoefficients", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMMTFrictionSolver, PassivePhysicalSurfaceFrictionCoefficients), Z_Construct_UClass_UMMTPhysicalSurfaceFrictionCoefficientsDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMMTFrictionSolver_Statics::NewProp_PassivePhysicalSurfaceFrictionCoefficients_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMMTFrictionSolver_Statics::NewProp_PassivePhysicalSurfaceFrictionCoefficients_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMMTFrictionSolver_Statics::NewProp_PassiveFrictionSets_Inner = { "PassiveFrictionSets", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMMTFrictionSetPassive_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMMTFrictionSolver_Statics::NewProp_PassiveFrictionSets_MetaData[] = {
		{ "ModuleRelativePath", "Public/MMTFrictionSolver.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMMTFrictionSolver_Statics::NewProp_PassiveFrictionSets = { "PassiveFrictionSets", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMMTFrictionSolver, PassiveFrictionSets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMMTFrictionSolver_Statics::NewProp_PassiveFrictionSets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMMTFrictionSolver_Statics::NewProp_PassiveFrictionSets_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMMTFrictionSolver_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMMTFrictionSolver_Statics::NewProp_bDisabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMMTFrictionSolver_Statics::NewProp_bDebugMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMMTFrictionSolver_Statics::NewProp_ParentComponentRef,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMMTFrictionSolver_Statics::NewProp_EffectedComponentMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMMTFrictionSolver_Statics::NewProp_ComponentName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMMTFrictionSolver_Statics::NewProp_ComponentsParentName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMMTFrictionSolver_Statics::NewProp_PassivePhysicalSurfaceFrictionCoefficients,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMMTFrictionSolver_Statics::NewProp_PassiveFrictionSets_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMMTFrictionSolver_Statics::NewProp_PassiveFrictionSets,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMMTFrictionSolver_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMMTFrictionSolver>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMMTFrictionSolver_Statics::ClassParams = {
		&UMMTFrictionSolver::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMMTFrictionSolver_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMMTFrictionSolver_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMMTFrictionSolver_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMMTFrictionSolver_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMMTFrictionSolver()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMMTFrictionSolver_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMMTFrictionSolver, 2443592398);
	template<> MMT_API UClass* StaticClass<UMMTFrictionSolver>()
	{
		return UMMTFrictionSolver::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMMTFrictionSolver(Z_Construct_UClass_UMMTFrictionSolver, &UMMTFrictionSolver::StaticClass, TEXT("/Script/MMT"), TEXT("UMMTFrictionSolver"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMMTFrictionSolver);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
