// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MMT/Public/MMTSecondaryTick.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMMTSecondaryTick() {}
// Cross Module References
	MMT_API UScriptStruct* Z_Construct_UScriptStruct_FSecondaryTickFunction();
	UPackage* Z_Construct_UPackage__Script_MMT();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTickFunction();
// End Cross Module References

static_assert(std::is_polymorphic<FSecondaryTickFunction>() == std::is_polymorphic<FTickFunction>(), "USTRUCT FSecondaryTickFunction cannot be polymorphic unless super FTickFunction is polymorphic");

class UScriptStruct* FSecondaryTickFunction::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MMT_API uint32 Get_Z_Construct_UScriptStruct_FSecondaryTickFunction_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSecondaryTickFunction, Z_Construct_UPackage__Script_MMT(), TEXT("SecondaryTickFunction"), sizeof(FSecondaryTickFunction), Get_Z_Construct_UScriptStruct_FSecondaryTickFunction_Hash());
	}
	return Singleton;
}
template<> MMT_API UScriptStruct* StaticStruct<FSecondaryTickFunction>()
{
	return FSecondaryTickFunction::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSecondaryTickFunction(FSecondaryTickFunction::StaticStruct, TEXT("/Script/MMT"), TEXT("SecondaryTickFunction"), false, nullptr, nullptr);
static struct FScriptStruct_MMT_StaticRegisterNativesFSecondaryTickFunction
{
	FScriptStruct_MMT_StaticRegisterNativesFSecondaryTickFunction()
	{
		UScriptStruct::DeferCppStructOps<FSecondaryTickFunction>(FName(TEXT("SecondaryTickFunction")));
	}
} ScriptStruct_MMT_StaticRegisterNativesFSecondaryTickFunction;
	struct Z_Construct_UScriptStruct_FSecondaryTickFunction_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSecondaryTickFunction_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MMTSecondaryTick.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSecondaryTickFunction_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSecondaryTickFunction>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSecondaryTickFunction_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MMT,
		Z_Construct_UScriptStruct_FTickFunction,
		&NewStructOps,
		"SecondaryTickFunction",
		sizeof(FSecondaryTickFunction),
		alignof(FSecondaryTickFunction),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSecondaryTickFunction_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSecondaryTickFunction_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSecondaryTickFunction()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSecondaryTickFunction_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MMT();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SecondaryTickFunction"), sizeof(FSecondaryTickFunction), Get_Z_Construct_UScriptStruct_FSecondaryTickFunction_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSecondaryTickFunction_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSecondaryTickFunction_Hash() { return 3862376087U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
