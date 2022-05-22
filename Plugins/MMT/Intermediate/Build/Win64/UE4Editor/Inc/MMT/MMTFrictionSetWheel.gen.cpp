// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MMT/Public/MMTFrictionSetWheel.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMMTFrictionSetWheel() {}
// Cross Module References
	MMT_API UClass* Z_Construct_UClass_UMMTFrictionSetWheel_NoRegister();
	MMT_API UClass* Z_Construct_UClass_UMMTFrictionSetWheel();
	MMT_API UClass* Z_Construct_UClass_UMMTFrictionSetBase();
	UPackage* Z_Construct_UPackage__Script_MMT();
// End Cross Module References
	void UMMTFrictionSetWheel::StaticRegisterNativesUMMTFrictionSetWheel()
	{
	}
	UClass* Z_Construct_UClass_UMMTFrictionSetWheel_NoRegister()
	{
		return UMMTFrictionSetWheel::StaticClass();
	}
	struct Z_Construct_UClass_UMMTFrictionSetWheel_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MyWheelProperty_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MyWheelProperty;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMMTFrictionSetWheel_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMMTFrictionSetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MMT,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMMTFrictionSetWheel_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n*\n*/" },
		{ "IncludePath", "MMTFrictionSetWheel.h" },
		{ "ModuleRelativePath", "Public/MMTFrictionSetWheel.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMMTFrictionSetWheel_Statics::NewProp_MyWheelProperty_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/MMTFrictionSetWheel.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMMTFrictionSetWheel_Statics::NewProp_MyWheelProperty = { "MyWheelProperty", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMMTFrictionSetWheel, MyWheelProperty), METADATA_PARAMS(Z_Construct_UClass_UMMTFrictionSetWheel_Statics::NewProp_MyWheelProperty_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMMTFrictionSetWheel_Statics::NewProp_MyWheelProperty_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMMTFrictionSetWheel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMMTFrictionSetWheel_Statics::NewProp_MyWheelProperty,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMMTFrictionSetWheel_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMMTFrictionSetWheel>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMMTFrictionSetWheel_Statics::ClassParams = {
		&UMMTFrictionSetWheel::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMMTFrictionSetWheel_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMMTFrictionSetWheel_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMMTFrictionSetWheel_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMMTFrictionSetWheel_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMMTFrictionSetWheel()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMMTFrictionSetWheel_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMMTFrictionSetWheel, 3868496730);
	template<> MMT_API UClass* StaticClass<UMMTFrictionSetWheel>()
	{
		return UMMTFrictionSetWheel::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMMTFrictionSetWheel(Z_Construct_UClass_UMMTFrictionSetWheel, &UMMTFrictionSetWheel::StaticClass, TEXT("/Script/MMT"), TEXT("UMMTFrictionSetWheel"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMMTFrictionSetWheel);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
