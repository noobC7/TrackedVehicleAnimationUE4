// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MMT/Public/MMTVehicleSuspensionStructs.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMMTVehicleSuspensionStructs() {}
// Cross Module References
	MMT_API UScriptStruct* Z_Construct_UScriptStruct_FPassiveSurfaceConfig();
	UPackage* Z_Construct_UPackage__Script_MMT();
	MMT_API UScriptStruct* Z_Construct_UScriptStruct_FPassiveSets();
	MMT_API UScriptStruct* Z_Construct_UScriptStruct_FWheelsConfig();
	MMT_API UScriptStruct* Z_Construct_UScriptStruct_FWheelSets();
	MMT_API UScriptStruct* Z_Construct_UScriptStruct_FTracksConfig();
	MMT_API UScriptStruct* Z_Construct_UScriptStruct_FTrackSets();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	MMT_API UClass* Z_Construct_UClass_UMMTTrack_NoRegister();
// End Cross Module References
class UScriptStruct* FPassiveSurfaceConfig::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MMT_API uint32 Get_Z_Construct_UScriptStruct_FPassiveSurfaceConfig_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPassiveSurfaceConfig, Z_Construct_UPackage__Script_MMT(), TEXT("PassiveSurfaceConfig"), sizeof(FPassiveSurfaceConfig), Get_Z_Construct_UScriptStruct_FPassiveSurfaceConfig_Hash());
	}
	return Singleton;
}
template<> MMT_API UScriptStruct* StaticStruct<FPassiveSurfaceConfig>()
{
	return FPassiveSurfaceConfig::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPassiveSurfaceConfig(FPassiveSurfaceConfig::StaticStruct, TEXT("/Script/MMT"), TEXT("PassiveSurfaceConfig"), false, nullptr, nullptr);
static struct FScriptStruct_MMT_StaticRegisterNativesFPassiveSurfaceConfig
{
	FScriptStruct_MMT_StaticRegisterNativesFPassiveSurfaceConfig()
	{
		UScriptStruct::DeferCppStructOps<FPassiveSurfaceConfig>(FName(TEXT("PassiveSurfaceConfig")));
	}
} ScriptStruct_MMT_StaticRegisterNativesFPassiveSurfaceConfig;
	struct Z_Construct_UScriptStruct_FPassiveSurfaceConfig_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnablePassiveSurfaces_MetaData[];
#endif
		static void NewProp_bEnablePassiveSurfaces_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnablePassiveSurfaces;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PassiveSets_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PassiveSets_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PassiveSets;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPassiveSurfaceConfig_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MMTVehicleSuspensionStructs.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPassiveSurfaceConfig_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPassiveSurfaceConfig>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPassiveSurfaceConfig_Statics::NewProp_bEnablePassiveSurfaces_MetaData[] = {
		{ "Category", "Friction Settings" },
		{ "ModuleRelativePath", "Public/MMTVehicleSuspensionStructs.h" },
		{ "ToolTip", "Set to true if vehicle has friction surfaces such as ski (directional friction)" },
	};
#endif
	void Z_Construct_UScriptStruct_FPassiveSurfaceConfig_Statics::NewProp_bEnablePassiveSurfaces_SetBit(void* Obj)
	{
		((FPassiveSurfaceConfig*)Obj)->bEnablePassiveSurfaces = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPassiveSurfaceConfig_Statics::NewProp_bEnablePassiveSurfaces = { "bEnablePassiveSurfaces", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPassiveSurfaceConfig), &Z_Construct_UScriptStruct_FPassiveSurfaceConfig_Statics::NewProp_bEnablePassiveSurfaces_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPassiveSurfaceConfig_Statics::NewProp_bEnablePassiveSurfaces_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPassiveSurfaceConfig_Statics::NewProp_bEnablePassiveSurfaces_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPassiveSurfaceConfig_Statics::NewProp_PassiveSets_Inner = { "PassiveSets", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPassiveSets, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPassiveSurfaceConfig_Statics::NewProp_PassiveSets_MetaData[] = {
		{ "Category", "Friction Settings" },
		{ "EditCondition", "bEnablePassiveSurfaces" },
		{ "ModuleRelativePath", "Public/MMTVehicleSuspensionStructs.h" },
		{ "ToolTip", "You need as many sets as many surfaces you have, typical sled will have 2 sets of ski" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPassiveSurfaceConfig_Statics::NewProp_PassiveSets = { "PassiveSets", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPassiveSurfaceConfig, PassiveSets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPassiveSurfaceConfig_Statics::NewProp_PassiveSets_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPassiveSurfaceConfig_Statics::NewProp_PassiveSets_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPassiveSurfaceConfig_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPassiveSurfaceConfig_Statics::NewProp_bEnablePassiveSurfaces,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPassiveSurfaceConfig_Statics::NewProp_PassiveSets_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPassiveSurfaceConfig_Statics::NewProp_PassiveSets,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPassiveSurfaceConfig_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MMT,
		nullptr,
		&NewStructOps,
		"PassiveSurfaceConfig",
		sizeof(FPassiveSurfaceConfig),
		alignof(FPassiveSurfaceConfig),
		Z_Construct_UScriptStruct_FPassiveSurfaceConfig_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPassiveSurfaceConfig_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPassiveSurfaceConfig_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPassiveSurfaceConfig_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPassiveSurfaceConfig()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPassiveSurfaceConfig_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MMT();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PassiveSurfaceConfig"), sizeof(FPassiveSurfaceConfig), Get_Z_Construct_UScriptStruct_FPassiveSurfaceConfig_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPassiveSurfaceConfig_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPassiveSurfaceConfig_Hash() { return 1559104090U; }
class UScriptStruct* FPassiveSets::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MMT_API uint32 Get_Z_Construct_UScriptStruct_FPassiveSets_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPassiveSets, Z_Construct_UPackage__Script_MMT(), TEXT("PassiveSets"), sizeof(FPassiveSets), Get_Z_Construct_UScriptStruct_FPassiveSets_Hash());
	}
	return Singleton;
}
template<> MMT_API UScriptStruct* StaticStruct<FPassiveSets>()
{
	return FPassiveSets::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPassiveSets(FPassiveSets::StaticStruct, TEXT("/Script/MMT"), TEXT("PassiveSets"), false, nullptr, nullptr);
static struct FScriptStruct_MMT_StaticRegisterNativesFPassiveSets
{
	FScriptStruct_MMT_StaticRegisterNativesFPassiveSets()
	{
		UScriptStruct::DeferCppStructOps<FPassiveSets>(FName(TEXT("PassiveSets")));
	}
} ScriptStruct_MMT_StaticRegisterNativesFPassiveSets;
	struct Z_Construct_UScriptStruct_FPassiveSets_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SurfaceName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SurfaceName;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReferenceFrameComponentName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReferenceFrameComponentName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPassiveSets_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//----------------- Passive surface configuration\n" },
		{ "ModuleRelativePath", "Public/MMTVehicleSuspensionStructs.h" },
		{ "ToolTip", "----------------- Passive surface configuration" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPassiveSets_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPassiveSets>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPassiveSets_Statics::NewProp_SurfaceName_MetaData[] = {
		{ "Category", "PassiveSets" },
		{ "ModuleRelativePath", "Public/MMTVehicleSuspensionStructs.h" },
		{ "ToolTip", "Name of this passive surface for debugging purposes and improving usability, for example 'Left Steering Ski'" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPassiveSets_Statics::NewProp_SurfaceName = { "SurfaceName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPassiveSets, SurfaceName), METADATA_PARAMS(Z_Construct_UScriptStruct_FPassiveSets_Statics::NewProp_SurfaceName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPassiveSets_Statics::NewProp_SurfaceName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPassiveSets_Statics::NewProp_bDisabled_MetaData[] = {
		{ "Category", "PassiveSets" },
		{ "ModuleRelativePath", "Public/MMTVehicleSuspensionStructs.h" },
		{ "ToolTip", "Disables item from physics calculations and applying forces, useful for debugging." },
	};
#endif
	void Z_Construct_UScriptStruct_FPassiveSets_Statics::NewProp_bDisabled_SetBit(void* Obj)
	{
		((FPassiveSets*)Obj)->bDisabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPassiveSets_Statics::NewProp_bDisabled = { "bDisabled", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPassiveSets), &Z_Construct_UScriptStruct_FPassiveSets_Statics::NewProp_bDisabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPassiveSets_Statics::NewProp_bDisabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPassiveSets_Statics::NewProp_bDisabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPassiveSets_Statics::NewProp_bDebugMode_MetaData[] = {
		{ "Category", "PassiveSets" },
		{ "ModuleRelativePath", "Public/MMTVehicleSuspensionStructs.h" },
		{ "ToolTip", "Enable on screen debug output" },
	};
#endif
	void Z_Construct_UScriptStruct_FPassiveSets_Statics::NewProp_bDebugMode_SetBit(void* Obj)
	{
		((FPassiveSets*)Obj)->bDebugMode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPassiveSets_Statics::NewProp_bDebugMode = { "bDebugMode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPassiveSets), &Z_Construct_UScriptStruct_FPassiveSets_Statics::NewProp_bDebugMode_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPassiveSets_Statics::NewProp_bDebugMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPassiveSets_Statics::NewProp_bDebugMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPassiveSets_Statics::NewProp_ReferenceFrameComponentName_MetaData[] = {
		{ "Category", "PassiveSets" },
		{ "ModuleRelativePath", "Public/MMTVehicleSuspensionStructs.h" },
		{ "ToolTip", "Name of the scene component that will be used as frame of reference for position and rotation of ski center" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPassiveSets_Statics::NewProp_ReferenceFrameComponentName = { "ReferenceFrameComponentName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPassiveSets, ReferenceFrameComponentName), METADATA_PARAMS(Z_Construct_UScriptStruct_FPassiveSets_Statics::NewProp_ReferenceFrameComponentName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPassiveSets_Statics::NewProp_ReferenceFrameComponentName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPassiveSets_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPassiveSets_Statics::NewProp_SurfaceName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPassiveSets_Statics::NewProp_bDisabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPassiveSets_Statics::NewProp_bDebugMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPassiveSets_Statics::NewProp_ReferenceFrameComponentName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPassiveSets_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MMT,
		nullptr,
		&NewStructOps,
		"PassiveSets",
		sizeof(FPassiveSets),
		alignof(FPassiveSets),
		Z_Construct_UScriptStruct_FPassiveSets_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPassiveSets_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPassiveSets_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPassiveSets_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPassiveSets()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPassiveSets_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MMT();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PassiveSets"), sizeof(FPassiveSets), Get_Z_Construct_UScriptStruct_FPassiveSets_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPassiveSets_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPassiveSets_Hash() { return 611459619U; }
class UScriptStruct* FWheelsConfig::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MMT_API uint32 Get_Z_Construct_UScriptStruct_FWheelsConfig_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FWheelsConfig, Z_Construct_UPackage__Script_MMT(), TEXT("WheelsConfig"), sizeof(FWheelsConfig), Get_Z_Construct_UScriptStruct_FWheelsConfig_Hash());
	}
	return Singleton;
}
template<> MMT_API UScriptStruct* StaticStruct<FWheelsConfig>()
{
	return FWheelsConfig::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FWheelsConfig(FWheelsConfig::StaticStruct, TEXT("/Script/MMT"), TEXT("WheelsConfig"), false, nullptr, nullptr);
static struct FScriptStruct_MMT_StaticRegisterNativesFWheelsConfig
{
	FScriptStruct_MMT_StaticRegisterNativesFWheelsConfig()
	{
		UScriptStruct::DeferCppStructOps<FWheelsConfig>(FName(TEXT("WheelsConfig")));
	}
} ScriptStruct_MMT_StaticRegisterNativesFWheelsConfig;
	struct Z_Construct_UScriptStruct_FWheelsConfig_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableWheels_MetaData[];
#endif
		static void NewProp_bEnableWheels_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableWheels;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WheelSets_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WheelSets_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_WheelSets;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWheelsConfig_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MMTVehicleSuspensionStructs.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWheelsConfig_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWheelsConfig>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWheelsConfig_Statics::NewProp_bEnableWheels_MetaData[] = {
		{ "Category", "Friction Settings" },
		{ "ModuleRelativePath", "Public/MMTVehicleSuspensionStructs.h" },
		{ "ToolTip", "Set to true if vehicle has friction surfaces such as ski (directional friction)" },
	};
#endif
	void Z_Construct_UScriptStruct_FWheelsConfig_Statics::NewProp_bEnableWheels_SetBit(void* Obj)
	{
		((FWheelsConfig*)Obj)->bEnableWheels = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FWheelsConfig_Statics::NewProp_bEnableWheels = { "bEnableWheels", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FWheelsConfig), &Z_Construct_UScriptStruct_FWheelsConfig_Statics::NewProp_bEnableWheels_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FWheelsConfig_Statics::NewProp_bEnableWheels_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWheelsConfig_Statics::NewProp_bEnableWheels_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWheelsConfig_Statics::NewProp_WheelSets_Inner = { "WheelSets", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FWheelSets, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWheelsConfig_Statics::NewProp_WheelSets_MetaData[] = {
		{ "Category", "Friction Settings" },
		{ "EditCondition", "bEnableWheels" },
		{ "ModuleRelativePath", "Public/MMTVehicleSuspensionStructs.h" },
		{ "ToolTip", "You need as many sets as many wheels you have, typical car will have 4 sets of wheels" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FWheelsConfig_Statics::NewProp_WheelSets = { "WheelSets", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWheelsConfig, WheelSets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FWheelsConfig_Statics::NewProp_WheelSets_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWheelsConfig_Statics::NewProp_WheelSets_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWheelsConfig_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWheelsConfig_Statics::NewProp_bEnableWheels,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWheelsConfig_Statics::NewProp_WheelSets_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWheelsConfig_Statics::NewProp_WheelSets,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWheelsConfig_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MMT,
		nullptr,
		&NewStructOps,
		"WheelsConfig",
		sizeof(FWheelsConfig),
		alignof(FWheelsConfig),
		Z_Construct_UScriptStruct_FWheelsConfig_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWheelsConfig_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWheelsConfig_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWheelsConfig_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWheelsConfig()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FWheelsConfig_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MMT();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("WheelsConfig"), sizeof(FWheelsConfig), Get_Z_Construct_UScriptStruct_FWheelsConfig_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FWheelsConfig_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FWheelsConfig_Hash() { return 3079083955U; }
class UScriptStruct* FWheelSets::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MMT_API uint32 Get_Z_Construct_UScriptStruct_FWheelSets_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FWheelSets, Z_Construct_UPackage__Script_MMT(), TEXT("WheelSets"), sizeof(FWheelSets), Get_Z_Construct_UScriptStruct_FWheelSets_Hash());
	}
	return Singleton;
}
template<> MMT_API UScriptStruct* StaticStruct<FWheelSets>()
{
	return FWheelSets::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FWheelSets(FWheelSets::StaticStruct, TEXT("/Script/MMT"), TEXT("WheelSets"), false, nullptr, nullptr);
static struct FScriptStruct_MMT_StaticRegisterNativesFWheelSets
{
	FScriptStruct_MMT_StaticRegisterNativesFWheelSets()
	{
		UScriptStruct::DeferCppStructOps<FWheelSets>(FName(TEXT("WheelSets")));
	}
} ScriptStruct_MMT_StaticRegisterNativesFWheelSets;
	struct Z_Construct_UScriptStruct_FWheelSets_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WheelName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_WheelName;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReferenceFrameComponentName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReferenceFrameComponentName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWheelSets_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//----------------- Wheels configuration\n" },
		{ "ModuleRelativePath", "Public/MMTVehicleSuspensionStructs.h" },
		{ "ToolTip", "----------------- Wheels configuration" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWheelSets_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWheelSets>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWheelSets_Statics::NewProp_WheelName_MetaData[] = {
		{ "Category", "WheelSets" },
		{ "ModuleRelativePath", "Public/MMTVehicleSuspensionStructs.h" },
		{ "ToolTip", "Name of this wheel for debugging purposes and improving usability, for example 'Back Right Wheel'" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FWheelSets_Statics::NewProp_WheelName = { "WheelName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWheelSets, WheelName), METADATA_PARAMS(Z_Construct_UScriptStruct_FWheelSets_Statics::NewProp_WheelName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWheelSets_Statics::NewProp_WheelName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWheelSets_Statics::NewProp_bDisabled_MetaData[] = {
		{ "Category", "WheelSets" },
		{ "ModuleRelativePath", "Public/MMTVehicleSuspensionStructs.h" },
		{ "ToolTip", "Disables item from physics calculations and applying forces, useful for debugging." },
	};
#endif
	void Z_Construct_UScriptStruct_FWheelSets_Statics::NewProp_bDisabled_SetBit(void* Obj)
	{
		((FWheelSets*)Obj)->bDisabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FWheelSets_Statics::NewProp_bDisabled = { "bDisabled", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FWheelSets), &Z_Construct_UScriptStruct_FWheelSets_Statics::NewProp_bDisabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FWheelSets_Statics::NewProp_bDisabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWheelSets_Statics::NewProp_bDisabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWheelSets_Statics::NewProp_bDebugMode_MetaData[] = {
		{ "Category", "WheelSets" },
		{ "ModuleRelativePath", "Public/MMTVehicleSuspensionStructs.h" },
		{ "ToolTip", "Enable on screen debug output" },
	};
#endif
	void Z_Construct_UScriptStruct_FWheelSets_Statics::NewProp_bDebugMode_SetBit(void* Obj)
	{
		((FWheelSets*)Obj)->bDebugMode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FWheelSets_Statics::NewProp_bDebugMode = { "bDebugMode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FWheelSets), &Z_Construct_UScriptStruct_FWheelSets_Statics::NewProp_bDebugMode_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FWheelSets_Statics::NewProp_bDebugMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWheelSets_Statics::NewProp_bDebugMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWheelSets_Statics::NewProp_ReferenceFrameComponentName_MetaData[] = {
		{ "Category", "WheelSets" },
		{ "ModuleRelativePath", "Public/MMTVehicleSuspensionStructs.h" },
		{ "ToolTip", "Name of the scene component that will be used as frame of reference for position and rotation (yaw) of wheel center" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FWheelSets_Statics::NewProp_ReferenceFrameComponentName = { "ReferenceFrameComponentName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWheelSets, ReferenceFrameComponentName), METADATA_PARAMS(Z_Construct_UScriptStruct_FWheelSets_Statics::NewProp_ReferenceFrameComponentName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWheelSets_Statics::NewProp_ReferenceFrameComponentName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWheelSets_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWheelSets_Statics::NewProp_WheelName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWheelSets_Statics::NewProp_bDisabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWheelSets_Statics::NewProp_bDebugMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWheelSets_Statics::NewProp_ReferenceFrameComponentName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWheelSets_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MMT,
		nullptr,
		&NewStructOps,
		"WheelSets",
		sizeof(FWheelSets),
		alignof(FWheelSets),
		Z_Construct_UScriptStruct_FWheelSets_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWheelSets_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWheelSets_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWheelSets_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWheelSets()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FWheelSets_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MMT();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("WheelSets"), sizeof(FWheelSets), Get_Z_Construct_UScriptStruct_FWheelSets_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FWheelSets_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FWheelSets_Hash() { return 1042544512U; }
class UScriptStruct* FTracksConfig::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MMT_API uint32 Get_Z_Construct_UScriptStruct_FTracksConfig_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTracksConfig, Z_Construct_UPackage__Script_MMT(), TEXT("TracksConfig"), sizeof(FTracksConfig), Get_Z_Construct_UScriptStruct_FTracksConfig_Hash());
	}
	return Singleton;
}
template<> MMT_API UScriptStruct* StaticStruct<FTracksConfig>()
{
	return FTracksConfig::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTracksConfig(FTracksConfig::StaticStruct, TEXT("/Script/MMT"), TEXT("TracksConfig"), false, nullptr, nullptr);
static struct FScriptStruct_MMT_StaticRegisterNativesFTracksConfig
{
	FScriptStruct_MMT_StaticRegisterNativesFTracksConfig()
	{
		UScriptStruct::DeferCppStructOps<FTracksConfig>(FName(TEXT("TracksConfig")));
	}
} ScriptStruct_MMT_StaticRegisterNativesFTracksConfig;
	struct Z_Construct_UScriptStruct_FTracksConfig_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableTracks_MetaData[];
#endif
		static void NewProp_bEnableTracks_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableTracks;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TrackSets_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrackSets_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TrackSets;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTracksConfig_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MMTVehicleSuspensionStructs.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTracksConfig_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTracksConfig>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTracksConfig_Statics::NewProp_bEnableTracks_MetaData[] = {
		{ "Category", "Friction Settings" },
		{ "ModuleRelativePath", "Public/MMTVehicleSuspensionStructs.h" },
		{ "ToolTip", "Set to true if vehicle has friction surfaces such as ski (directional friction)" },
	};
#endif
	void Z_Construct_UScriptStruct_FTracksConfig_Statics::NewProp_bEnableTracks_SetBit(void* Obj)
	{
		((FTracksConfig*)Obj)->bEnableTracks = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTracksConfig_Statics::NewProp_bEnableTracks = { "bEnableTracks", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FTracksConfig), &Z_Construct_UScriptStruct_FTracksConfig_Statics::NewProp_bEnableTracks_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTracksConfig_Statics::NewProp_bEnableTracks_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTracksConfig_Statics::NewProp_bEnableTracks_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTracksConfig_Statics::NewProp_TrackSets_Inner = { "TrackSets", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTrackSets, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTracksConfig_Statics::NewProp_TrackSets_MetaData[] = {
		{ "Category", "Friction Settings" },
		{ "EditCondition", "bEnableTracks" },
		{ "ModuleRelativePath", "Public/MMTVehicleSuspensionStructs.h" },
		{ "ToolTip", "You need as many sets as many tracks you have, typical tank will have 2 sets of tracks" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTracksConfig_Statics::NewProp_TrackSets = { "TrackSets", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTracksConfig, TrackSets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FTracksConfig_Statics::NewProp_TrackSets_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTracksConfig_Statics::NewProp_TrackSets_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTracksConfig_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTracksConfig_Statics::NewProp_bEnableTracks,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTracksConfig_Statics::NewProp_TrackSets_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTracksConfig_Statics::NewProp_TrackSets,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTracksConfig_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MMT,
		nullptr,
		&NewStructOps,
		"TracksConfig",
		sizeof(FTracksConfig),
		alignof(FTracksConfig),
		Z_Construct_UScriptStruct_FTracksConfig_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTracksConfig_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTracksConfig_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTracksConfig_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTracksConfig()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTracksConfig_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MMT();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TracksConfig"), sizeof(FTracksConfig), Get_Z_Construct_UScriptStruct_FTracksConfig_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTracksConfig_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTracksConfig_Hash() { return 2101020457U; }
class UScriptStruct* FTrackSets::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MMT_API uint32 Get_Z_Construct_UScriptStruct_FTrackSets_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTrackSets, Z_Construct_UPackage__Script_MMT(), TEXT("TrackSets"), sizeof(FTrackSets), Get_Z_Construct_UScriptStruct_FTrackSets_Hash());
	}
	return Singleton;
}
template<> MMT_API UScriptStruct* StaticStruct<FTrackSets>()
{
	return FTrackSets::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTrackSets(FTrackSets::StaticStruct, TEXT("/Script/MMT"), TEXT("TrackSets"), false, nullptr, nullptr);
static struct FScriptStruct_MMT_StaticRegisterNativesFTrackSets
{
	FScriptStruct_MMT_StaticRegisterNativesFTrackSets()
	{
		UScriptStruct::DeferCppStructOps<FTrackSets>(FName(TEXT("TrackSets")));
	}
} ScriptStruct_MMT_StaticRegisterNativesFTrackSets;
	struct Z_Construct_UScriptStruct_FTrackSets_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrackName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_TrackName;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReferenceFrameComponentName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReferenceFrameComponentName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrackClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_TrackClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTrackSets_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//----------------- Tracks configuration\n" },
		{ "ModuleRelativePath", "Public/MMTVehicleSuspensionStructs.h" },
		{ "ToolTip", "----------------- Tracks configuration" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTrackSets_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTrackSets>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTrackSets_Statics::NewProp_TrackName_MetaData[] = {
		{ "Category", "TrackSets" },
		{ "ModuleRelativePath", "Public/MMTVehicleSuspensionStructs.h" },
		{ "ToolTip", "Name of this track for debugging purposes and improving usability, for example 'Left Track'" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FTrackSets_Statics::NewProp_TrackName = { "TrackName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTrackSets, TrackName), METADATA_PARAMS(Z_Construct_UScriptStruct_FTrackSets_Statics::NewProp_TrackName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTrackSets_Statics::NewProp_TrackName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTrackSets_Statics::NewProp_bDisabled_MetaData[] = {
		{ "Category", "TrackSets" },
		{ "ModuleRelativePath", "Public/MMTVehicleSuspensionStructs.h" },
		{ "ToolTip", "Disables item from physics calculations and applying forces, useful for debugging." },
	};
#endif
	void Z_Construct_UScriptStruct_FTrackSets_Statics::NewProp_bDisabled_SetBit(void* Obj)
	{
		((FTrackSets*)Obj)->bDisabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTrackSets_Statics::NewProp_bDisabled = { "bDisabled", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FTrackSets), &Z_Construct_UScriptStruct_FTrackSets_Statics::NewProp_bDisabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTrackSets_Statics::NewProp_bDisabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTrackSets_Statics::NewProp_bDisabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTrackSets_Statics::NewProp_bDebugMode_MetaData[] = {
		{ "Category", "TrackSets" },
		{ "ModuleRelativePath", "Public/MMTVehicleSuspensionStructs.h" },
		{ "ToolTip", "Enable on screen debug output" },
	};
#endif
	void Z_Construct_UScriptStruct_FTrackSets_Statics::NewProp_bDebugMode_SetBit(void* Obj)
	{
		((FTrackSets*)Obj)->bDebugMode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTrackSets_Statics::NewProp_bDebugMode = { "bDebugMode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FTrackSets), &Z_Construct_UScriptStruct_FTrackSets_Statics::NewProp_bDebugMode_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTrackSets_Statics::NewProp_bDebugMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTrackSets_Statics::NewProp_bDebugMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTrackSets_Statics::NewProp_ReferenceFrameComponentName_MetaData[] = {
		{ "Category", "TrackSets" },
		{ "ModuleRelativePath", "Public/MMTVehicleSuspensionStructs.h" },
		{ "ToolTip", "Name of the scene component that will be used as frame of reference for position and rotation of track center. For example, track can be mounted on rotating platform" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTrackSets_Statics::NewProp_ReferenceFrameComponentName = { "ReferenceFrameComponentName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTrackSets, ReferenceFrameComponentName), METADATA_PARAMS(Z_Construct_UScriptStruct_FTrackSets_Statics::NewProp_ReferenceFrameComponentName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTrackSets_Statics::NewProp_ReferenceFrameComponentName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTrackSets_Statics::NewProp_TrackClass_MetaData[] = {
		{ "Category", "TrackSets" },
		{ "ModuleRelativePath", "Public/MMTVehicleSuspensionStructs.h" },
		{ "ToolTip", "Track class that contains common track configuration parameters" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FTrackSets_Statics::NewProp_TrackClass = { "TrackClass", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTrackSets, TrackClass), Z_Construct_UClass_UMMTTrack_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FTrackSets_Statics::NewProp_TrackClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTrackSets_Statics::NewProp_TrackClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTrackSets_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTrackSets_Statics::NewProp_TrackName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTrackSets_Statics::NewProp_bDisabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTrackSets_Statics::NewProp_bDebugMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTrackSets_Statics::NewProp_ReferenceFrameComponentName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTrackSets_Statics::NewProp_TrackClass,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTrackSets_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MMT,
		nullptr,
		&NewStructOps,
		"TrackSets",
		sizeof(FTrackSets),
		alignof(FTrackSets),
		Z_Construct_UScriptStruct_FTrackSets_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTrackSets_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTrackSets_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTrackSets_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTrackSets()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTrackSets_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MMT();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TrackSets"), sizeof(FTrackSets), Get_Z_Construct_UScriptStruct_FTrackSets_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTrackSets_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTrackSets_Hash() { return 3257084340U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
