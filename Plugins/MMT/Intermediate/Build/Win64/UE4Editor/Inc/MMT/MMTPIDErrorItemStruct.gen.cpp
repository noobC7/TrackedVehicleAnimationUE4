// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MMT/Public/MMTPIDErrorItemStruct.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMMTPIDErrorItemStruct() {}
// Cross Module References
	MMT_API UScriptStruct* Z_Construct_UScriptStruct_FPIDErrorItemStruct();
	UPackage* Z_Construct_UPackage__Script_MMT();
// End Cross Module References
class UScriptStruct* FPIDErrorItemStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MMT_API uint32 Get_Z_Construct_UScriptStruct_FPIDErrorItemStruct_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPIDErrorItemStruct, Z_Construct_UPackage__Script_MMT(), TEXT("PIDErrorItemStruct"), sizeof(FPIDErrorItemStruct), Get_Z_Construct_UScriptStruct_FPIDErrorItemStruct_Hash());
	}
	return Singleton;
}
template<> MMT_API UScriptStruct* StaticStruct<FPIDErrorItemStruct>()
{
	return FPIDErrorItemStruct::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPIDErrorItemStruct(FPIDErrorItemStruct::StaticStruct, TEXT("/Script/MMT"), TEXT("PIDErrorItemStruct"), false, nullptr, nullptr);
static struct FScriptStruct_MMT_StaticRegisterNativesFPIDErrorItemStruct
{
	FScriptStruct_MMT_StaticRegisterNativesFPIDErrorItemStruct()
	{
		UScriptStruct::DeferCppStructOps<FPIDErrorItemStruct>(FName(TEXT("PIDErrorItemStruct")));
	}
} ScriptStruct_MMT_StaticRegisterNativesFPIDErrorItemStruct;
	struct Z_Construct_UScriptStruct_FPIDErrorItemStruct_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeasuredValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MeasuredValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeltaTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPIDErrorItemStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MMTPIDErrorItemStruct.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPIDErrorItemStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPIDErrorItemStruct>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPIDErrorItemStruct_Statics::NewProp_MeasuredValue_MetaData[] = {
		{ "Category", "MMT PID Controller" },
		{ "ModuleRelativePath", "Public/MMTPIDErrorItemStruct.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPIDErrorItemStruct_Statics::NewProp_MeasuredValue = { "MeasuredValue", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPIDErrorItemStruct, MeasuredValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FPIDErrorItemStruct_Statics::NewProp_MeasuredValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPIDErrorItemStruct_Statics::NewProp_MeasuredValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPIDErrorItemStruct_Statics::NewProp_DeltaTime_MetaData[] = {
		{ "Category", "MMT PID Controller" },
		{ "ModuleRelativePath", "Public/MMTPIDErrorItemStruct.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPIDErrorItemStruct_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPIDErrorItemStruct, DeltaTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FPIDErrorItemStruct_Statics::NewProp_DeltaTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPIDErrorItemStruct_Statics::NewProp_DeltaTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPIDErrorItemStruct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPIDErrorItemStruct_Statics::NewProp_MeasuredValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPIDErrorItemStruct_Statics::NewProp_DeltaTime,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPIDErrorItemStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MMT,
		nullptr,
		&NewStructOps,
		"PIDErrorItemStruct",
		sizeof(FPIDErrorItemStruct),
		alignof(FPIDErrorItemStruct),
		Z_Construct_UScriptStruct_FPIDErrorItemStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPIDErrorItemStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPIDErrorItemStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPIDErrorItemStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPIDErrorItemStruct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPIDErrorItemStruct_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MMT();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PIDErrorItemStruct"), sizeof(FPIDErrorItemStruct), Get_Z_Construct_UScriptStruct_FPIDErrorItemStruct_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPIDErrorItemStruct_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPIDErrorItemStruct_Hash() { return 449857190U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
