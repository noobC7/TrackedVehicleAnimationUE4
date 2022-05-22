// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MMT/Public/MMTContactPointDataStruct.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMMTContactPointDataStruct() {}
// Cross Module References
	MMT_API UScriptStruct* Z_Construct_UScriptStruct_FContactPointDataStruct();
	UPackage* Z_Construct_UPackage__Script_MMT();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	PHYSICSCORE_API UEnum* Z_Construct_UEnum_PhysicsCore_EPhysicalSurface();
// End Cross Module References
class UScriptStruct* FContactPointDataStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MMT_API uint32 Get_Z_Construct_UScriptStruct_FContactPointDataStruct_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FContactPointDataStruct, Z_Construct_UPackage__Script_MMT(), TEXT("ContactPointDataStruct"), sizeof(FContactPointDataStruct), Get_Z_Construct_UScriptStruct_FContactPointDataStruct_Hash());
	}
	return Singleton;
}
template<> MMT_API UScriptStruct* StaticStruct<FContactPointDataStruct>()
{
	return FContactPointDataStruct::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FContactPointDataStruct(FContactPointDataStruct::StaticStruct, TEXT("/Script/MMT"), TEXT("ContactPointDataStruct"), false, nullptr, nullptr);
static struct FScriptStruct_MMT_StaticRegisterNativesFContactPointDataStruct
{
	FScriptStruct_MMT_StaticRegisterNativesFContactPointDataStruct()
	{
		UScriptStruct::DeferCppStructOps<FContactPointDataStruct>(FName(TEXT("ContactPointDataStruct")));
	}
} ScriptStruct_MMT_StaticRegisterNativesFContactPointDataStruct;
	struct Z_Construct_UScriptStruct_FContactPointDataStruct_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsPointActive_MetaData[];
#endif
		static void NewProp_IsPointActive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsPointActive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InducedVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InducedVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImpactForceOrImpulseAtPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ImpactForceOrImpulseAtPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTreatAsImpulse_MetaData[];
#endif
		static void NewProp_bTreatAsImpulse_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTreatAsImpulse;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ContactPointLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ContactPointLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ContactPointNormal_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ContactPointNormal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PhysicalSurface_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PhysicalSurface;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FContactPointDataStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MMTContactPointDataStruct.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FContactPointDataStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FContactPointDataStruct>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FContactPointDataStruct_Statics::NewProp_IsPointActive_MetaData[] = {
		{ "Category", "MMT Friction Component" },
		{ "ModuleRelativePath", "Public/MMTContactPointDataStruct.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FContactPointDataStruct_Statics::NewProp_IsPointActive_SetBit(void* Obj)
	{
		((FContactPointDataStruct*)Obj)->IsPointActive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FContactPointDataStruct_Statics::NewProp_IsPointActive = { "IsPointActive", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FContactPointDataStruct), &Z_Construct_UScriptStruct_FContactPointDataStruct_Statics::NewProp_IsPointActive_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FContactPointDataStruct_Statics::NewProp_IsPointActive_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContactPointDataStruct_Statics::NewProp_IsPointActive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FContactPointDataStruct_Statics::NewProp_InducedVelocity_MetaData[] = {
		{ "Category", "MMT Friction Component" },
		{ "ModuleRelativePath", "Public/MMTContactPointDataStruct.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FContactPointDataStruct_Statics::NewProp_InducedVelocity = { "InducedVelocity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FContactPointDataStruct, InducedVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FContactPointDataStruct_Statics::NewProp_InducedVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContactPointDataStruct_Statics::NewProp_InducedVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FContactPointDataStruct_Statics::NewProp_ImpactForceOrImpulseAtPoint_MetaData[] = {
		{ "Category", "MMT Friction Component" },
		{ "ModuleRelativePath", "Public/MMTContactPointDataStruct.h" },
		{ "ToolTip", "Provide force of the impact at contact point in form of force or an impulse. Collision events provide Normal Impulse, but suspension pushing on the wheel against the ground, provides Force." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FContactPointDataStruct_Statics::NewProp_ImpactForceOrImpulseAtPoint = { "ImpactForceOrImpulseAtPoint", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FContactPointDataStruct, ImpactForceOrImpulseAtPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FContactPointDataStruct_Statics::NewProp_ImpactForceOrImpulseAtPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContactPointDataStruct_Statics::NewProp_ImpactForceOrImpulseAtPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FContactPointDataStruct_Statics::NewProp_bTreatAsImpulse_MetaData[] = {
		{ "Category", "MMT Friction Component" },
		{ "ModuleRelativePath", "Public/MMTContactPointDataStruct.h" },
		{ "ToolTip", "Should we treat ImpactForceOrImpulseAtPoint as impulse instead of force?" },
	};
#endif
	void Z_Construct_UScriptStruct_FContactPointDataStruct_Statics::NewProp_bTreatAsImpulse_SetBit(void* Obj)
	{
		((FContactPointDataStruct*)Obj)->bTreatAsImpulse = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FContactPointDataStruct_Statics::NewProp_bTreatAsImpulse = { "bTreatAsImpulse", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FContactPointDataStruct), &Z_Construct_UScriptStruct_FContactPointDataStruct_Statics::NewProp_bTreatAsImpulse_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FContactPointDataStruct_Statics::NewProp_bTreatAsImpulse_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContactPointDataStruct_Statics::NewProp_bTreatAsImpulse_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FContactPointDataStruct_Statics::NewProp_ContactPointLocation_MetaData[] = {
		{ "Category", "MMT Friction Component" },
		{ "ModuleRelativePath", "Public/MMTContactPointDataStruct.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FContactPointDataStruct_Statics::NewProp_ContactPointLocation = { "ContactPointLocation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FContactPointDataStruct, ContactPointLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FContactPointDataStruct_Statics::NewProp_ContactPointLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContactPointDataStruct_Statics::NewProp_ContactPointLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FContactPointDataStruct_Statics::NewProp_ContactPointNormal_MetaData[] = {
		{ "Category", "MMT Friction Component" },
		{ "ModuleRelativePath", "Public/MMTContactPointDataStruct.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FContactPointDataStruct_Statics::NewProp_ContactPointNormal = { "ContactPointNormal", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FContactPointDataStruct, ContactPointNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FContactPointDataStruct_Statics::NewProp_ContactPointNormal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContactPointDataStruct_Statics::NewProp_ContactPointNormal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FContactPointDataStruct_Statics::NewProp_PhysicalSurface_MetaData[] = {
		{ "Category", "MMT Friction Component" },
		{ "ModuleRelativePath", "Public/MMTContactPointDataStruct.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FContactPointDataStruct_Statics::NewProp_PhysicalSurface = { "PhysicalSurface", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FContactPointDataStruct, PhysicalSurface), Z_Construct_UEnum_PhysicsCore_EPhysicalSurface, METADATA_PARAMS(Z_Construct_UScriptStruct_FContactPointDataStruct_Statics::NewProp_PhysicalSurface_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContactPointDataStruct_Statics::NewProp_PhysicalSurface_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FContactPointDataStruct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FContactPointDataStruct_Statics::NewProp_IsPointActive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FContactPointDataStruct_Statics::NewProp_InducedVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FContactPointDataStruct_Statics::NewProp_ImpactForceOrImpulseAtPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FContactPointDataStruct_Statics::NewProp_bTreatAsImpulse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FContactPointDataStruct_Statics::NewProp_ContactPointLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FContactPointDataStruct_Statics::NewProp_ContactPointNormal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FContactPointDataStruct_Statics::NewProp_PhysicalSurface,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FContactPointDataStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MMT,
		nullptr,
		&NewStructOps,
		"ContactPointDataStruct",
		sizeof(FContactPointDataStruct),
		alignof(FContactPointDataStruct),
		Z_Construct_UScriptStruct_FContactPointDataStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContactPointDataStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FContactPointDataStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContactPointDataStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FContactPointDataStruct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FContactPointDataStruct_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MMT();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ContactPointDataStruct"), sizeof(FContactPointDataStruct), Get_Z_Construct_UScriptStruct_FContactPointDataStruct_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FContactPointDataStruct_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FContactPointDataStruct_Hash() { return 1675681320U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
