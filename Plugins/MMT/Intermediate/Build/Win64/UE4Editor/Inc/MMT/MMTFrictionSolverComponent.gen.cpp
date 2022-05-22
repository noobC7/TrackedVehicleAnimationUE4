// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MMT/Public/MMTFrictionSolverComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMMTFrictionSolverComponent() {}
// Cross Module References
	MMT_API UScriptStruct* Z_Construct_UScriptStruct_FPassiveFrictionSetSettings();
	UPackage* Z_Construct_UPackage__Script_MMT();
	MMT_API UClass* Z_Construct_UClass_UMMTPhysicalSurfaceFrictionCoefficientsDataAsset_NoRegister();
	MMT_API UScriptStruct* Z_Construct_UScriptStruct_FFrictionSetPassiveStruct();
	MMT_API UClass* Z_Construct_UClass_UMMTFrictionSolverComponent_NoRegister();
	MMT_API UClass* Z_Construct_UClass_UMMTFrictionSolverComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	MMT_API UClass* Z_Construct_UClass_UMMTFrictionSolver_NoRegister();
// End Cross Module References
class UScriptStruct* FPassiveFrictionSetSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MMT_API uint32 Get_Z_Construct_UScriptStruct_FPassiveFrictionSetSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPassiveFrictionSetSettings, Z_Construct_UPackage__Script_MMT(), TEXT("PassiveFrictionSetSettings"), sizeof(FPassiveFrictionSetSettings), Get_Z_Construct_UScriptStruct_FPassiveFrictionSetSettings_Hash());
	}
	return Singleton;
}
template<> MMT_API UScriptStruct* StaticStruct<FPassiveFrictionSetSettings>()
{
	return FPassiveFrictionSetSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPassiveFrictionSetSettings(FPassiveFrictionSetSettings::StaticStruct, TEXT("/Script/MMT"), TEXT("PassiveFrictionSetSettings"), false, nullptr, nullptr);
static struct FScriptStruct_MMT_StaticRegisterNativesFPassiveFrictionSetSettings
{
	FScriptStruct_MMT_StaticRegisterNativesFPassiveFrictionSetSettings()
	{
		UScriptStruct::DeferCppStructOps<FPassiveFrictionSetSettings>(FName(TEXT("PassiveFrictionSetSettings")));
	}
} ScriptStruct_MMT_StaticRegisterNativesFPassiveFrictionSetSettings;
	struct Z_Construct_UScriptStruct_FPassiveFrictionSetSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasPassives_MetaData[];
#endif
		static void NewProp_bHasPassives_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasPassives;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PassivePhysicalSurfaceFrictionCoefficients_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PassivePhysicalSurfaceFrictionCoefficients;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PassiveFrictionSets_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PassiveFrictionSets_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PassiveFrictionSets;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPassiveFrictionSetSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MMTFrictionSolverComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPassiveFrictionSetSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPassiveFrictionSetSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPassiveFrictionSetSettings_Statics::NewProp_bHasPassives_MetaData[] = {
		{ "Category", "Friction Settings" },
		{ "ModuleRelativePath", "Public/MMTFrictionSolverComponent.h" },
		{ "ToolTip", "Set to true if vehicle has friction surfaces such as ski." },
	};
#endif
	void Z_Construct_UScriptStruct_FPassiveFrictionSetSettings_Statics::NewProp_bHasPassives_SetBit(void* Obj)
	{
		((FPassiveFrictionSetSettings*)Obj)->bHasPassives = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPassiveFrictionSetSettings_Statics::NewProp_bHasPassives = { "bHasPassives", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPassiveFrictionSetSettings), &Z_Construct_UScriptStruct_FPassiveFrictionSetSettings_Statics::NewProp_bHasPassives_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPassiveFrictionSetSettings_Statics::NewProp_bHasPassives_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPassiveFrictionSetSettings_Statics::NewProp_bHasPassives_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPassiveFrictionSetSettings_Statics::NewProp_PassivePhysicalSurfaceFrictionCoefficients_MetaData[] = {
		{ "Category", "Friction Settings" },
		{ "EditCondition", "bHasSurfaces" },
		{ "ModuleRelativePath", "Public/MMTFrictionSolverComponent.h" },
		{ "ToolTip", "Reference data asset of physical surface friction coefficients" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPassiveFrictionSetSettings_Statics::NewProp_PassivePhysicalSurfaceFrictionCoefficients = { "PassivePhysicalSurfaceFrictionCoefficients", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPassiveFrictionSetSettings, PassivePhysicalSurfaceFrictionCoefficients), Z_Construct_UClass_UMMTPhysicalSurfaceFrictionCoefficientsDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FPassiveFrictionSetSettings_Statics::NewProp_PassivePhysicalSurfaceFrictionCoefficients_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPassiveFrictionSetSettings_Statics::NewProp_PassivePhysicalSurfaceFrictionCoefficients_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPassiveFrictionSetSettings_Statics::NewProp_PassiveFrictionSets_Inner = { "PassiveFrictionSets", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FFrictionSetPassiveStruct, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPassiveFrictionSetSettings_Statics::NewProp_PassiveFrictionSets_MetaData[] = {
		{ "Category", "Friction Settings" },
		{ "EditCondition", "bHasSurfaces" },
		{ "ModuleRelativePath", "Public/MMTFrictionSolverComponent.h" },
		{ "ToolTip", "Surface friction sets are entities such as ski or just regular surfaces. For example, aerosled with 4 ski will have 4 sets of surfaces." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPassiveFrictionSetSettings_Statics::NewProp_PassiveFrictionSets = { "PassiveFrictionSets", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPassiveFrictionSetSettings, PassiveFrictionSets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPassiveFrictionSetSettings_Statics::NewProp_PassiveFrictionSets_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPassiveFrictionSetSettings_Statics::NewProp_PassiveFrictionSets_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPassiveFrictionSetSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPassiveFrictionSetSettings_Statics::NewProp_bHasPassives,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPassiveFrictionSetSettings_Statics::NewProp_PassivePhysicalSurfaceFrictionCoefficients,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPassiveFrictionSetSettings_Statics::NewProp_PassiveFrictionSets_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPassiveFrictionSetSettings_Statics::NewProp_PassiveFrictionSets,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPassiveFrictionSetSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MMT,
		nullptr,
		&NewStructOps,
		"PassiveFrictionSetSettings",
		sizeof(FPassiveFrictionSetSettings),
		alignof(FPassiveFrictionSetSettings),
		Z_Construct_UScriptStruct_FPassiveFrictionSetSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPassiveFrictionSetSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPassiveFrictionSetSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPassiveFrictionSetSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPassiveFrictionSetSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPassiveFrictionSetSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MMT();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PassiveFrictionSetSettings"), sizeof(FPassiveFrictionSetSettings), Get_Z_Construct_UScriptStruct_FPassiveFrictionSetSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPassiveFrictionSetSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPassiveFrictionSetSettings_Hash() { return 4082206475U; }
	void UMMTFrictionSolverComponent::StaticRegisterNativesUMMTFrictionSolverComponent()
	{
	}
	UClass* Z_Construct_UClass_UMMTFrictionSolverComponent_NoRegister()
	{
		return UMMTFrictionSolverComponent::StaticClass();
	}
	struct Z_Construct_UClass_UMMTFrictionSolverComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EffectedComponentName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_EffectedComponentName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PassiveSetSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PassiveSetSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrictionSolver_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FrictionSolver;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMMTFrictionSolverComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_MMT,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMMTFrictionSolverComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "MMTFrictionSolverComponent.h" },
		{ "ModuleRelativePath", "Public/MMTFrictionSolverComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMMTFrictionSolverComponent_Statics::NewProp_bDisabled_MetaData[] = {
		{ "Category", "Friction Settings" },
		{ "ModuleRelativePath", "Public/MMTFrictionSolverComponent.h" },
		{ "ToolTip", "Disables component from doing physics calculations and applying forces, useful for debugging" },
	};
#endif
	void Z_Construct_UClass_UMMTFrictionSolverComponent_Statics::NewProp_bDisabled_SetBit(void* Obj)
	{
		((UMMTFrictionSolverComponent*)Obj)->bDisabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMMTFrictionSolverComponent_Statics::NewProp_bDisabled = { "bDisabled", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMMTFrictionSolverComponent), &Z_Construct_UClass_UMMTFrictionSolverComponent_Statics::NewProp_bDisabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMMTFrictionSolverComponent_Statics::NewProp_bDisabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMMTFrictionSolverComponent_Statics::NewProp_bDisabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMMTFrictionSolverComponent_Statics::NewProp_bDebugMode_MetaData[] = {
		{ "Category", "Friction Settings" },
		{ "ModuleRelativePath", "Public/MMTFrictionSolverComponent.h" },
		{ "ToolTip", "Enable on screen debug output" },
	};
#endif
	void Z_Construct_UClass_UMMTFrictionSolverComponent_Statics::NewProp_bDebugMode_SetBit(void* Obj)
	{
		((UMMTFrictionSolverComponent*)Obj)->bDebugMode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMMTFrictionSolverComponent_Statics::NewProp_bDebugMode = { "bDebugMode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMMTFrictionSolverComponent), &Z_Construct_UClass_UMMTFrictionSolverComponent_Statics::NewProp_bDebugMode_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMMTFrictionSolverComponent_Statics::NewProp_bDebugMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMMTFrictionSolverComponent_Statics::NewProp_bDebugMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMMTFrictionSolverComponent_Statics::NewProp_EffectedComponentName_MetaData[] = {
		{ "Category", "Friction Settings" },
		{ "ModuleRelativePath", "Public/MMTFrictionSolverComponent.h" },
		{ "ToolTip", "Name of the mesh component that will receive friction force, usually chassis/root component" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMMTFrictionSolverComponent_Statics::NewProp_EffectedComponentName = { "EffectedComponentName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMMTFrictionSolverComponent, EffectedComponentName), METADATA_PARAMS(Z_Construct_UClass_UMMTFrictionSolverComponent_Statics::NewProp_EffectedComponentName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMMTFrictionSolverComponent_Statics::NewProp_EffectedComponentName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMMTFrictionSolverComponent_Statics::NewProp_PassiveSetSettings_MetaData[] = {
		{ "Category", "Friction Settings" },
		{ "ModuleRelativePath", "Public/MMTFrictionSolverComponent.h" },
		{ "ToolTip", "Settings of the friction surfaces" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMMTFrictionSolverComponent_Statics::NewProp_PassiveSetSettings = { "PassiveSetSettings", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMMTFrictionSolverComponent, PassiveSetSettings), Z_Construct_UScriptStruct_FPassiveFrictionSetSettings, METADATA_PARAMS(Z_Construct_UClass_UMMTFrictionSolverComponent_Statics::NewProp_PassiveSetSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMMTFrictionSolverComponent_Statics::NewProp_PassiveSetSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMMTFrictionSolverComponent_Statics::NewProp_FrictionSolver_MetaData[] = {
		{ "Category", "MMTFrictionSolverComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MMTFrictionSolverComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMMTFrictionSolverComponent_Statics::NewProp_FrictionSolver = { "FrictionSolver", nullptr, (EPropertyFlags)0x00120000000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMMTFrictionSolverComponent, FrictionSolver), Z_Construct_UClass_UMMTFrictionSolver_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMMTFrictionSolverComponent_Statics::NewProp_FrictionSolver_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMMTFrictionSolverComponent_Statics::NewProp_FrictionSolver_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMMTFrictionSolverComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMMTFrictionSolverComponent_Statics::NewProp_bDisabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMMTFrictionSolverComponent_Statics::NewProp_bDebugMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMMTFrictionSolverComponent_Statics::NewProp_EffectedComponentName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMMTFrictionSolverComponent_Statics::NewProp_PassiveSetSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMMTFrictionSolverComponent_Statics::NewProp_FrictionSolver,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMMTFrictionSolverComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMMTFrictionSolverComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMMTFrictionSolverComponent_Statics::ClassParams = {
		&UMMTFrictionSolverComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMMTFrictionSolverComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMMTFrictionSolverComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UMMTFrictionSolverComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMMTFrictionSolverComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMMTFrictionSolverComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMMTFrictionSolverComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMMTFrictionSolverComponent, 1458273815);
	template<> MMT_API UClass* StaticClass<UMMTFrictionSolverComponent>()
	{
		return UMMTFrictionSolverComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMMTFrictionSolverComponent(Z_Construct_UClass_UMMTFrictionSolverComponent, &UMMTFrictionSolverComponent::StaticClass, TEXT("/Script/MMT"), TEXT("UMMTFrictionSolverComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMMTFrictionSolverComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
