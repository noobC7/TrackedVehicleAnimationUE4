// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MMT/Public/MMTTrack.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMMTTrack() {}
// Cross Module References
	MMT_API UScriptStruct* Z_Construct_UScriptStruct_FMMTTrackFrictionSettings();
	UPackage* Z_Construct_UPackage__Script_MMT();
	MMT_API UScriptStruct* Z_Construct_UScriptStruct_FMMTTrackPhysicalSurfaceFriction();
	PHYSICSCORE_API UEnum* Z_Construct_UEnum_PhysicsCore_EPhysicalSurface();
	MMT_API UClass* Z_Construct_UClass_UMMTTrack_NoRegister();
	MMT_API UClass* Z_Construct_UClass_UMMTTrack();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	ENGINE_API UClass* Z_Construct_UClass_UMeshComponent_NoRegister();
	MMT_API UScriptStruct* Z_Construct_UScriptStruct_FSuspensionStackStruct();
// End Cross Module References
class UScriptStruct* FMMTTrackFrictionSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MMT_API uint32 Get_Z_Construct_UScriptStruct_FMMTTrackFrictionSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMMTTrackFrictionSettings, Z_Construct_UPackage__Script_MMT(), TEXT("MMTTrackFrictionSettings"), sizeof(FMMTTrackFrictionSettings), Get_Z_Construct_UScriptStruct_FMMTTrackFrictionSettings_Hash());
	}
	return Singleton;
}
template<> MMT_API UScriptStruct* StaticStruct<FMMTTrackFrictionSettings>()
{
	return FMMTTrackFrictionSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMMTTrackFrictionSettings(FMMTTrackFrictionSettings::StaticStruct, TEXT("/Script/MMT"), TEXT("MMTTrackFrictionSettings"), false, nullptr, nullptr);
static struct FScriptStruct_MMT_StaticRegisterNativesFMMTTrackFrictionSettings
{
	FScriptStruct_MMT_StaticRegisterNativesFMMTTrackFrictionSettings()
	{
		UScriptStruct::DeferCppStructOps<FMMTTrackFrictionSettings>(FName(TEXT("MMTTrackFrictionSettings")));
	}
} ScriptStruct_MMT_StaticRegisterNativesFMMTTrackFrictionSettings;
	struct Z_Construct_UScriptStruct_FMMTTrackFrictionSettings_Statics
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
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TrackPhysicalSurfaceFrictionCoefficients_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrackPhysicalSurfaceFrictionCoefficients_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TrackPhysicalSurfaceFrictionCoefficients;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMMTTrackFrictionSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MMTTrack.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMMTTrackFrictionSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMMTTrackFrictionSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMMTTrackFrictionSettings_Statics::NewProp_MuXStatic_MetaData[] = {
		{ "Category", "MMTTrackFrictionSettings" },
		{ "ModuleRelativePath", "Public/MMTTrack.h" },
		{ "ToolTip", "Static friction coefficient in X axis" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMMTTrackFrictionSettings_Statics::NewProp_MuXStatic = { "MuXStatic", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMMTTrackFrictionSettings, MuXStatic), METADATA_PARAMS(Z_Construct_UScriptStruct_FMMTTrackFrictionSettings_Statics::NewProp_MuXStatic_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMMTTrackFrictionSettings_Statics::NewProp_MuXStatic_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMMTTrackFrictionSettings_Statics::NewProp_MuXKinetic_MetaData[] = {
		{ "Category", "MMTTrackFrictionSettings" },
		{ "ModuleRelativePath", "Public/MMTTrack.h" },
		{ "ToolTip", "Kinetic friction coefficient in X axis" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMMTTrackFrictionSettings_Statics::NewProp_MuXKinetic = { "MuXKinetic", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMMTTrackFrictionSettings, MuXKinetic), METADATA_PARAMS(Z_Construct_UScriptStruct_FMMTTrackFrictionSettings_Statics::NewProp_MuXKinetic_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMMTTrackFrictionSettings_Statics::NewProp_MuXKinetic_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMMTTrackFrictionSettings_Statics::NewProp_bUseAnisotropicFriction_MetaData[] = {
		{ "Category", "MMTTrackFrictionSettings" },
		{ "ModuleRelativePath", "Public/MMTTrack.h" },
		{ "ToolTip", "Set TRUE to specify different friction coefficient in Y axis, otherwise MuX is used as uniform coefficient. Useful for objects such as ice skates, brushed contact surface and some types of tank tracks." },
	};
#endif
	void Z_Construct_UScriptStruct_FMMTTrackFrictionSettings_Statics::NewProp_bUseAnisotropicFriction_SetBit(void* Obj)
	{
		((FMMTTrackFrictionSettings*)Obj)->bUseAnisotropicFriction = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMMTTrackFrictionSettings_Statics::NewProp_bUseAnisotropicFriction = { "bUseAnisotropicFriction", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FMMTTrackFrictionSettings), &Z_Construct_UScriptStruct_FMMTTrackFrictionSettings_Statics::NewProp_bUseAnisotropicFriction_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMMTTrackFrictionSettings_Statics::NewProp_bUseAnisotropicFriction_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMMTTrackFrictionSettings_Statics::NewProp_bUseAnisotropicFriction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMMTTrackFrictionSettings_Statics::NewProp_MuYStatic_MetaData[] = {
		{ "Category", "MMTTrackFrictionSettings" },
		{ "EditCondition", "bUseAnisotropicFriction" },
		{ "ModuleRelativePath", "Public/MMTTrack.h" },
		{ "ToolTip", "Static friction coefficient in Y axis" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMMTTrackFrictionSettings_Statics::NewProp_MuYStatic = { "MuYStatic", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMMTTrackFrictionSettings, MuYStatic), METADATA_PARAMS(Z_Construct_UScriptStruct_FMMTTrackFrictionSettings_Statics::NewProp_MuYStatic_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMMTTrackFrictionSettings_Statics::NewProp_MuYStatic_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMMTTrackFrictionSettings_Statics::NewProp_MuYKinetic_MetaData[] = {
		{ "Category", "MMTTrackFrictionSettings" },
		{ "EditCondition", "bUseAnisotropicFriction" },
		{ "ModuleRelativePath", "Public/MMTTrack.h" },
		{ "ToolTip", "Kinetic friction coefficient in Y axis" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMMTTrackFrictionSettings_Statics::NewProp_MuYKinetic = { "MuYKinetic", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMMTTrackFrictionSettings, MuYKinetic), METADATA_PARAMS(Z_Construct_UScriptStruct_FMMTTrackFrictionSettings_Statics::NewProp_MuYKinetic_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMMTTrackFrictionSettings_Statics::NewProp_MuYKinetic_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMMTTrackFrictionSettings_Statics::NewProp_TrackPhysicalSurfaceFrictionCoefficients_Inner = { "TrackPhysicalSurfaceFrictionCoefficients", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMMTTrackPhysicalSurfaceFriction, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMMTTrackFrictionSettings_Statics::NewProp_TrackPhysicalSurfaceFrictionCoefficients_MetaData[] = {
		{ "Category", "MMTTrackFrictionSettings" },
		{ "ModuleRelativePath", "Public/MMTTrack.h" },
		{ "ToolTip", "Friction coefficients for different physical surfaces" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMMTTrackFrictionSettings_Statics::NewProp_TrackPhysicalSurfaceFrictionCoefficients = { "TrackPhysicalSurfaceFrictionCoefficients", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMMTTrackFrictionSettings, TrackPhysicalSurfaceFrictionCoefficients), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMMTTrackFrictionSettings_Statics::NewProp_TrackPhysicalSurfaceFrictionCoefficients_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMMTTrackFrictionSettings_Statics::NewProp_TrackPhysicalSurfaceFrictionCoefficients_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMMTTrackFrictionSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMMTTrackFrictionSettings_Statics::NewProp_MuXStatic,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMMTTrackFrictionSettings_Statics::NewProp_MuXKinetic,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMMTTrackFrictionSettings_Statics::NewProp_bUseAnisotropicFriction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMMTTrackFrictionSettings_Statics::NewProp_MuYStatic,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMMTTrackFrictionSettings_Statics::NewProp_MuYKinetic,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMMTTrackFrictionSettings_Statics::NewProp_TrackPhysicalSurfaceFrictionCoefficients_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMMTTrackFrictionSettings_Statics::NewProp_TrackPhysicalSurfaceFrictionCoefficients,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMMTTrackFrictionSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MMT,
		nullptr,
		&NewStructOps,
		"MMTTrackFrictionSettings",
		sizeof(FMMTTrackFrictionSettings),
		alignof(FMMTTrackFrictionSettings),
		Z_Construct_UScriptStruct_FMMTTrackFrictionSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMMTTrackFrictionSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMMTTrackFrictionSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMMTTrackFrictionSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMMTTrackFrictionSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMMTTrackFrictionSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MMT();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MMTTrackFrictionSettings"), sizeof(FMMTTrackFrictionSettings), Get_Z_Construct_UScriptStruct_FMMTTrackFrictionSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMMTTrackFrictionSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMMTTrackFrictionSettings_Hash() { return 590657406U; }
class UScriptStruct* FMMTTrackPhysicalSurfaceFriction::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MMT_API uint32 Get_Z_Construct_UScriptStruct_FMMTTrackPhysicalSurfaceFriction_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMMTTrackPhysicalSurfaceFriction, Z_Construct_UPackage__Script_MMT(), TEXT("MMTTrackPhysicalSurfaceFriction"), sizeof(FMMTTrackPhysicalSurfaceFriction), Get_Z_Construct_UScriptStruct_FMMTTrackPhysicalSurfaceFriction_Hash());
	}
	return Singleton;
}
template<> MMT_API UScriptStruct* StaticStruct<FMMTTrackPhysicalSurfaceFriction>()
{
	return FMMTTrackPhysicalSurfaceFriction::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMMTTrackPhysicalSurfaceFriction(FMMTTrackPhysicalSurfaceFriction::StaticStruct, TEXT("/Script/MMT"), TEXT("MMTTrackPhysicalSurfaceFriction"), false, nullptr, nullptr);
static struct FScriptStruct_MMT_StaticRegisterNativesFMMTTrackPhysicalSurfaceFriction
{
	FScriptStruct_MMT_StaticRegisterNativesFMMTTrackPhysicalSurfaceFriction()
	{
		UScriptStruct::DeferCppStructOps<FMMTTrackPhysicalSurfaceFriction>(FName(TEXT("MMTTrackPhysicalSurfaceFriction")));
	}
} ScriptStruct_MMT_StaticRegisterNativesFMMTTrackPhysicalSurfaceFriction;
	struct Z_Construct_UScriptStruct_FMMTTrackPhysicalSurfaceFriction_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMMTTrackPhysicalSurfaceFriction_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//----------------- Track settings\n" },
		{ "ModuleRelativePath", "Public/MMTTrack.h" },
		{ "ToolTip", "----------------- Track settings" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMMTTrackPhysicalSurfaceFriction_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMMTTrackPhysicalSurfaceFriction>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMMTTrackPhysicalSurfaceFriction_Statics::NewProp_PhysicalSurface_MetaData[] = {
		{ "Category", "MMTTrackPhysicalSurfaceFriction" },
		{ "ModuleRelativePath", "Public/MMTTrack.h" },
		{ "ToolTip", "Physical surface for which we define friction properties" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMMTTrackPhysicalSurfaceFriction_Statics::NewProp_PhysicalSurface = { "PhysicalSurface", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMMTTrackPhysicalSurfaceFriction, PhysicalSurface), Z_Construct_UEnum_PhysicsCore_EPhysicalSurface, METADATA_PARAMS(Z_Construct_UScriptStruct_FMMTTrackPhysicalSurfaceFriction_Statics::NewProp_PhysicalSurface_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMMTTrackPhysicalSurfaceFriction_Statics::NewProp_PhysicalSurface_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMMTTrackPhysicalSurfaceFriction_Statics::NewProp_FrictionScaleFactor_MetaData[] = {
		{ "Category", "MMTTrackPhysicalSurfaceFriction" },
		{ "ModuleRelativePath", "Public/MMTTrack.h" },
		{ "ToolTip", "Scale of the friction coefficient in respect to surface type. For example Ice would have smaller friction such as 0.1, while asphalt would improve friction with scale of 1.2" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMMTTrackPhysicalSurfaceFriction_Statics::NewProp_FrictionScaleFactor = { "FrictionScaleFactor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMMTTrackPhysicalSurfaceFriction, FrictionScaleFactor), METADATA_PARAMS(Z_Construct_UScriptStruct_FMMTTrackPhysicalSurfaceFriction_Statics::NewProp_FrictionScaleFactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMMTTrackPhysicalSurfaceFriction_Statics::NewProp_FrictionScaleFactor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMMTTrackPhysicalSurfaceFriction_Statics::NewProp_RollingFrictionCoefficient_MetaData[] = {
		{ "Category", "MMTTrackPhysicalSurfaceFriction" },
		{ "ModuleRelativePath", "Public/MMTTrack.h" },
		{ "ToolTip", "Higher rolling friction coefficient leads to higher rolling friction force" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMMTTrackPhysicalSurfaceFriction_Statics::NewProp_RollingFrictionCoefficient = { "RollingFrictionCoefficient", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMMTTrackPhysicalSurfaceFriction, RollingFrictionCoefficient), METADATA_PARAMS(Z_Construct_UScriptStruct_FMMTTrackPhysicalSurfaceFriction_Statics::NewProp_RollingFrictionCoefficient_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMMTTrackPhysicalSurfaceFriction_Statics::NewProp_RollingFrictionCoefficient_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMMTTrackPhysicalSurfaceFriction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMMTTrackPhysicalSurfaceFriction_Statics::NewProp_PhysicalSurface,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMMTTrackPhysicalSurfaceFriction_Statics::NewProp_FrictionScaleFactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMMTTrackPhysicalSurfaceFriction_Statics::NewProp_RollingFrictionCoefficient,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMMTTrackPhysicalSurfaceFriction_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MMT,
		nullptr,
		&NewStructOps,
		"MMTTrackPhysicalSurfaceFriction",
		sizeof(FMMTTrackPhysicalSurfaceFriction),
		alignof(FMMTTrackPhysicalSurfaceFriction),
		Z_Construct_UScriptStruct_FMMTTrackPhysicalSurfaceFriction_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMMTTrackPhysicalSurfaceFriction_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMMTTrackPhysicalSurfaceFriction_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMMTTrackPhysicalSurfaceFriction_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMMTTrackPhysicalSurfaceFriction()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMMTTrackPhysicalSurfaceFriction_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MMT();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MMTTrackPhysicalSurfaceFriction"), sizeof(FMMTTrackPhysicalSurfaceFriction), Get_Z_Construct_UScriptStruct_FMMTTrackPhysicalSurfaceFriction_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMMTTrackPhysicalSurfaceFriction_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMMTTrackPhysicalSurfaceFriction_Hash() { return 1576765061U; }
	DEFINE_FUNCTION(UMMTTrack::execToggleDebugMode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ToggleDebugMode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMMTTrack::execUpdatePhysics)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdatePhysics(Z_Param_DeltaTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMMTTrack::execSetEffectedMeshReference)
	{
		P_GET_OBJECT(UMeshComponent,Z_Param_EffectedMeshComponentRef);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEffectedMeshReference(Z_Param_EffectedMeshComponentRef);
		P_NATIVE_END;
	}
	void UMMTTrack::StaticRegisterNativesUMMTTrack()
	{
		UClass* Class = UMMTTrack::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetEffectedMeshReference", &UMMTTrack::execSetEffectedMeshReference },
			{ "ToggleDebugMode", &UMMTTrack::execToggleDebugMode },
			{ "UpdatePhysics", &UMMTTrack::execUpdatePhysics },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMMTTrack_SetEffectedMeshReference_Statics
	{
		struct MMTTrack_eventSetEffectedMeshReference_Parms
		{
			UMeshComponent* EffectedMeshComponentRef;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EffectedMeshComponentRef_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EffectedMeshComponentRef;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMMTTrack_SetEffectedMeshReference_Statics::NewProp_EffectedMeshComponentRef_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMMTTrack_SetEffectedMeshReference_Statics::NewProp_EffectedMeshComponentRef = { "EffectedMeshComponentRef", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MMTTrack_eventSetEffectedMeshReference_Parms, EffectedMeshComponentRef), Z_Construct_UClass_UMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMMTTrack_SetEffectedMeshReference_Statics::NewProp_EffectedMeshComponentRef_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMMTTrack_SetEffectedMeshReference_Statics::NewProp_EffectedMeshComponentRef_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMMTTrack_SetEffectedMeshReference_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMMTTrack_SetEffectedMeshReference_Statics::NewProp_EffectedMeshComponentRef,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMMTTrack_SetEffectedMeshReference_Statics::Function_MetaDataParams[] = {
		{ "Category", "MMT Track" },
		{ "Comment", "//Set effected mesh component reference, usually chassis/root component\n" },
		{ "ModuleRelativePath", "Public/MMTTrack.h" },
		{ "ToolTip", "Set effected mesh component reference, usually chassis/root component" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMMTTrack_SetEffectedMeshReference_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMMTTrack, nullptr, "SetEffectedMeshReference", nullptr, nullptr, sizeof(MMTTrack_eventSetEffectedMeshReference_Parms), Z_Construct_UFunction_UMMTTrack_SetEffectedMeshReference_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMMTTrack_SetEffectedMeshReference_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMMTTrack_SetEffectedMeshReference_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMMTTrack_SetEffectedMeshReference_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMMTTrack_SetEffectedMeshReference()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMMTTrack_SetEffectedMeshReference_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMMTTrack_ToggleDebugMode_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMMTTrack_ToggleDebugMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "MMT Suspension Stack" },
		{ "Comment", "//Toggle debug mode on/off\n" },
		{ "ModuleRelativePath", "Public/MMTTrack.h" },
		{ "ToolTip", "Toggle debug mode on/off" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMMTTrack_ToggleDebugMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMMTTrack, nullptr, "ToggleDebugMode", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMMTTrack_ToggleDebugMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMMTTrack_ToggleDebugMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMMTTrack_ToggleDebugMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMMTTrack_ToggleDebugMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMMTTrack_UpdatePhysics_Statics
	{
		struct MMTTrack_eventUpdatePhysics_Parms
		{
			float DeltaTime;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMMTTrack_UpdatePhysics_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MMTTrack_eventUpdatePhysics_Parms, DeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMMTTrack_UpdatePhysics_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMMTTrack_UpdatePhysics_Statics::NewProp_DeltaTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMMTTrack_UpdatePhysics_Statics::Function_MetaDataParams[] = {
		{ "Category", "MMT Track" },
		{ "ModuleRelativePath", "Public/MMTTrack.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMMTTrack_UpdatePhysics_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMMTTrack, nullptr, "UpdatePhysics", nullptr, nullptr, sizeof(MMTTrack_eventUpdatePhysics_Parms), Z_Construct_UFunction_UMMTTrack_UpdatePhysics_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMMTTrack_UpdatePhysics_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMMTTrack_UpdatePhysics_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMMTTrack_UpdatePhysics_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMMTTrack_UpdatePhysics()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMMTTrack_UpdatePhysics_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMMTTrack_NoRegister()
	{
		return UMMTTrack::StaticClass();
	}
	struct Z_Construct_UClass_UMMTTrack_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EffectedComponentName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_EffectedComponentName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrackFrictionSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TrackFrictionSettings;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SuspendedWheels_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SuspendedWheels_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SuspendedWheels;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMMTTrack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_MMT,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMMTTrack_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMMTTrack_SetEffectedMeshReference, "SetEffectedMeshReference" }, // 2525618810
		{ &Z_Construct_UFunction_UMMTTrack_ToggleDebugMode, "ToggleDebugMode" }, // 1835147757
		{ &Z_Construct_UFunction_UMMTTrack_UpdatePhysics, "UpdatePhysics" }, // 1681946241
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMMTTrack_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "MMT" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "MMTTrack.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MMTTrack.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMMTTrack_Statics::NewProp_EffectedComponentName_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/MMTTrack.h" },
		{ "ToolTip", "Name of the mesh component that will receive forces, usually chassis/root component" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMMTTrack_Statics::NewProp_EffectedComponentName = { "EffectedComponentName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMMTTrack, EffectedComponentName), METADATA_PARAMS(Z_Construct_UClass_UMMTTrack_Statics::NewProp_EffectedComponentName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMMTTrack_Statics::NewProp_EffectedComponentName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMMTTrack_Statics::NewProp_TrackFrictionSettings_MetaData[] = {
		{ "Category", "MMTTrack" },
		{ "ModuleRelativePath", "Public/MMTTrack.h" },
		{ "ToolTip", "Friction settings of the track" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMMTTrack_Statics::NewProp_TrackFrictionSettings = { "TrackFrictionSettings", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMMTTrack, TrackFrictionSettings), Z_Construct_UScriptStruct_FMMTTrackFrictionSettings, METADATA_PARAMS(Z_Construct_UClass_UMMTTrack_Statics::NewProp_TrackFrictionSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMMTTrack_Statics::NewProp_TrackFrictionSettings_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMMTTrack_Statics::NewProp_SuspendedWheels_Inner = { "SuspendedWheels", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSuspensionStackStruct, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMMTTrack_Statics::NewProp_SuspendedWheels_MetaData[] = {
		{ "Category", "MMTTrack" },
		{ "ModuleRelativePath", "Public/MMTTrack.h" },
		{ "ToolTip", "Friction settings of the track" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMMTTrack_Statics::NewProp_SuspendedWheels = { "SuspendedWheels", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMMTTrack, SuspendedWheels), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMMTTrack_Statics::NewProp_SuspendedWheels_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMMTTrack_Statics::NewProp_SuspendedWheels_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMMTTrack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMMTTrack_Statics::NewProp_EffectedComponentName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMMTTrack_Statics::NewProp_TrackFrictionSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMMTTrack_Statics::NewProp_SuspendedWheels_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMMTTrack_Statics::NewProp_SuspendedWheels,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMMTTrack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMMTTrack>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMMTTrack_Statics::ClassParams = {
		&UMMTTrack::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMMTTrack_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMMTTrack_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UMMTTrack_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMMTTrack_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMMTTrack()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMMTTrack_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMMTTrack, 164564844);
	template<> MMT_API UClass* StaticClass<UMMTTrack>()
	{
		return UMMTTrack::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMMTTrack(Z_Construct_UClass_UMMTTrack, &UMMTTrack::StaticClass, TEXT("/Script/MMT"), TEXT("UMMTTrack"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMMTTrack);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
