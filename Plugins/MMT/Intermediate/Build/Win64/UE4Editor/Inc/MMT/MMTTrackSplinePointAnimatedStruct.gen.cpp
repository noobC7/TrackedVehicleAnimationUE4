// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MMT/Public/MMTTrackSplinePointAnimatedStruct.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMMTTrackSplinePointAnimatedStruct() {}
// Cross Module References
	MMT_API UScriptStruct* Z_Construct_UScriptStruct_FTrackSplinePointAnimatedStruct();
	UPackage* Z_Construct_UPackage__Script_MMT();
	ENGINE_API UClass* Z_Construct_UClass_UMeshComponent_NoRegister();
// End Cross Module References
class UScriptStruct* FTrackSplinePointAnimatedStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MMT_API uint32 Get_Z_Construct_UScriptStruct_FTrackSplinePointAnimatedStruct_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTrackSplinePointAnimatedStruct, Z_Construct_UPackage__Script_MMT(), TEXT("TrackSplinePointAnimatedStruct"), sizeof(FTrackSplinePointAnimatedStruct), Get_Z_Construct_UScriptStruct_FTrackSplinePointAnimatedStruct_Hash());
	}
	return Singleton;
}
template<> MMT_API UScriptStruct* StaticStruct<FTrackSplinePointAnimatedStruct>()
{
	return FTrackSplinePointAnimatedStruct::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTrackSplinePointAnimatedStruct(FTrackSplinePointAnimatedStruct::StaticStruct, TEXT("/Script/MMT"), TEXT("TrackSplinePointAnimatedStruct"), false, nullptr, nullptr);
static struct FScriptStruct_MMT_StaticRegisterNativesFTrackSplinePointAnimatedStruct
{
	FScriptStruct_MMT_StaticRegisterNativesFTrackSplinePointAnimatedStruct()
	{
		UScriptStruct::DeferCppStructOps<FTrackSplinePointAnimatedStruct>(FName(TEXT("TrackSplinePointAnimatedStruct")));
	}
} ScriptStruct_MMT_StaticRegisterNativesFTrackSplinePointAnimatedStruct;
	struct Z_Construct_UScriptStruct_FTrackSplinePointAnimatedStruct_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SplinePointIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SplinePointIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticMeshName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StaticMeshName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticMeshSocketName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_StaticMeshSocketName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTrackSplinePointAnimatedStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MMTTrackSplinePointAnimatedStruct.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTrackSplinePointAnimatedStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTrackSplinePointAnimatedStruct>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTrackSplinePointAnimatedStruct_Statics::NewProp_SplinePointIndex_MetaData[] = {
		{ "Category", "MMT Track Animation Component" },
		{ "ModuleRelativePath", "Public/MMTTrackSplinePointAnimatedStruct.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTrackSplinePointAnimatedStruct_Statics::NewProp_SplinePointIndex = { "SplinePointIndex", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTrackSplinePointAnimatedStruct, SplinePointIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FTrackSplinePointAnimatedStruct_Statics::NewProp_SplinePointIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTrackSplinePointAnimatedStruct_Statics::NewProp_SplinePointIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTrackSplinePointAnimatedStruct_Statics::NewProp_StaticMeshName_MetaData[] = {
		{ "Category", "MMT Track Animation Component" },
		{ "ModuleRelativePath", "Public/MMTTrackSplinePointAnimatedStruct.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTrackSplinePointAnimatedStruct_Statics::NewProp_StaticMeshName = { "StaticMeshName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTrackSplinePointAnimatedStruct, StaticMeshName), METADATA_PARAMS(Z_Construct_UScriptStruct_FTrackSplinePointAnimatedStruct_Statics::NewProp_StaticMeshName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTrackSplinePointAnimatedStruct_Statics::NewProp_StaticMeshName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTrackSplinePointAnimatedStruct_Statics::NewProp_StaticMeshSocketName_MetaData[] = {
		{ "Category", "MMT Track Animation Component" },
		{ "ModuleRelativePath", "Public/MMTTrackSplinePointAnimatedStruct.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FTrackSplinePointAnimatedStruct_Statics::NewProp_StaticMeshSocketName = { "StaticMeshSocketName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTrackSplinePointAnimatedStruct, StaticMeshSocketName), METADATA_PARAMS(Z_Construct_UScriptStruct_FTrackSplinePointAnimatedStruct_Statics::NewProp_StaticMeshSocketName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTrackSplinePointAnimatedStruct_Statics::NewProp_StaticMeshSocketName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTrackSplinePointAnimatedStruct_Statics::NewProp_StaticMesh_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MMTTrackSplinePointAnimatedStruct.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FTrackSplinePointAnimatedStruct_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTrackSplinePointAnimatedStruct, StaticMesh), Z_Construct_UClass_UMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FTrackSplinePointAnimatedStruct_Statics::NewProp_StaticMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTrackSplinePointAnimatedStruct_Statics::NewProp_StaticMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTrackSplinePointAnimatedStruct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTrackSplinePointAnimatedStruct_Statics::NewProp_SplinePointIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTrackSplinePointAnimatedStruct_Statics::NewProp_StaticMeshName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTrackSplinePointAnimatedStruct_Statics::NewProp_StaticMeshSocketName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTrackSplinePointAnimatedStruct_Statics::NewProp_StaticMesh,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTrackSplinePointAnimatedStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MMT,
		nullptr,
		&NewStructOps,
		"TrackSplinePointAnimatedStruct",
		sizeof(FTrackSplinePointAnimatedStruct),
		alignof(FTrackSplinePointAnimatedStruct),
		Z_Construct_UScriptStruct_FTrackSplinePointAnimatedStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTrackSplinePointAnimatedStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTrackSplinePointAnimatedStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTrackSplinePointAnimatedStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTrackSplinePointAnimatedStruct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTrackSplinePointAnimatedStruct_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MMT();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TrackSplinePointAnimatedStruct"), sizeof(FTrackSplinePointAnimatedStruct), Get_Z_Construct_UScriptStruct_FTrackSplinePointAnimatedStruct_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTrackSplinePointAnimatedStruct_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTrackSplinePointAnimatedStruct_Hash() { return 2745691256U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
