// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MMT/Public/MMTPhysicalSurfaceFrictionCoefficient.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMMTPhysicalSurfaceFrictionCoefficient() {}
// Cross Module References
	MMT_API UScriptStruct* Z_Construct_UScriptStruct_FMMTPhysicalSurfaceFrictionCoefficients();
	UPackage* Z_Construct_UPackage__Script_MMT();
	PHYSICSCORE_API UEnum* Z_Construct_UEnum_PhysicsCore_EPhysicalSurface();
	MMT_API UScriptStruct* Z_Construct_UScriptStruct_FPhysicalSurfaceRollingFrictionCoefficientStruct();
	MMT_API UClass* Z_Construct_UClass_UMMTPhysicalSurfaceFrictionCoefficientsDataAsset_NoRegister();
	MMT_API UClass* Z_Construct_UClass_UMMTPhysicalSurfaceFrictionCoefficientsDataAsset();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
// End Cross Module References
class UScriptStruct* FMMTPhysicalSurfaceFrictionCoefficients::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MMT_API uint32 Get_Z_Construct_UScriptStruct_FMMTPhysicalSurfaceFrictionCoefficients_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMMTPhysicalSurfaceFrictionCoefficients, Z_Construct_UPackage__Script_MMT(), TEXT("MMTPhysicalSurfaceFrictionCoefficients"), sizeof(FMMTPhysicalSurfaceFrictionCoefficients), Get_Z_Construct_UScriptStruct_FMMTPhysicalSurfaceFrictionCoefficients_Hash());
	}
	return Singleton;
}
template<> MMT_API UScriptStruct* StaticStruct<FMMTPhysicalSurfaceFrictionCoefficients>()
{
	return FMMTPhysicalSurfaceFrictionCoefficients::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMMTPhysicalSurfaceFrictionCoefficients(FMMTPhysicalSurfaceFrictionCoefficients::StaticStruct, TEXT("/Script/MMT"), TEXT("MMTPhysicalSurfaceFrictionCoefficients"), false, nullptr, nullptr);
static struct FScriptStruct_MMT_StaticRegisterNativesFMMTPhysicalSurfaceFrictionCoefficients
{
	FScriptStruct_MMT_StaticRegisterNativesFMMTPhysicalSurfaceFrictionCoefficients()
	{
		UScriptStruct::DeferCppStructOps<FMMTPhysicalSurfaceFrictionCoefficients>(FName(TEXT("MMTPhysicalSurfaceFrictionCoefficients")));
	}
} ScriptStruct_MMT_StaticRegisterNativesFMMTPhysicalSurfaceFrictionCoefficients;
	struct Z_Construct_UScriptStruct_FMMTPhysicalSurfaceFrictionCoefficients_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PhysicalSurface_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PhysicalSurface;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrictionScaleFactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FrictionScaleFactor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RollingFrictionCoefficient_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RollingFrictionCoefficient;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMMTPhysicalSurfaceFrictionCoefficients_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MMTPhysicalSurfaceFrictionCoefficient.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMMTPhysicalSurfaceFrictionCoefficients_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMMTPhysicalSurfaceFrictionCoefficients>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMMTPhysicalSurfaceFrictionCoefficients_Statics::NewProp_PhysicalSurface_MetaData[] = {
		{ "Category", "MMTPhysicalSurfaceFrictionCoefficients" },
		{ "ModuleRelativePath", "Public/MMTPhysicalSurfaceFrictionCoefficient.h" },
		{ "ToolTip", "Physical surface for which we define friction properties" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMMTPhysicalSurfaceFrictionCoefficients_Statics::NewProp_PhysicalSurface = { "PhysicalSurface", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMMTPhysicalSurfaceFrictionCoefficients, PhysicalSurface), Z_Construct_UEnum_PhysicsCore_EPhysicalSurface, METADATA_PARAMS(Z_Construct_UScriptStruct_FMMTPhysicalSurfaceFrictionCoefficients_Statics::NewProp_PhysicalSurface_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMMTPhysicalSurfaceFrictionCoefficients_Statics::NewProp_PhysicalSurface_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMMTPhysicalSurfaceFrictionCoefficients_Statics::NewProp_FrictionScaleFactor_MetaData[] = {
		{ "Category", "MMTPhysicalSurfaceFrictionCoefficients" },
		{ "ModuleRelativePath", "Public/MMTPhysicalSurfaceFrictionCoefficient.h" },
		{ "ToolTip", "Scale of the friction coefficient in respect to surface type. For example Ice would have smaller friction such as 0.1, while asphalt would improve friction with scale of 1.2" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMMTPhysicalSurfaceFrictionCoefficients_Statics::NewProp_FrictionScaleFactor = { "FrictionScaleFactor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMMTPhysicalSurfaceFrictionCoefficients, FrictionScaleFactor), METADATA_PARAMS(Z_Construct_UScriptStruct_FMMTPhysicalSurfaceFrictionCoefficients_Statics::NewProp_FrictionScaleFactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMMTPhysicalSurfaceFrictionCoefficients_Statics::NewProp_FrictionScaleFactor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMMTPhysicalSurfaceFrictionCoefficients_Statics::NewProp_RollingFrictionCoefficient_MetaData[] = {
		{ "Category", "MMTPhysicalSurfaceFrictionCoefficients" },
		{ "ModuleRelativePath", "Public/MMTPhysicalSurfaceFrictionCoefficient.h" },
		{ "ToolTip", "Higher rolling friction coefficient leads to higher rolling friction force" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMMTPhysicalSurfaceFrictionCoefficients_Statics::NewProp_RollingFrictionCoefficient = { "RollingFrictionCoefficient", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMMTPhysicalSurfaceFrictionCoefficients, RollingFrictionCoefficient), METADATA_PARAMS(Z_Construct_UScriptStruct_FMMTPhysicalSurfaceFrictionCoefficients_Statics::NewProp_RollingFrictionCoefficient_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMMTPhysicalSurfaceFrictionCoefficients_Statics::NewProp_RollingFrictionCoefficient_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMMTPhysicalSurfaceFrictionCoefficients_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMMTPhysicalSurfaceFrictionCoefficients_Statics::NewProp_PhysicalSurface,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMMTPhysicalSurfaceFrictionCoefficients_Statics::NewProp_FrictionScaleFactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMMTPhysicalSurfaceFrictionCoefficients_Statics::NewProp_RollingFrictionCoefficient,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMMTPhysicalSurfaceFrictionCoefficients_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MMT,
		nullptr,
		&NewStructOps,
		"MMTPhysicalSurfaceFrictionCoefficients",
		sizeof(FMMTPhysicalSurfaceFrictionCoefficients),
		alignof(FMMTPhysicalSurfaceFrictionCoefficients),
		Z_Construct_UScriptStruct_FMMTPhysicalSurfaceFrictionCoefficients_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMMTPhysicalSurfaceFrictionCoefficients_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMMTPhysicalSurfaceFrictionCoefficients_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMMTPhysicalSurfaceFrictionCoefficients_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMMTPhysicalSurfaceFrictionCoefficients()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMMTPhysicalSurfaceFrictionCoefficients_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MMT();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MMTPhysicalSurfaceFrictionCoefficients"), sizeof(FMMTPhysicalSurfaceFrictionCoefficients), Get_Z_Construct_UScriptStruct_FMMTPhysicalSurfaceFrictionCoefficients_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMMTPhysicalSurfaceFrictionCoefficients_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMMTPhysicalSurfaceFrictionCoefficients_Hash() { return 1839796214U; }
class UScriptStruct* FPhysicalSurfaceRollingFrictionCoefficientStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MMT_API uint32 Get_Z_Construct_UScriptStruct_FPhysicalSurfaceRollingFrictionCoefficientStruct_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPhysicalSurfaceRollingFrictionCoefficientStruct, Z_Construct_UPackage__Script_MMT(), TEXT("PhysicalSurfaceRollingFrictionCoefficientStruct"), sizeof(FPhysicalSurfaceRollingFrictionCoefficientStruct), Get_Z_Construct_UScriptStruct_FPhysicalSurfaceRollingFrictionCoefficientStruct_Hash());
	}
	return Singleton;
}
template<> MMT_API UScriptStruct* StaticStruct<FPhysicalSurfaceRollingFrictionCoefficientStruct>()
{
	return FPhysicalSurfaceRollingFrictionCoefficientStruct::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPhysicalSurfaceRollingFrictionCoefficientStruct(FPhysicalSurfaceRollingFrictionCoefficientStruct::StaticStruct, TEXT("/Script/MMT"), TEXT("PhysicalSurfaceRollingFrictionCoefficientStruct"), false, nullptr, nullptr);
static struct FScriptStruct_MMT_StaticRegisterNativesFPhysicalSurfaceRollingFrictionCoefficientStruct
{
	FScriptStruct_MMT_StaticRegisterNativesFPhysicalSurfaceRollingFrictionCoefficientStruct()
	{
		UScriptStruct::DeferCppStructOps<FPhysicalSurfaceRollingFrictionCoefficientStruct>(FName(TEXT("PhysicalSurfaceRollingFrictionCoefficientStruct")));
	}
} ScriptStruct_MMT_StaticRegisterNativesFPhysicalSurfaceRollingFrictionCoefficientStruct;
	struct Z_Construct_UScriptStruct_FPhysicalSurfaceRollingFrictionCoefficientStruct_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PhysicalSurface_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PhysicalSurface;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RollingFrictionCoefficient_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RollingFrictionCoefficient;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysicalSurfaceRollingFrictionCoefficientStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MMTPhysicalSurfaceFrictionCoefficient.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPhysicalSurfaceRollingFrictionCoefficientStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPhysicalSurfaceRollingFrictionCoefficientStruct>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysicalSurfaceRollingFrictionCoefficientStruct_Statics::NewProp_PhysicalSurface_MetaData[] = {
		{ "Category", "MMT Friction" },
		{ "ModuleRelativePath", "Public/MMTPhysicalSurfaceFrictionCoefficient.h" },
		{ "ToolTip", "Physical surface for which we want to define rolling friction coefficient" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPhysicalSurfaceRollingFrictionCoefficientStruct_Statics::NewProp_PhysicalSurface = { "PhysicalSurface", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPhysicalSurfaceRollingFrictionCoefficientStruct, PhysicalSurface), Z_Construct_UEnum_PhysicsCore_EPhysicalSurface, METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysicalSurfaceRollingFrictionCoefficientStruct_Statics::NewProp_PhysicalSurface_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicalSurfaceRollingFrictionCoefficientStruct_Statics::NewProp_PhysicalSurface_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysicalSurfaceRollingFrictionCoefficientStruct_Statics::NewProp_RollingFrictionCoefficient_MetaData[] = {
		{ "Category", "MMT Friction" },
		{ "ModuleRelativePath", "Public/MMTPhysicalSurfaceFrictionCoefficient.h" },
		{ "ToolTip", "Higher rolling friction coefficient leads to higher rolling friction force" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPhysicalSurfaceRollingFrictionCoefficientStruct_Statics::NewProp_RollingFrictionCoefficient = { "RollingFrictionCoefficient", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPhysicalSurfaceRollingFrictionCoefficientStruct, RollingFrictionCoefficient), METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysicalSurfaceRollingFrictionCoefficientStruct_Statics::NewProp_RollingFrictionCoefficient_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicalSurfaceRollingFrictionCoefficientStruct_Statics::NewProp_RollingFrictionCoefficient_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPhysicalSurfaceRollingFrictionCoefficientStruct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysicalSurfaceRollingFrictionCoefficientStruct_Statics::NewProp_PhysicalSurface,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysicalSurfaceRollingFrictionCoefficientStruct_Statics::NewProp_RollingFrictionCoefficient,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPhysicalSurfaceRollingFrictionCoefficientStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MMT,
		nullptr,
		&NewStructOps,
		"PhysicalSurfaceRollingFrictionCoefficientStruct",
		sizeof(FPhysicalSurfaceRollingFrictionCoefficientStruct),
		alignof(FPhysicalSurfaceRollingFrictionCoefficientStruct),
		Z_Construct_UScriptStruct_FPhysicalSurfaceRollingFrictionCoefficientStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicalSurfaceRollingFrictionCoefficientStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysicalSurfaceRollingFrictionCoefficientStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicalSurfaceRollingFrictionCoefficientStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPhysicalSurfaceRollingFrictionCoefficientStruct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPhysicalSurfaceRollingFrictionCoefficientStruct_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MMT();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PhysicalSurfaceRollingFrictionCoefficientStruct"), sizeof(FPhysicalSurfaceRollingFrictionCoefficientStruct), Get_Z_Construct_UScriptStruct_FPhysicalSurfaceRollingFrictionCoefficientStruct_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPhysicalSurfaceRollingFrictionCoefficientStruct_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPhysicalSurfaceRollingFrictionCoefficientStruct_Hash() { return 1295740604U; }
	void UMMTPhysicalSurfaceFrictionCoefficientsDataAsset::StaticRegisterNativesUMMTPhysicalSurfaceFrictionCoefficientsDataAsset()
	{
	}
	UClass* Z_Construct_UClass_UMMTPhysicalSurfaceFrictionCoefficientsDataAsset_NoRegister()
	{
		return UMMTPhysicalSurfaceFrictionCoefficientsDataAsset::StaticClass();
	}
	struct Z_Construct_UClass_UMMTPhysicalSurfaceFrictionCoefficientsDataAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PhysicalSurfaceFrictionCoefficients_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PhysicalSurfaceFrictionCoefficients_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PhysicalSurfaceFrictionCoefficients;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMMTPhysicalSurfaceFrictionCoefficientsDataAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_MMT,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMMTPhysicalSurfaceFrictionCoefficientsDataAsset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "MMTPhysicalSurfaceFrictionCoefficient.h" },
		{ "ModuleRelativePath", "Public/MMTPhysicalSurfaceFrictionCoefficient.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMMTPhysicalSurfaceFrictionCoefficientsDataAsset_Statics::NewProp_PhysicalSurfaceFrictionCoefficients_Inner = { "PhysicalSurfaceFrictionCoefficients", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMMTPhysicalSurfaceFrictionCoefficients, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMMTPhysicalSurfaceFrictionCoefficientsDataAsset_Statics::NewProp_PhysicalSurfaceFrictionCoefficients_MetaData[] = {
		{ "Category", "MMTPhysicalSurfaceFrictionCoefficientsDataAsset" },
		{ "ModuleRelativePath", "Public/MMTPhysicalSurfaceFrictionCoefficient.h" },
		{ "ToolTip", "Friction coefficients for different physical surfaces" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMMTPhysicalSurfaceFrictionCoefficientsDataAsset_Statics::NewProp_PhysicalSurfaceFrictionCoefficients = { "PhysicalSurfaceFrictionCoefficients", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMMTPhysicalSurfaceFrictionCoefficientsDataAsset, PhysicalSurfaceFrictionCoefficients), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMMTPhysicalSurfaceFrictionCoefficientsDataAsset_Statics::NewProp_PhysicalSurfaceFrictionCoefficients_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMMTPhysicalSurfaceFrictionCoefficientsDataAsset_Statics::NewProp_PhysicalSurfaceFrictionCoefficients_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMMTPhysicalSurfaceFrictionCoefficientsDataAsset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMMTPhysicalSurfaceFrictionCoefficientsDataAsset_Statics::NewProp_PhysicalSurfaceFrictionCoefficients_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMMTPhysicalSurfaceFrictionCoefficientsDataAsset_Statics::NewProp_PhysicalSurfaceFrictionCoefficients,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMMTPhysicalSurfaceFrictionCoefficientsDataAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMMTPhysicalSurfaceFrictionCoefficientsDataAsset>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMMTPhysicalSurfaceFrictionCoefficientsDataAsset_Statics::ClassParams = {
		&UMMTPhysicalSurfaceFrictionCoefficientsDataAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMMTPhysicalSurfaceFrictionCoefficientsDataAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMMTPhysicalSurfaceFrictionCoefficientsDataAsset_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMMTPhysicalSurfaceFrictionCoefficientsDataAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMMTPhysicalSurfaceFrictionCoefficientsDataAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMMTPhysicalSurfaceFrictionCoefficientsDataAsset()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMMTPhysicalSurfaceFrictionCoefficientsDataAsset_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMMTPhysicalSurfaceFrictionCoefficientsDataAsset, 1228474547);
	template<> MMT_API UClass* StaticClass<UMMTPhysicalSurfaceFrictionCoefficientsDataAsset>()
	{
		return UMMTPhysicalSurfaceFrictionCoefficientsDataAsset::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMMTPhysicalSurfaceFrictionCoefficientsDataAsset(Z_Construct_UClass_UMMTPhysicalSurfaceFrictionCoefficientsDataAsset, &UMMTPhysicalSurfaceFrictionCoefficientsDataAsset::StaticClass, TEXT("/Script/MMT"), TEXT("UMMTPhysicalSurfaceFrictionCoefficientsDataAsset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMMTPhysicalSurfaceFrictionCoefficientsDataAsset);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
