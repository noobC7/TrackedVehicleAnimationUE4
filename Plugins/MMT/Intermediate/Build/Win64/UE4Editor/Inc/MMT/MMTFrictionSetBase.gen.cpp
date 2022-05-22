// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MMT/Private/MMTFrictionSetBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMMTFrictionSetBase() {}
// Cross Module References
	MMT_API UScriptStruct* Z_Construct_UScriptStruct_FFrictionSetBaseStruct();
	UPackage* Z_Construct_UPackage__Script_MMT();
	MMT_API UClass* Z_Construct_UClass_UMMTFrictionSetBase_NoRegister();
	MMT_API UClass* Z_Construct_UClass_UMMTFrictionSetBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
// End Cross Module References
class UScriptStruct* FFrictionSetBaseStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MMT_API uint32 Get_Z_Construct_UScriptStruct_FFrictionSetBaseStruct_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFrictionSetBaseStruct, Z_Construct_UPackage__Script_MMT(), TEXT("FrictionSetBaseStruct"), sizeof(FFrictionSetBaseStruct), Get_Z_Construct_UScriptStruct_FFrictionSetBaseStruct_Hash());
	}
	return Singleton;
}
template<> MMT_API UScriptStruct* StaticStruct<FFrictionSetBaseStruct>()
{
	return FFrictionSetBaseStruct::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFrictionSetBaseStruct(FFrictionSetBaseStruct::StaticStruct, TEXT("/Script/MMT"), TEXT("FrictionSetBaseStruct"), false, nullptr, nullptr);
static struct FScriptStruct_MMT_StaticRegisterNativesFFrictionSetBaseStruct
{
	FScriptStruct_MMT_StaticRegisterNativesFFrictionSetBaseStruct()
	{
		UScriptStruct::DeferCppStructOps<FFrictionSetBaseStruct>(FName(TEXT("FrictionSetBaseStruct")));
	}
} ScriptStruct_MMT_StaticRegisterNativesFFrictionSetBaseStruct;
	struct Z_Construct_UScriptStruct_FFrictionSetBaseStruct_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrictionSetName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_FrictionSetName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReferenceFrameComponentName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReferenceFrameComponentName;
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
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFrictionSetBaseStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/MMTFrictionSetBase.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFrictionSetBaseStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFrictionSetBaseStruct>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFrictionSetBaseStruct_Statics::NewProp_FrictionSetName_MetaData[] = {
		{ "Category", "FrictionSetBaseStruct" },
		{ "ModuleRelativePath", "Private/MMTFrictionSetBase.h" },
		{ "ToolTip", "Name of this friction set for debugging purposes and improving usability" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FFrictionSetBaseStruct_Statics::NewProp_FrictionSetName = { "FrictionSetName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFrictionSetBaseStruct, FrictionSetName), METADATA_PARAMS(Z_Construct_UScriptStruct_FFrictionSetBaseStruct_Statics::NewProp_FrictionSetName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFrictionSetBaseStruct_Statics::NewProp_FrictionSetName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFrictionSetBaseStruct_Statics::NewProp_ReferenceFrameComponentName_MetaData[] = {
		{ "Category", "FrictionSetBaseStruct" },
		{ "ModuleRelativePath", "Private/MMTFrictionSetBase.h" },
		{ "ToolTip", "Name of the mesh component that will be used as frame of reference for world space position and rotations" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFrictionSetBaseStruct_Statics::NewProp_ReferenceFrameComponentName = { "ReferenceFrameComponentName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFrictionSetBaseStruct, ReferenceFrameComponentName), METADATA_PARAMS(Z_Construct_UScriptStruct_FFrictionSetBaseStruct_Statics::NewProp_ReferenceFrameComponentName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFrictionSetBaseStruct_Statics::NewProp_ReferenceFrameComponentName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFrictionSetBaseStruct_Statics::NewProp_bDisabled_MetaData[] = {
		{ "Category", "FrictionSetBaseStruct" },
		{ "ModuleRelativePath", "Private/MMTFrictionSetBase.h" },
		{ "ToolTip", "Disables item from physics calculations and applying forces, useful for debugging." },
	};
#endif
	void Z_Construct_UScriptStruct_FFrictionSetBaseStruct_Statics::NewProp_bDisabled_SetBit(void* Obj)
	{
		((FFrictionSetBaseStruct*)Obj)->bDisabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFrictionSetBaseStruct_Statics::NewProp_bDisabled = { "bDisabled", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FFrictionSetBaseStruct), &Z_Construct_UScriptStruct_FFrictionSetBaseStruct_Statics::NewProp_bDisabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FFrictionSetBaseStruct_Statics::NewProp_bDisabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFrictionSetBaseStruct_Statics::NewProp_bDisabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFrictionSetBaseStruct_Statics::NewProp_bDebugMode_MetaData[] = {
		{ "Category", "FrictionSetBaseStruct" },
		{ "ModuleRelativePath", "Private/MMTFrictionSetBase.h" },
		{ "ToolTip", "Enable on screen debug output" },
	};
#endif
	void Z_Construct_UScriptStruct_FFrictionSetBaseStruct_Statics::NewProp_bDebugMode_SetBit(void* Obj)
	{
		((FFrictionSetBaseStruct*)Obj)->bDebugMode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFrictionSetBaseStruct_Statics::NewProp_bDebugMode = { "bDebugMode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FFrictionSetBaseStruct), &Z_Construct_UScriptStruct_FFrictionSetBaseStruct_Statics::NewProp_bDebugMode_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FFrictionSetBaseStruct_Statics::NewProp_bDebugMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFrictionSetBaseStruct_Statics::NewProp_bDebugMode_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFrictionSetBaseStruct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFrictionSetBaseStruct_Statics::NewProp_FrictionSetName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFrictionSetBaseStruct_Statics::NewProp_ReferenceFrameComponentName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFrictionSetBaseStruct_Statics::NewProp_bDisabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFrictionSetBaseStruct_Statics::NewProp_bDebugMode,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFrictionSetBaseStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MMT,
		nullptr,
		&NewStructOps,
		"FrictionSetBaseStruct",
		sizeof(FFrictionSetBaseStruct),
		alignof(FFrictionSetBaseStruct),
		Z_Construct_UScriptStruct_FFrictionSetBaseStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFrictionSetBaseStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFrictionSetBaseStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFrictionSetBaseStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFrictionSetBaseStruct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFrictionSetBaseStruct_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MMT();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FrictionSetBaseStruct"), sizeof(FFrictionSetBaseStruct), Get_Z_Construct_UScriptStruct_FFrictionSetBaseStruct_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFrictionSetBaseStruct_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFrictionSetBaseStruct_Hash() { return 1606071513U; }
	void UMMTFrictionSetBase::StaticRegisterNativesUMMTFrictionSetBase()
	{
	}
	UClass* Z_Construct_UClass_UMMTFrictionSetBase_NoRegister()
	{
		return UMMTFrictionSetBase::StaticClass();
	}
	struct Z_Construct_UClass_UMMTFrictionSetBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrictionSetName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_FrictionSetName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EffectedComponentMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EffectedComponentMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReferenceFrameComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReferenceFrameComponent;
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
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMMTFrictionSetBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MMT,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMMTFrictionSetBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MMTFrictionSetBase.h" },
		{ "ModuleRelativePath", "Private/MMTFrictionSetBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMMTFrictionSetBase_Statics::NewProp_FrictionSetName_MetaData[] = {
		{ "ModuleRelativePath", "Private/MMTFrictionSetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMMTFrictionSetBase_Statics::NewProp_FrictionSetName = { "FrictionSetName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMMTFrictionSetBase, FrictionSetName), METADATA_PARAMS(Z_Construct_UClass_UMMTFrictionSetBase_Statics::NewProp_FrictionSetName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMMTFrictionSetBase_Statics::NewProp_FrictionSetName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMMTFrictionSetBase_Statics::NewProp_EffectedComponentMesh_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/MMTFrictionSetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMMTFrictionSetBase_Statics::NewProp_EffectedComponentMesh = { "EffectedComponentMesh", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMMTFrictionSetBase, EffectedComponentMesh), Z_Construct_UClass_UMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMMTFrictionSetBase_Statics::NewProp_EffectedComponentMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMMTFrictionSetBase_Statics::NewProp_EffectedComponentMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMMTFrictionSetBase_Statics::NewProp_ReferenceFrameComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/MMTFrictionSetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMMTFrictionSetBase_Statics::NewProp_ReferenceFrameComponent = { "ReferenceFrameComponent", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMMTFrictionSetBase, ReferenceFrameComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMMTFrictionSetBase_Statics::NewProp_ReferenceFrameComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMMTFrictionSetBase_Statics::NewProp_ReferenceFrameComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMMTFrictionSetBase_Statics::NewProp_bDisabled_MetaData[] = {
		{ "ModuleRelativePath", "Private/MMTFrictionSetBase.h" },
	};
#endif
	void Z_Construct_UClass_UMMTFrictionSetBase_Statics::NewProp_bDisabled_SetBit(void* Obj)
	{
		((UMMTFrictionSetBase*)Obj)->bDisabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMMTFrictionSetBase_Statics::NewProp_bDisabled = { "bDisabled", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMMTFrictionSetBase), &Z_Construct_UClass_UMMTFrictionSetBase_Statics::NewProp_bDisabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMMTFrictionSetBase_Statics::NewProp_bDisabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMMTFrictionSetBase_Statics::NewProp_bDisabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMMTFrictionSetBase_Statics::NewProp_bDebugMode_MetaData[] = {
		{ "ModuleRelativePath", "Private/MMTFrictionSetBase.h" },
	};
#endif
	void Z_Construct_UClass_UMMTFrictionSetBase_Statics::NewProp_bDebugMode_SetBit(void* Obj)
	{
		((UMMTFrictionSetBase*)Obj)->bDebugMode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMMTFrictionSetBase_Statics::NewProp_bDebugMode = { "bDebugMode", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMMTFrictionSetBase), &Z_Construct_UClass_UMMTFrictionSetBase_Statics::NewProp_bDebugMode_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMMTFrictionSetBase_Statics::NewProp_bDebugMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMMTFrictionSetBase_Statics::NewProp_bDebugMode_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMMTFrictionSetBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMMTFrictionSetBase_Statics::NewProp_FrictionSetName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMMTFrictionSetBase_Statics::NewProp_EffectedComponentMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMMTFrictionSetBase_Statics::NewProp_ReferenceFrameComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMMTFrictionSetBase_Statics::NewProp_bDisabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMMTFrictionSetBase_Statics::NewProp_bDebugMode,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMMTFrictionSetBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMMTFrictionSetBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMMTFrictionSetBase_Statics::ClassParams = {
		&UMMTFrictionSetBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMMTFrictionSetBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMMTFrictionSetBase_Statics::PropPointers),
		0,
		0x009000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UMMTFrictionSetBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMMTFrictionSetBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMMTFrictionSetBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMMTFrictionSetBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMMTFrictionSetBase, 804360880);
	template<> MMT_API UClass* StaticClass<UMMTFrictionSetBase>()
	{
		return UMMTFrictionSetBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMMTFrictionSetBase(Z_Construct_UClass_UMMTFrictionSetBase, &UMMTFrictionSetBase::StaticClass, TEXT("/Script/MMT"), TEXT("UMMTFrictionSetBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMMTFrictionSetBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
