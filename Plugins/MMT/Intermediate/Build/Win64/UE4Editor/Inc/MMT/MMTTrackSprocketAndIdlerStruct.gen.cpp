// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MMT/Public/MMTTrackSprocketAndIdlerStruct.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMMTTrackSprocketAndIdlerStruct() {}
// Cross Module References
	MMT_API UScriptStruct* Z_Construct_UScriptStruct_FTrackSprocketAndIdlerStruct();
	UPackage* Z_Construct_UPackage__Script_MMT();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UMeshComponent_NoRegister();
// End Cross Module References
class UScriptStruct* FTrackSprocketAndIdlerStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MMT_API uint32 Get_Z_Construct_UScriptStruct_FTrackSprocketAndIdlerStruct_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTrackSprocketAndIdlerStruct, Z_Construct_UPackage__Script_MMT(), TEXT("TrackSprocketAndIdlerStruct"), sizeof(FTrackSprocketAndIdlerStruct), Get_Z_Construct_UScriptStruct_FTrackSprocketAndIdlerStruct_Hash());
	}
	return Singleton;
}
template<> MMT_API UScriptStruct* StaticStruct<FTrackSprocketAndIdlerStruct>()
{
	return FTrackSprocketAndIdlerStruct::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTrackSprocketAndIdlerStruct(FTrackSprocketAndIdlerStruct::StaticStruct, TEXT("/Script/MMT"), TEXT("TrackSprocketAndIdlerStruct"), false, nullptr, nullptr);
static struct FScriptStruct_MMT_StaticRegisterNativesFTrackSprocketAndIdlerStruct
{
	FScriptStruct_MMT_StaticRegisterNativesFTrackSprocketAndIdlerStruct()
	{
		UScriptStruct::DeferCppStructOps<FTrackSprocketAndIdlerStruct>(FName(TEXT("TrackSprocketAndIdlerStruct")));
	}
} ScriptStruct_MMT_StaticRegisterNativesFTrackSprocketAndIdlerStruct;
	struct Z_Construct_UScriptStruct_FTrackSprocketAndIdlerStruct_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsAbleToProvideTraction_MetaData[];
#endif
		static void NewProp_IsAbleToProvideTraction_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsAbleToProvideTraction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshComponentName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MeshComponentName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StackPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StackPosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RoadWheelRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RoadWheelRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpringTopOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpringTopOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpringBottomOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpringBottomOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpringStiffness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpringStiffness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpringDampening_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpringDampening;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShapeSweepMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ShapeSweepMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RoadWheelRelativeLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RoadWheelRelativeLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTrackSprocketAndIdlerStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MMTTrackSprocketAndIdlerStruct.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTrackSprocketAndIdlerStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTrackSprocketAndIdlerStruct>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTrackSprocketAndIdlerStruct_Statics::NewProp_IsAbleToProvideTraction_MetaData[] = {
		{ "Category", "Sprocket and idler" },
		{ "ModuleRelativePath", "Public/MMTTrackSprocketAndIdlerStruct.h" },
		{ "ToolTip", "On most of the vehicles, sprocket and main idler can collide with environment and provide traction" },
	};
#endif
	void Z_Construct_UScriptStruct_FTrackSprocketAndIdlerStruct_Statics::NewProp_IsAbleToProvideTraction_SetBit(void* Obj)
	{
		((FTrackSprocketAndIdlerStruct*)Obj)->IsAbleToProvideTraction = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTrackSprocketAndIdlerStruct_Statics::NewProp_IsAbleToProvideTraction = { "IsAbleToProvideTraction", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FTrackSprocketAndIdlerStruct), &Z_Construct_UScriptStruct_FTrackSprocketAndIdlerStruct_Statics::NewProp_IsAbleToProvideTraction_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTrackSprocketAndIdlerStruct_Statics::NewProp_IsAbleToProvideTraction_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTrackSprocketAndIdlerStruct_Statics::NewProp_IsAbleToProvideTraction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTrackSprocketAndIdlerStruct_Statics::NewProp_MeshComponentName_MetaData[] = {
		{ "Category", "Sprocket and idler" },
		{ "EditCondition", "IsAbleToProvideTraction" },
		{ "ModuleRelativePath", "Public/MMTTrackSprocketAndIdlerStruct.h" },
		{ "ToolTip", "Name of the mesh component of sprocket or idler that will be used for calculation of physics for traction. Needs to have collision" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTrackSprocketAndIdlerStruct_Statics::NewProp_MeshComponentName = { "MeshComponentName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTrackSprocketAndIdlerStruct, MeshComponentName), METADATA_PARAMS(Z_Construct_UScriptStruct_FTrackSprocketAndIdlerStruct_Statics::NewProp_MeshComponentName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTrackSprocketAndIdlerStruct_Statics::NewProp_MeshComponentName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTrackSprocketAndIdlerStruct_Statics::NewProp_StackPosition_MetaData[] = {
		{ "Category", "Suspension Stack" },
		{ "ModuleRelativePath", "Public/MMTTrackSprocketAndIdlerStruct.h" },
		{ "ToolTip", "Position of the stack in relation component's root. Normally a point where suspension would be physically attached to the chassis" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTrackSprocketAndIdlerStruct_Statics::NewProp_StackPosition = { "StackPosition", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTrackSprocketAndIdlerStruct, StackPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FTrackSprocketAndIdlerStruct_Statics::NewProp_StackPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTrackSprocketAndIdlerStruct_Statics::NewProp_StackPosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTrackSprocketAndIdlerStruct_Statics::NewProp_RoadWheelRadius_MetaData[] = {
		{ "Category", "Suspension Stack" },
		{ "ModuleRelativePath", "Public/MMTTrackSprocketAndIdlerStruct.h" },
		{ "ToolTip", "Radius of the road-wheel in cm. Needed for when track is using simulation feature or when IsShapeTrace is off and ray-check is used instead of sweeps" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTrackSprocketAndIdlerStruct_Statics::NewProp_RoadWheelRadius = { "RoadWheelRadius", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTrackSprocketAndIdlerStruct, RoadWheelRadius), METADATA_PARAMS(Z_Construct_UScriptStruct_FTrackSprocketAndIdlerStruct_Statics::NewProp_RoadWheelRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTrackSprocketAndIdlerStruct_Statics::NewProp_RoadWheelRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTrackSprocketAndIdlerStruct_Statics::NewProp_SpringTopOffset_MetaData[] = {
		{ "Category", "Suspension Stack" },
		{ "ModuleRelativePath", "Public/MMTTrackSprocketAndIdlerStruct.h" },
		{ "ToolTip", "Top limit of the spring in relation to suspension stack position. Doesn't have to be aligned with Z axis. In case of torsion bar suspension, spring can be angled to follow closer radial movement of suspension" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTrackSprocketAndIdlerStruct_Statics::NewProp_SpringTopOffset = { "SpringTopOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTrackSprocketAndIdlerStruct, SpringTopOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FTrackSprocketAndIdlerStruct_Statics::NewProp_SpringTopOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTrackSprocketAndIdlerStruct_Statics::NewProp_SpringTopOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTrackSprocketAndIdlerStruct_Statics::NewProp_SpringBottomOffset_MetaData[] = {
		{ "Category", "Suspension Stack" },
		{ "ModuleRelativePath", "Public/MMTTrackSprocketAndIdlerStruct.h" },
		{ "ToolTip", "Bottom limit of the spring in relation to suspension stack position. Doesn't have to be aligned with Z axis. In case of torsion bar suspension, spring can be angled to follow closer radial movement of suspension" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTrackSprocketAndIdlerStruct_Statics::NewProp_SpringBottomOffset = { "SpringBottomOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTrackSprocketAndIdlerStruct, SpringBottomOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FTrackSprocketAndIdlerStruct_Statics::NewProp_SpringBottomOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTrackSprocketAndIdlerStruct_Statics::NewProp_SpringBottomOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTrackSprocketAndIdlerStruct_Statics::NewProp_SpringStiffness_MetaData[] = {
		{ "Category", "Suspension Stack" },
		{ "ModuleRelativePath", "Public/MMTTrackSprocketAndIdlerStruct.h" },
		{ "ToolTip", "Force of the spring. Minimal value should be enough to support portion of the vehicle's mass. Can calculate as SpringStiffnessMinimal = Vehicle_Mass * 980 / total_number_suspesion_stacks_of_all_tracks" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTrackSprocketAndIdlerStruct_Statics::NewProp_SpringStiffness = { "SpringStiffness", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTrackSprocketAndIdlerStruct, SpringStiffness), METADATA_PARAMS(Z_Construct_UScriptStruct_FTrackSprocketAndIdlerStruct_Statics::NewProp_SpringStiffness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTrackSprocketAndIdlerStruct_Statics::NewProp_SpringStiffness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTrackSprocketAndIdlerStruct_Statics::NewProp_SpringDampening_MetaData[] = {
		{ "Category", "Suspension Stack" },
		{ "ModuleRelativePath", "Public/MMTTrackSprocketAndIdlerStruct.h" },
		{ "ToolTip", "Dampening coefficient of the spring. The smaller the value the more spring will oscilate. Too large value can lead to unstable behaviour. Value of about 1/10th to 1/100th of spring stiffness should be enough" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTrackSprocketAndIdlerStruct_Statics::NewProp_SpringDampening = { "SpringDampening", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTrackSprocketAndIdlerStruct, SpringDampening), METADATA_PARAMS(Z_Construct_UScriptStruct_FTrackSprocketAndIdlerStruct_Statics::NewProp_SpringDampening_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTrackSprocketAndIdlerStruct_Statics::NewProp_SpringDampening_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTrackSprocketAndIdlerStruct_Statics::NewProp_ShapeSweepMesh_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MMTTrackSprocketAndIdlerStruct.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FTrackSprocketAndIdlerStruct_Statics::NewProp_ShapeSweepMesh = { "ShapeSweepMesh", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTrackSprocketAndIdlerStruct, ShapeSweepMesh), Z_Construct_UClass_UMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FTrackSprocketAndIdlerStruct_Statics::NewProp_ShapeSweepMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTrackSprocketAndIdlerStruct_Statics::NewProp_ShapeSweepMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTrackSprocketAndIdlerStruct_Statics::NewProp_RoadWheelRelativeLocation_MetaData[] = {
		{ "ModuleRelativePath", "Public/MMTTrackSprocketAndIdlerStruct.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTrackSprocketAndIdlerStruct_Statics::NewProp_RoadWheelRelativeLocation = { "RoadWheelRelativeLocation", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTrackSprocketAndIdlerStruct, RoadWheelRelativeLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FTrackSprocketAndIdlerStruct_Statics::NewProp_RoadWheelRelativeLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTrackSprocketAndIdlerStruct_Statics::NewProp_RoadWheelRelativeLocation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTrackSprocketAndIdlerStruct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTrackSprocketAndIdlerStruct_Statics::NewProp_IsAbleToProvideTraction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTrackSprocketAndIdlerStruct_Statics::NewProp_MeshComponentName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTrackSprocketAndIdlerStruct_Statics::NewProp_StackPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTrackSprocketAndIdlerStruct_Statics::NewProp_RoadWheelRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTrackSprocketAndIdlerStruct_Statics::NewProp_SpringTopOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTrackSprocketAndIdlerStruct_Statics::NewProp_SpringBottomOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTrackSprocketAndIdlerStruct_Statics::NewProp_SpringStiffness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTrackSprocketAndIdlerStruct_Statics::NewProp_SpringDampening,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTrackSprocketAndIdlerStruct_Statics::NewProp_ShapeSweepMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTrackSprocketAndIdlerStruct_Statics::NewProp_RoadWheelRelativeLocation,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTrackSprocketAndIdlerStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MMT,
		nullptr,
		&NewStructOps,
		"TrackSprocketAndIdlerStruct",
		sizeof(FTrackSprocketAndIdlerStruct),
		alignof(FTrackSprocketAndIdlerStruct),
		Z_Construct_UScriptStruct_FTrackSprocketAndIdlerStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTrackSprocketAndIdlerStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTrackSprocketAndIdlerStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTrackSprocketAndIdlerStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTrackSprocketAndIdlerStruct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTrackSprocketAndIdlerStruct_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MMT();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TrackSprocketAndIdlerStruct"), sizeof(FTrackSprocketAndIdlerStruct), Get_Z_Construct_UScriptStruct_FTrackSprocketAndIdlerStruct_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTrackSprocketAndIdlerStruct_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTrackSprocketAndIdlerStruct_Hash() { return 2233902180U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
