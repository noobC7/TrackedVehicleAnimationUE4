// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MMT/Public/MMTSuspensionStackComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMMTSuspensionStackComponent() {}
// Cross Module References
	MMT_API UClass* Z_Construct_UClass_UMMTSuspensionStackComponent_NoRegister();
	MMT_API UClass* Z_Construct_UClass_UMMTSuspensionStackComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_MMT();
	MMT_API UClass* Z_Construct_UClass_UMMTSuspensionStack_NoRegister();
// End Cross Module References
	void UMMTSuspensionStackComponent::StaticRegisterNativesUMMTSuspensionStackComponent()
	{
	}
	UClass* Z_Construct_UClass_UMMTSuspensionStackComponent_NoRegister()
	{
		return UMMTSuspensionStackComponent::StaticClass();
	}
	struct Z_Construct_UClass_UMMTSuspensionStackComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SuspensionStack_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SuspensionStack;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMMTSuspensionStackComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_MMT,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMMTSuspensionStackComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "MMTSuspensionStackComponent.h" },
		{ "ModuleRelativePath", "Public/MMTSuspensionStackComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMMTSuspensionStackComponent_Statics::NewProp_SuspensionStack_MetaData[] = {
		{ "Category", "MMTSuspensionStackComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MMTSuspensionStackComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMMTSuspensionStackComponent_Statics::NewProp_SuspensionStack = { "SuspensionStack", nullptr, (EPropertyFlags)0x00120000000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMMTSuspensionStackComponent, SuspensionStack), Z_Construct_UClass_UMMTSuspensionStack_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMMTSuspensionStackComponent_Statics::NewProp_SuspensionStack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMMTSuspensionStackComponent_Statics::NewProp_SuspensionStack_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMMTSuspensionStackComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMMTSuspensionStackComponent_Statics::NewProp_SuspensionStack,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMMTSuspensionStackComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMMTSuspensionStackComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMMTSuspensionStackComponent_Statics::ClassParams = {
		&UMMTSuspensionStackComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMMTSuspensionStackComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMMTSuspensionStackComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UMMTSuspensionStackComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMMTSuspensionStackComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMMTSuspensionStackComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMMTSuspensionStackComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMMTSuspensionStackComponent, 1499755045);
	template<> MMT_API UClass* StaticClass<UMMTSuspensionStackComponent>()
	{
		return UMMTSuspensionStackComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMMTSuspensionStackComponent(Z_Construct_UClass_UMMTSuspensionStackComponent, &UMMTSuspensionStackComponent::StaticClass, TEXT("/Script/MMT"), TEXT("UMMTSuspensionStackComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMMTSuspensionStackComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
