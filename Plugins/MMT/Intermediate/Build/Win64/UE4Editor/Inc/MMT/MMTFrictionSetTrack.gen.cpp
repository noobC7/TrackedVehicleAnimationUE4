// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MMT/Public/MMTFrictionSetTrack.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMMTFrictionSetTrack() {}
// Cross Module References
	MMT_API UClass* Z_Construct_UClass_UMMTFrictionSetTrack_NoRegister();
	MMT_API UClass* Z_Construct_UClass_UMMTFrictionSetTrack();
	MMT_API UClass* Z_Construct_UClass_UMMTFrictionSetBase();
	UPackage* Z_Construct_UPackage__Script_MMT();
// End Cross Module References
	void UMMTFrictionSetTrack::StaticRegisterNativesUMMTFrictionSetTrack()
	{
	}
	UClass* Z_Construct_UClass_UMMTFrictionSetTrack_NoRegister()
	{
		return UMMTFrictionSetTrack::StaticClass();
	}
	struct Z_Construct_UClass_UMMTFrictionSetTrack_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MyTrackProperty_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MyTrackProperty;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMMTFrictionSetTrack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMMTFrictionSetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MMT,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMMTFrictionSetTrack_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MMTFrictionSetTrack.h" },
		{ "ModuleRelativePath", "Public/MMTFrictionSetTrack.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMMTFrictionSetTrack_Statics::NewProp_MyTrackProperty_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/MMTFrictionSetTrack.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMMTFrictionSetTrack_Statics::NewProp_MyTrackProperty = { "MyTrackProperty", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMMTFrictionSetTrack, MyTrackProperty), METADATA_PARAMS(Z_Construct_UClass_UMMTFrictionSetTrack_Statics::NewProp_MyTrackProperty_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMMTFrictionSetTrack_Statics::NewProp_MyTrackProperty_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMMTFrictionSetTrack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMMTFrictionSetTrack_Statics::NewProp_MyTrackProperty,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMMTFrictionSetTrack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMMTFrictionSetTrack>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMMTFrictionSetTrack_Statics::ClassParams = {
		&UMMTFrictionSetTrack::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMMTFrictionSetTrack_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMMTFrictionSetTrack_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMMTFrictionSetTrack_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMMTFrictionSetTrack_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMMTFrictionSetTrack()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMMTFrictionSetTrack_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMMTFrictionSetTrack, 1661502555);
	template<> MMT_API UClass* StaticClass<UMMTFrictionSetTrack>()
	{
		return UMMTFrictionSetTrack::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMMTFrictionSetTrack(Z_Construct_UClass_UMMTFrictionSetTrack, &UMMTFrictionSetTrack::StaticClass, TEXT("/Script/MMT"), TEXT("UMMTFrictionSetTrack"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMMTFrictionSetTrack);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
