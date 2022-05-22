// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MMT/Private/MMTFrictionSetPassive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMMTFrictionSetPassive() {}
// Cross Module References
	MMT_API UScriptStruct* Z_Construct_UScriptStruct_FFrictionSetPassiveStruct();
	UPackage* Z_Construct_UPackage__Script_MMT();
	MMT_API UScriptStruct* Z_Construct_UScriptStruct_FFrictionSetBaseStruct();
	MMT_API UScriptStruct* Z_Construct_UScriptStruct_FFrictionSetPassiveSpecificStruct();
	MMT_API UClass* Z_Construct_UClass_UMMTFrictionSetPassive_NoRegister();
	MMT_API UClass* Z_Construct_UClass_UMMTFrictionSetPassive();
	MMT_API UClass* Z_Construct_UClass_UMMTFrictionSetBase();
// End Cross Module References
class UScriptStruct* FFrictionSetPassiveStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MMT_API uint32 Get_Z_Construct_UScriptStruct_FFrictionSetPassiveStruct_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFrictionSetPassiveStruct, Z_Construct_UPackage__Script_MMT(), TEXT("FrictionSetPassiveStruct"), sizeof(FFrictionSetPassiveStruct), Get_Z_Construct_UScriptStruct_FFrictionSetPassiveStruct_Hash());
	}
	return Singleton;
}
template<> MMT_API UScriptStruct* StaticStruct<FFrictionSetPassiveStruct>()
{
	return FFrictionSetPassiveStruct::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFrictionSetPassiveStruct(FFrictionSetPassiveStruct::StaticStruct, TEXT("/Script/MMT"), TEXT("FrictionSetPassiveStruct"), false, nullptr, nullptr);
static struct FScriptStruct_MMT_StaticRegisterNativesFFrictionSetPassiveStruct
{
	FScriptStruct_MMT_StaticRegisterNativesFFrictionSetPassiveStruct()
	{
		UScriptStruct::DeferCppStructOps<FFrictionSetPassiveStruct>(FName(TEXT("FrictionSetPassiveStruct")));
	}
} ScriptStruct_MMT_StaticRegisterNativesFFrictionSetPassiveStruct;
	struct Z_Construct_UScriptStruct_FFrictionSetPassiveStruct_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_General_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_General;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Surface_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Surface;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFrictionSetPassiveStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/MMTFrictionSetPassive.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFrictionSetPassiveStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFrictionSetPassiveStruct>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFrictionSetPassiveStruct_Statics::NewProp_General_MetaData[] = {
		{ "Category", "FrictionSetPassiveStruct" },
		{ "ModuleRelativePath", "Private/MMTFrictionSetPassive.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFrictionSetPassiveStruct_Statics::NewProp_General = { "General", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFrictionSetPassiveStruct, General), Z_Construct_UScriptStruct_FFrictionSetBaseStruct, METADATA_PARAMS(Z_Construct_UScriptStruct_FFrictionSetPassiveStruct_Statics::NewProp_General_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFrictionSetPassiveStruct_Statics::NewProp_General_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFrictionSetPassiveStruct_Statics::NewProp_Surface_MetaData[] = {
		{ "Category", "FrictionSetPassiveStruct" },
		{ "ModuleRelativePath", "Private/MMTFrictionSetPassive.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFrictionSetPassiveStruct_Statics::NewProp_Surface = { "Surface", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFrictionSetPassiveStruct, Surface), Z_Construct_UScriptStruct_FFrictionSetPassiveSpecificStruct, METADATA_PARAMS(Z_Construct_UScriptStruct_FFrictionSetPassiveStruct_Statics::NewProp_Surface_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFrictionSetPassiveStruct_Statics::NewProp_Surface_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFrictionSetPassiveStruct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFrictionSetPassiveStruct_Statics::NewProp_General,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFrictionSetPassiveStruct_Statics::NewProp_Surface,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFrictionSetPassiveStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MMT,
		nullptr,
		&NewStructOps,
		"FrictionSetPassiveStruct",
		sizeof(FFrictionSetPassiveStruct),
		alignof(FFrictionSetPassiveStruct),
		Z_Construct_UScriptStruct_FFrictionSetPassiveStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFrictionSetPassiveStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFrictionSetPassiveStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFrictionSetPassiveStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFrictionSetPassiveStruct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFrictionSetPassiveStruct_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MMT();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FrictionSetPassiveStruct"), sizeof(FFrictionSetPassiveStruct), Get_Z_Construct_UScriptStruct_FFrictionSetPassiveStruct_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFrictionSetPassiveStruct_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFrictionSetPassiveStruct_Hash() { return 1391091288U; }
class UScriptStruct* FFrictionSetPassiveSpecificStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MMT_API uint32 Get_Z_Construct_UScriptStruct_FFrictionSetPassiveSpecificStruct_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFrictionSetPassiveSpecificStruct, Z_Construct_UPackage__Script_MMT(), TEXT("FrictionSetPassiveSpecificStruct"), sizeof(FFrictionSetPassiveSpecificStruct), Get_Z_Construct_UScriptStruct_FFrictionSetPassiveSpecificStruct_Hash());
	}
	return Singleton;
}
template<> MMT_API UScriptStruct* StaticStruct<FFrictionSetPassiveSpecificStruct>()
{
	return FFrictionSetPassiveSpecificStruct::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFrictionSetPassiveSpecificStruct(FFrictionSetPassiveSpecificStruct::StaticStruct, TEXT("/Script/MMT"), TEXT("FrictionSetPassiveSpecificStruct"), false, nullptr, nullptr);
static struct FScriptStruct_MMT_StaticRegisterNativesFFrictionSetPassiveSpecificStruct
{
	FScriptStruct_MMT_StaticRegisterNativesFFrictionSetPassiveSpecificStruct()
	{
		UScriptStruct::DeferCppStructOps<FFrictionSetPassiveSpecificStruct>(FName(TEXT("FrictionSetPassiveSpecificStruct")));
	}
} ScriptStruct_MMT_StaticRegisterNativesFFrictionSetPassiveSpecificStruct;
	struct Z_Construct_UScriptStruct_FFrictionSetPassiveSpecificStruct_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
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
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFrictionSetPassiveSpecificStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/MMTFrictionSetPassive.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFrictionSetPassiveSpecificStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFrictionSetPassiveSpecificStruct>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFrictionSetPassiveSpecificStruct_Statics::NewProp_MuXStatic_MetaData[] = {
		{ "Category", "Surface" },
		{ "ModuleRelativePath", "Private/MMTFrictionSetPassive.h" },
		{ "ToolTip", "Static friction coefficient in X axis" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFrictionSetPassiveSpecificStruct_Statics::NewProp_MuXStatic = { "MuXStatic", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFrictionSetPassiveSpecificStruct, MuXStatic), METADATA_PARAMS(Z_Construct_UScriptStruct_FFrictionSetPassiveSpecificStruct_Statics::NewProp_MuXStatic_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFrictionSetPassiveSpecificStruct_Statics::NewProp_MuXStatic_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFrictionSetPassiveSpecificStruct_Statics::NewProp_MuXKinetic_MetaData[] = {
		{ "Category", "Surface" },
		{ "ModuleRelativePath", "Private/MMTFrictionSetPassive.h" },
		{ "ToolTip", "Kinetic friction coefficient in X axis" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFrictionSetPassiveSpecificStruct_Statics::NewProp_MuXKinetic = { "MuXKinetic", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFrictionSetPassiveSpecificStruct, MuXKinetic), METADATA_PARAMS(Z_Construct_UScriptStruct_FFrictionSetPassiveSpecificStruct_Statics::NewProp_MuXKinetic_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFrictionSetPassiveSpecificStruct_Statics::NewProp_MuXKinetic_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFrictionSetPassiveSpecificStruct_Statics::NewProp_bUseAnisotropicFriction_MetaData[] = {
		{ "Category", "Surface" },
		{ "ModuleRelativePath", "Private/MMTFrictionSetPassive.h" },
		{ "ToolTip", "Set TRUE to specify different friction coefficient in Y axis, otherwise MuX is used as uniform coefficient. Useful for objects such as ice skates, brushed contact surface and some types of tank tracks." },
	};
#endif
	void Z_Construct_UScriptStruct_FFrictionSetPassiveSpecificStruct_Statics::NewProp_bUseAnisotropicFriction_SetBit(void* Obj)
	{
		((FFrictionSetPassiveSpecificStruct*)Obj)->bUseAnisotropicFriction = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFrictionSetPassiveSpecificStruct_Statics::NewProp_bUseAnisotropicFriction = { "bUseAnisotropicFriction", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FFrictionSetPassiveSpecificStruct), &Z_Construct_UScriptStruct_FFrictionSetPassiveSpecificStruct_Statics::NewProp_bUseAnisotropicFriction_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FFrictionSetPassiveSpecificStruct_Statics::NewProp_bUseAnisotropicFriction_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFrictionSetPassiveSpecificStruct_Statics::NewProp_bUseAnisotropicFriction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFrictionSetPassiveSpecificStruct_Statics::NewProp_MuYStatic_MetaData[] = {
		{ "Category", "Surface" },
		{ "EditCondition", "bUseAnisotropicFriction" },
		{ "ModuleRelativePath", "Private/MMTFrictionSetPassive.h" },
		{ "ToolTip", "Static friction coefficient in Y axis" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFrictionSetPassiveSpecificStruct_Statics::NewProp_MuYStatic = { "MuYStatic", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFrictionSetPassiveSpecificStruct, MuYStatic), METADATA_PARAMS(Z_Construct_UScriptStruct_FFrictionSetPassiveSpecificStruct_Statics::NewProp_MuYStatic_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFrictionSetPassiveSpecificStruct_Statics::NewProp_MuYStatic_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFrictionSetPassiveSpecificStruct_Statics::NewProp_MuYKinetic_MetaData[] = {
		{ "Category", "Surface" },
		{ "EditCondition", "bUseAnisotropicFriction" },
		{ "ModuleRelativePath", "Private/MMTFrictionSetPassive.h" },
		{ "ToolTip", "Kinetic friction coefficient in Y axis" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFrictionSetPassiveSpecificStruct_Statics::NewProp_MuYKinetic = { "MuYKinetic", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFrictionSetPassiveSpecificStruct, MuYKinetic), METADATA_PARAMS(Z_Construct_UScriptStruct_FFrictionSetPassiveSpecificStruct_Statics::NewProp_MuYKinetic_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFrictionSetPassiveSpecificStruct_Statics::NewProp_MuYKinetic_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFrictionSetPassiveSpecificStruct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFrictionSetPassiveSpecificStruct_Statics::NewProp_MuXStatic,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFrictionSetPassiveSpecificStruct_Statics::NewProp_MuXKinetic,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFrictionSetPassiveSpecificStruct_Statics::NewProp_bUseAnisotropicFriction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFrictionSetPassiveSpecificStruct_Statics::NewProp_MuYStatic,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFrictionSetPassiveSpecificStruct_Statics::NewProp_MuYKinetic,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFrictionSetPassiveSpecificStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MMT,
		nullptr,
		&NewStructOps,
		"FrictionSetPassiveSpecificStruct",
		sizeof(FFrictionSetPassiveSpecificStruct),
		alignof(FFrictionSetPassiveSpecificStruct),
		Z_Construct_UScriptStruct_FFrictionSetPassiveSpecificStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFrictionSetPassiveSpecificStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFrictionSetPassiveSpecificStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFrictionSetPassiveSpecificStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFrictionSetPassiveSpecificStruct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFrictionSetPassiveSpecificStruct_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MMT();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FrictionSetPassiveSpecificStruct"), sizeof(FFrictionSetPassiveSpecificStruct), Get_Z_Construct_UScriptStruct_FFrictionSetPassiveSpecificStruct_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFrictionSetPassiveSpecificStruct_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFrictionSetPassiveSpecificStruct_Hash() { return 1210889461U; }
	void UMMTFrictionSetPassive::StaticRegisterNativesUMMTFrictionSetPassive()
	{
	}
	UClass* Z_Construct_UClass_UMMTFrictionSetPassive_NoRegister()
	{
		return UMMTFrictionSetPassive::StaticClass();
	}
	struct Z_Construct_UClass_UMMTFrictionSetPassive_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
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
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMMTFrictionSetPassive_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMMTFrictionSetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MMT,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMMTFrictionSetPassive_Statics::Class_MetaDataParams[] = {
		{ "Comment", "//Passive friction set is for processing surfaces such as ski or similar which don't have active moving surfaces such as wheels or tracks\n" },
		{ "IncludePath", "MMTFrictionSetPassive.h" },
		{ "ModuleRelativePath", "Private/MMTFrictionSetPassive.h" },
		{ "ToolTip", "Passive friction set is for processing surfaces such as ski or similar which don't have active moving surfaces such as wheels or tracks" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMMTFrictionSetPassive_Statics::NewProp_MuXStatic_MetaData[] = {
		{ "ModuleRelativePath", "Private/MMTFrictionSetPassive.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMMTFrictionSetPassive_Statics::NewProp_MuXStatic = { "MuXStatic", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMMTFrictionSetPassive, MuXStatic), METADATA_PARAMS(Z_Construct_UClass_UMMTFrictionSetPassive_Statics::NewProp_MuXStatic_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMMTFrictionSetPassive_Statics::NewProp_MuXStatic_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMMTFrictionSetPassive_Statics::NewProp_MuXKinetic_MetaData[] = {
		{ "ModuleRelativePath", "Private/MMTFrictionSetPassive.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMMTFrictionSetPassive_Statics::NewProp_MuXKinetic = { "MuXKinetic", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMMTFrictionSetPassive, MuXKinetic), METADATA_PARAMS(Z_Construct_UClass_UMMTFrictionSetPassive_Statics::NewProp_MuXKinetic_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMMTFrictionSetPassive_Statics::NewProp_MuXKinetic_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMMTFrictionSetPassive_Statics::NewProp_bUseAnisotropicFriction_MetaData[] = {
		{ "ModuleRelativePath", "Private/MMTFrictionSetPassive.h" },
	};
#endif
	void Z_Construct_UClass_UMMTFrictionSetPassive_Statics::NewProp_bUseAnisotropicFriction_SetBit(void* Obj)
	{
		((UMMTFrictionSetPassive*)Obj)->bUseAnisotropicFriction = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMMTFrictionSetPassive_Statics::NewProp_bUseAnisotropicFriction = { "bUseAnisotropicFriction", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMMTFrictionSetPassive), &Z_Construct_UClass_UMMTFrictionSetPassive_Statics::NewProp_bUseAnisotropicFriction_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMMTFrictionSetPassive_Statics::NewProp_bUseAnisotropicFriction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMMTFrictionSetPassive_Statics::NewProp_bUseAnisotropicFriction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMMTFrictionSetPassive_Statics::NewProp_MuYStatic_MetaData[] = {
		{ "ModuleRelativePath", "Private/MMTFrictionSetPassive.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMMTFrictionSetPassive_Statics::NewProp_MuYStatic = { "MuYStatic", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMMTFrictionSetPassive, MuYStatic), METADATA_PARAMS(Z_Construct_UClass_UMMTFrictionSetPassive_Statics::NewProp_MuYStatic_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMMTFrictionSetPassive_Statics::NewProp_MuYStatic_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMMTFrictionSetPassive_Statics::NewProp_MuYKinetic_MetaData[] = {
		{ "ModuleRelativePath", "Private/MMTFrictionSetPassive.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMMTFrictionSetPassive_Statics::NewProp_MuYKinetic = { "MuYKinetic", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMMTFrictionSetPassive, MuYKinetic), METADATA_PARAMS(Z_Construct_UClass_UMMTFrictionSetPassive_Statics::NewProp_MuYKinetic_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMMTFrictionSetPassive_Statics::NewProp_MuYKinetic_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMMTFrictionSetPassive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMMTFrictionSetPassive_Statics::NewProp_MuXStatic,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMMTFrictionSetPassive_Statics::NewProp_MuXKinetic,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMMTFrictionSetPassive_Statics::NewProp_bUseAnisotropicFriction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMMTFrictionSetPassive_Statics::NewProp_MuYStatic,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMMTFrictionSetPassive_Statics::NewProp_MuYKinetic,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMMTFrictionSetPassive_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMMTFrictionSetPassive>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMMTFrictionSetPassive_Statics::ClassParams = {
		&UMMTFrictionSetPassive::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMMTFrictionSetPassive_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMMTFrictionSetPassive_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMMTFrictionSetPassive_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMMTFrictionSetPassive_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMMTFrictionSetPassive()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMMTFrictionSetPassive_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMMTFrictionSetPassive, 2897613685);
	template<> MMT_API UClass* StaticClass<UMMTFrictionSetPassive>()
	{
		return UMMTFrictionSetPassive::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMMTFrictionSetPassive(Z_Construct_UClass_UMMTFrictionSetPassive, &UMMTFrictionSetPassive::StaticClass, TEXT("/Script/MMT"), TEXT("UMMTFrictionSetPassive"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMMTFrictionSetPassive);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
