// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MMT/Public/MMTSuspensionStack.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMMTSuspensionStack() {}
// Cross Module References
	MMT_API UEnum* Z_Construct_UEnum_MMT_ESuspensionSimMode();
	UPackage* Z_Construct_UPackage__Script_MMT();
	MMT_API UScriptStruct* Z_Construct_UScriptStruct_FSuspensionStackStruct();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
	MMT_API UClass* Z_Construct_UClass_UMMTSuspensionStack_NoRegister();
	MMT_API UClass* Z_Construct_UClass_UMMTSuspensionStack();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	PHYSICSCORE_API UClass* Z_Construct_UClass_UPhysicalMaterial_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
// End Cross Module References
	static UEnum* ESuspensionSimMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_MMT_ESuspensionSimMode, Z_Construct_UPackage__Script_MMT(), TEXT("ESuspensionSimMode"));
		}
		return Singleton;
	}
	template<> MMT_API UEnum* StaticEnum<ESuspensionSimMode>()
	{
		return ESuspensionSimMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESuspensionSimMode(ESuspensionSimMode_StaticEnum, TEXT("/Script/MMT"), TEXT("ESuspensionSimMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_MMT_ESuspensionSimMode_Hash() { return 3706921384U; }
	UEnum* Z_Construct_UEnum_MMT_ESuspensionSimMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_MMT();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESuspensionSimMode"), 0, Get_Z_Construct_UEnum_MMT_ESuspensionSimMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESuspensionSimMode::RayCheck", (int64)ESuspensionSimMode::RayCheck },
				{ "ESuspensionSimMode::SphereCheck", (int64)ESuspensionSimMode::SphereCheck },
				{ "ESuspensionSimMode::ShapeSweep", (int64)ESuspensionSimMode::ShapeSweep },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/MMTSuspensionStack.h" },
				{ "RayCheck.Comment", "// Ray Check - is simplest and fastest but works correctly only on relatively smooth terrain. \n" },
				{ "RayCheck.DisplayName", "Ray Check" },
				{ "RayCheck.Name", "ESuspensionSimMode::RayCheck" },
				{ "RayCheck.ToolTip", "Ray Check - is simplest and fastest but works correctly only on relatively smooth terrain." },
				{ "ShapeSweep.Comment", "// Shape Sweep - works with any type of terrain and obstacles but more expensive than RayCheck. \n" },
				{ "ShapeSweep.DisplayName", "Shape Sweep" },
				{ "ShapeSweep.Name", "ESuspensionSimMode::ShapeSweep" },
				{ "ShapeSweep.ToolTip", "Shape Sweep - works with any type of terrain and obstacles but more expensive than RayCheck." },
				{ "SphereCheck.Comment", "// Sphere Check - wheels are approximated with a sphere. This improves traverse of the obstacles over RayCheck and still cheaper than Shape Sweep, although still not as reliable as Shape Sweep\n" },
				{ "SphereCheck.DisplayName", "Sphere Check" },
				{ "SphereCheck.Name", "ESuspensionSimMode::SphereCheck" },
				{ "SphereCheck.ToolTip", "Sphere Check - wheels are approximated with a sphere. This improves traverse of the obstacles over RayCheck and still cheaper than Shape Sweep, although still not as reliable as Shape Sweep" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_MMT,
				nullptr,
				"ESuspensionSimMode",
				"ESuspensionSimMode",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FSuspensionStackStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MMT_API uint32 Get_Z_Construct_UScriptStruct_FSuspensionStackStruct_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSuspensionStackStruct, Z_Construct_UPackage__Script_MMT(), TEXT("SuspensionStackStruct"), sizeof(FSuspensionStackStruct), Get_Z_Construct_UScriptStruct_FSuspensionStackStruct_Hash());
	}
	return Singleton;
}
template<> MMT_API UScriptStruct* StaticStruct<FSuspensionStackStruct>()
{
	return FSuspensionStackStruct::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSuspensionStackStruct(FSuspensionStackStruct::StaticStruct, TEXT("/Script/MMT"), TEXT("SuspensionStackStruct"), false, nullptr, nullptr);
static struct FScriptStruct_MMT_StaticRegisterNativesFSuspensionStackStruct
{
	FScriptStruct_MMT_StaticRegisterNativesFSuspensionStackStruct()
	{
		UScriptStruct::DeferCppStructOps<FSuspensionStackStruct>(FName(TEXT("SuspensionStackStruct")));
	}
} ScriptStruct_MMT_StaticRegisterNativesFSuspensionStackStruct;
	struct Z_Construct_UScriptStruct_FSuspensionStackStruct_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDisabled_MetaData[];
#endif
		static void NewProp_bDisabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisabled;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SimulationMode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SimulationMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SimulationMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseCustomPosition_MetaData[];
#endif
		static void NewProp_bUseCustomPosition_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseCustomPosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StackLocalPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StackLocalPosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RoadWheelRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RoadWheelRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrackThickness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TrackThickness;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpringMaxOutputRatio_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpringMaxOutputRatio;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpringDampening_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpringDampening;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bGetContactBodyVelocity_MetaData[];
#endif
		static void NewProp_bGetContactBodyVelocity_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGetContactBodyVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableDebugMode_MetaData[];
#endif
		static void NewProp_bEnableDebugMode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableDebugMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RayCheckTraceChannel_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RayCheckTraceChannel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanSphereCheck_MetaData[];
#endif
		static void NewProp_bCanSphereCheck_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanSphereCheck;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SphereCheckTraceChannel_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SphereCheckTraceChannel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanShapeSweep_MetaData[];
#endif
		static void NewProp_bCanShapeSweep_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanShapeSweep;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SweepShapeComponentName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SweepShapeComponentName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRotateAlongTraceVector_MetaData[];
#endif
		static void NewProp_bRotateAlongTraceVector_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRotateAlongTraceVector;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSuspensionStackStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MMTSuspensionStack.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSuspensionStackStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSuspensionStackStruct>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSuspensionStackStruct_Statics::NewProp_bDisabled_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/MMTSuspensionStack.h" },
		{ "ToolTip", "Disables component from doing physics calculations and applying forces, useful for debugging." },
	};
#endif
	void Z_Construct_UScriptStruct_FSuspensionStackStruct_Statics::NewProp_bDisabled_SetBit(void* Obj)
	{
		((FSuspensionStackStruct*)Obj)->bDisabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSuspensionStackStruct_Statics::NewProp_bDisabled = { "bDisabled", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSuspensionStackStruct), &Z_Construct_UScriptStruct_FSuspensionStackStruct_Statics::NewProp_bDisabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSuspensionStackStruct_Statics::NewProp_bDisabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSuspensionStackStruct_Statics::NewProp_bDisabled_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSuspensionStackStruct_Statics::NewProp_SimulationMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSuspensionStackStruct_Statics::NewProp_SimulationMode_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/MMTSuspensionStack.h" },
		{ "ToolTip", "Suspension simulation mode in which suspension stack starts by default. Simulation mode can be later changed in real-time (useful for LODs). RayCheck - is simplest and fastest but works correctly only on relatively smooth terrain. Shape Sweep - works with any type of terrain and obstacles but more expensive than RayCheck. Tread Simulation - road-wheels will collide with dynamic track surface, provides the most accurate simulation compared to other modes (requires track simulation component to work)" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSuspensionStackStruct_Statics::NewProp_SimulationMode = { "SimulationMode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSuspensionStackStruct, SimulationMode), Z_Construct_UEnum_MMT_ESuspensionSimMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FSuspensionStackStruct_Statics::NewProp_SimulationMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSuspensionStackStruct_Statics::NewProp_SimulationMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSuspensionStackStruct_Statics::NewProp_bUseCustomPosition_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/MMTSuspensionStack.h" },
		{ "ToolTip", "By default, component's position is used as stack position. Set to TRUE when array of stacks is used inside of a single component, otherwise all stacks will be in the same spot" },
	};
#endif
	void Z_Construct_UScriptStruct_FSuspensionStackStruct_Statics::NewProp_bUseCustomPosition_SetBit(void* Obj)
	{
		((FSuspensionStackStruct*)Obj)->bUseCustomPosition = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSuspensionStackStruct_Statics::NewProp_bUseCustomPosition = { "bUseCustomPosition", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FSuspensionStackStruct), &Z_Construct_UScriptStruct_FSuspensionStackStruct_Statics::NewProp_bUseCustomPosition_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSuspensionStackStruct_Statics::NewProp_bUseCustomPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSuspensionStackStruct_Statics::NewProp_bUseCustomPosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSuspensionStackStruct_Statics::NewProp_StackLocalPosition_MetaData[] = {
		{ "Category", "General" },
		{ "EditCondition", "bUseCustomPosition" },
		{ "ModuleRelativePath", "Public/MMTSuspensionStack.h" },
		{ "ToolTip", "Local position of the stack in relation to component. Normally a point where suspension would be physically attached to the chassis" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSuspensionStackStruct_Statics::NewProp_StackLocalPosition = { "StackLocalPosition", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSuspensionStackStruct, StackLocalPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FSuspensionStackStruct_Statics::NewProp_StackLocalPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSuspensionStackStruct_Statics::NewProp_StackLocalPosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSuspensionStackStruct_Statics::NewProp_RoadWheelRadius_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/MMTSuspensionStack.h" },
		{ "ToolTip", "Radius of the road-wheel in cm. Needed for when track is using simulation feature or when IsShapeTrace is off and ray-check is used instead of sweeps" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSuspensionStackStruct_Statics::NewProp_RoadWheelRadius = { "RoadWheelRadius", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSuspensionStackStruct, RoadWheelRadius), METADATA_PARAMS(Z_Construct_UScriptStruct_FSuspensionStackStruct_Statics::NewProp_RoadWheelRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSuspensionStackStruct_Statics::NewProp_RoadWheelRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSuspensionStackStruct_Statics::NewProp_TrackThickness_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/MMTSuspensionStack.h" },
		{ "ToolTip", "Thickness of the track in cm. Needed for offset calculations to prevent wheels from clipping track" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSuspensionStackStruct_Statics::NewProp_TrackThickness = { "TrackThickness", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSuspensionStackStruct, TrackThickness), METADATA_PARAMS(Z_Construct_UScriptStruct_FSuspensionStackStruct_Statics::NewProp_TrackThickness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSuspensionStackStruct_Statics::NewProp_TrackThickness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSuspensionStackStruct_Statics::NewProp_SpringTopOffset_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/MMTSuspensionStack.h" },
		{ "ToolTip", "Top limit of the spring in relation to suspension stack position. Doesn't have to be aligned with Z axis. In case of torsion bar suspension, spring can be angled to follow closer radial movement of suspension" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSuspensionStackStruct_Statics::NewProp_SpringTopOffset = { "SpringTopOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSuspensionStackStruct, SpringTopOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FSuspensionStackStruct_Statics::NewProp_SpringTopOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSuspensionStackStruct_Statics::NewProp_SpringTopOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSuspensionStackStruct_Statics::NewProp_SpringBottomOffset_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/MMTSuspensionStack.h" },
		{ "ToolTip", "Bottom limit of the spring in relation to suspension stack position. Doesn't have to be aligned with Z axis. In case of torsion bar suspension, spring can be angled to follow closer radial movement of suspension" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSuspensionStackStruct_Statics::NewProp_SpringBottomOffset = { "SpringBottomOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSuspensionStackStruct, SpringBottomOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FSuspensionStackStruct_Statics::NewProp_SpringBottomOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSuspensionStackStruct_Statics::NewProp_SpringBottomOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSuspensionStackStruct_Statics::NewProp_SpringStiffness_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/MMTSuspensionStack.h" },
		{ "ToolTip", "Force of the spring. Minimal value should be enough to support portion of the vehicle's mass. Can calculate as SpringStiffnessMinimal = Vehicle_Mass * 980 / total_number_suspesion_stacks_of_all_tracks" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSuspensionStackStruct_Statics::NewProp_SpringStiffness = { "SpringStiffness", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSuspensionStackStruct, SpringStiffness), METADATA_PARAMS(Z_Construct_UScriptStruct_FSuspensionStackStruct_Statics::NewProp_SpringStiffness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSuspensionStackStruct_Statics::NewProp_SpringStiffness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSuspensionStackStruct_Statics::NewProp_SpringMaxOutputRatio_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/MMTSuspensionStack.h" },
		{ "ToolTip", "As spring compresses it produces more and more force which can push vehicle more than desired. This parameter defines maximum force that can be produced by the spring as ratio of SpringStiffness. Value of 1.05 means that maximum force will be not more than 5% higher than SpringStiffness." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSuspensionStackStruct_Statics::NewProp_SpringMaxOutputRatio = { "SpringMaxOutputRatio", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSuspensionStackStruct, SpringMaxOutputRatio), METADATA_PARAMS(Z_Construct_UScriptStruct_FSuspensionStackStruct_Statics::NewProp_SpringMaxOutputRatio_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSuspensionStackStruct_Statics::NewProp_SpringMaxOutputRatio_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSuspensionStackStruct_Statics::NewProp_SpringDampening_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/MMTSuspensionStack.h" },
		{ "ToolTip", "Dampening coefficient of the spring. The smaller the value the more spring will oscilate. Too large value can lead to unstable behaviour. Value of about 1/10th to 1/100th of spring stiffness should be enough" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSuspensionStackStruct_Statics::NewProp_SpringDampening = { "SpringDampening", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSuspensionStackStruct, SpringDampening), METADATA_PARAMS(Z_Construct_UScriptStruct_FSuspensionStackStruct_Statics::NewProp_SpringDampening_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSuspensionStackStruct_Statics::NewProp_SpringDampening_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSuspensionStackStruct_Statics::NewProp_bGetContactBodyVelocity_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/MMTSuspensionStack.h" },
		{ "ToolTip", "Will return velocity of the body that wheel made contact with. Takes performance but allows to drive vehicle on moving platforms correctly." },
	};
#endif
	void Z_Construct_UScriptStruct_FSuspensionStackStruct_Statics::NewProp_bGetContactBodyVelocity_SetBit(void* Obj)
	{
		((FSuspensionStackStruct*)Obj)->bGetContactBodyVelocity = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSuspensionStackStruct_Statics::NewProp_bGetContactBodyVelocity = { "bGetContactBodyVelocity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSuspensionStackStruct), &Z_Construct_UScriptStruct_FSuspensionStackStruct_Statics::NewProp_bGetContactBodyVelocity_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSuspensionStackStruct_Statics::NewProp_bGetContactBodyVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSuspensionStackStruct_Statics::NewProp_bGetContactBodyVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSuspensionStackStruct_Statics::NewProp_bEnableDebugMode_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/MMTSuspensionStack.h" },
		{ "ToolTip", "Will output debug information on screen" },
	};
#endif
	void Z_Construct_UScriptStruct_FSuspensionStackStruct_Statics::NewProp_bEnableDebugMode_SetBit(void* Obj)
	{
		((FSuspensionStackStruct*)Obj)->bEnableDebugMode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSuspensionStackStruct_Statics::NewProp_bEnableDebugMode = { "bEnableDebugMode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSuspensionStackStruct), &Z_Construct_UScriptStruct_FSuspensionStackStruct_Statics::NewProp_bEnableDebugMode_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSuspensionStackStruct_Statics::NewProp_bEnableDebugMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSuspensionStackStruct_Statics::NewProp_bEnableDebugMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSuspensionStackStruct_Statics::NewProp_RayCheckTraceChannel_MetaData[] = {
		{ "Category", "Ray Check mode" },
		{ "ModuleRelativePath", "Public/MMTSuspensionStack.h" },
		{ "ToolTip", "Default channel for suspension tracing in Ray Check mode" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSuspensionStackStruct_Statics::NewProp_RayCheckTraceChannel = { "RayCheckTraceChannel", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSuspensionStackStruct, RayCheckTraceChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(Z_Construct_UScriptStruct_FSuspensionStackStruct_Statics::NewProp_RayCheckTraceChannel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSuspensionStackStruct_Statics::NewProp_RayCheckTraceChannel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSuspensionStackStruct_Statics::NewProp_bCanSphereCheck_MetaData[] = {
		{ "Category", "Sphere Check mode" },
		{ "ModuleRelativePath", "Public/MMTSuspensionStack.h" },
		{ "ToolTip", "Can use sphere check to find suspension compression?" },
	};
#endif
	void Z_Construct_UScriptStruct_FSuspensionStackStruct_Statics::NewProp_bCanSphereCheck_SetBit(void* Obj)
	{
		((FSuspensionStackStruct*)Obj)->bCanSphereCheck = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSuspensionStackStruct_Statics::NewProp_bCanSphereCheck = { "bCanSphereCheck", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSuspensionStackStruct), &Z_Construct_UScriptStruct_FSuspensionStackStruct_Statics::NewProp_bCanSphereCheck_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSuspensionStackStruct_Statics::NewProp_bCanSphereCheck_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSuspensionStackStruct_Statics::NewProp_bCanSphereCheck_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSuspensionStackStruct_Statics::NewProp_SphereCheckTraceChannel_MetaData[] = {
		{ "Category", "Sphere Check mode" },
		{ "EditCondition", "bCanSphereCheck" },
		{ "ModuleRelativePath", "Public/MMTSuspensionStack.h" },
		{ "ToolTip", "Default channel for suspension tracing in Sphere Check mode" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSuspensionStackStruct_Statics::NewProp_SphereCheckTraceChannel = { "SphereCheckTraceChannel", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSuspensionStackStruct, SphereCheckTraceChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(Z_Construct_UScriptStruct_FSuspensionStackStruct_Statics::NewProp_SphereCheckTraceChannel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSuspensionStackStruct_Statics::NewProp_SphereCheckTraceChannel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSuspensionStackStruct_Statics::NewProp_bCanShapeSweep_MetaData[] = {
		{ "Category", "Shape Sweep mode" },
		{ "ModuleRelativePath", "Public/MMTSuspensionStack.h" },
		{ "ToolTip", "Can use shape sweep to find suspension compression?" },
	};
#endif
	void Z_Construct_UScriptStruct_FSuspensionStackStruct_Statics::NewProp_bCanShapeSweep_SetBit(void* Obj)
	{
		((FSuspensionStackStruct*)Obj)->bCanShapeSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSuspensionStackStruct_Statics::NewProp_bCanShapeSweep = { "bCanShapeSweep", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSuspensionStackStruct), &Z_Construct_UScriptStruct_FSuspensionStackStruct_Statics::NewProp_bCanShapeSweep_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSuspensionStackStruct_Statics::NewProp_bCanShapeSweep_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSuspensionStackStruct_Statics::NewProp_bCanShapeSweep_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSuspensionStackStruct_Statics::NewProp_SweepShapeComponentName_MetaData[] = {
		{ "Category", "Shape Sweep mode" },
		{ "EditCondition", "bCanShapeSweep" },
		{ "ModuleRelativePath", "Public/MMTSuspensionStack.h" },
		{ "ToolTip", "Name of the mesh component that will be used for shape sweep of this suspension stack" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSuspensionStackStruct_Statics::NewProp_SweepShapeComponentName = { "SweepShapeComponentName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSuspensionStackStruct, SweepShapeComponentName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSuspensionStackStruct_Statics::NewProp_SweepShapeComponentName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSuspensionStackStruct_Statics::NewProp_SweepShapeComponentName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSuspensionStackStruct_Statics::NewProp_bRotateAlongTraceVector_MetaData[] = {
		{ "Category", "Shape Sweep mode" },
		{ "ModuleRelativePath", "Public/MMTSuspensionStack.h" },
		{ "ToolTip", "Will rotate sweep shape such that its Z vector will be parallel to direction of sweep, otherwise shape is not rotated" },
	};
#endif
	void Z_Construct_UScriptStruct_FSuspensionStackStruct_Statics::NewProp_bRotateAlongTraceVector_SetBit(void* Obj)
	{
		((FSuspensionStackStruct*)Obj)->bRotateAlongTraceVector = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSuspensionStackStruct_Statics::NewProp_bRotateAlongTraceVector = { "bRotateAlongTraceVector", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSuspensionStackStruct), &Z_Construct_UScriptStruct_FSuspensionStackStruct_Statics::NewProp_bRotateAlongTraceVector_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSuspensionStackStruct_Statics::NewProp_bRotateAlongTraceVector_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSuspensionStackStruct_Statics::NewProp_bRotateAlongTraceVector_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSuspensionStackStruct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSuspensionStackStruct_Statics::NewProp_bDisabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSuspensionStackStruct_Statics::NewProp_SimulationMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSuspensionStackStruct_Statics::NewProp_SimulationMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSuspensionStackStruct_Statics::NewProp_bUseCustomPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSuspensionStackStruct_Statics::NewProp_StackLocalPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSuspensionStackStruct_Statics::NewProp_RoadWheelRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSuspensionStackStruct_Statics::NewProp_TrackThickness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSuspensionStackStruct_Statics::NewProp_SpringTopOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSuspensionStackStruct_Statics::NewProp_SpringBottomOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSuspensionStackStruct_Statics::NewProp_SpringStiffness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSuspensionStackStruct_Statics::NewProp_SpringMaxOutputRatio,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSuspensionStackStruct_Statics::NewProp_SpringDampening,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSuspensionStackStruct_Statics::NewProp_bGetContactBodyVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSuspensionStackStruct_Statics::NewProp_bEnableDebugMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSuspensionStackStruct_Statics::NewProp_RayCheckTraceChannel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSuspensionStackStruct_Statics::NewProp_bCanSphereCheck,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSuspensionStackStruct_Statics::NewProp_SphereCheckTraceChannel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSuspensionStackStruct_Statics::NewProp_bCanShapeSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSuspensionStackStruct_Statics::NewProp_SweepShapeComponentName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSuspensionStackStruct_Statics::NewProp_bRotateAlongTraceVector,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSuspensionStackStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MMT,
		nullptr,
		&NewStructOps,
		"SuspensionStackStruct",
		sizeof(FSuspensionStackStruct),
		alignof(FSuspensionStackStruct),
		Z_Construct_UScriptStruct_FSuspensionStackStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSuspensionStackStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSuspensionStackStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSuspensionStackStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSuspensionStackStruct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSuspensionStackStruct_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MMT();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SuspensionStackStruct"), sizeof(FSuspensionStackStruct), Get_Z_Construct_UScriptStruct_FSuspensionStackStruct_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSuspensionStackStruct_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSuspensionStackStruct_Hash() { return 2402359137U; }
	DEFINE_FUNCTION(UMMTSuspensionStack::execTest)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Test();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMMTSuspensionStack::execApplyAntiRollForce)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_AntiRollForceMagnitude);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyAntiRollForce(Z_Param_AntiRollForceMagnitude);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMMTSuspensionStack::execGetSuspensionCompressionRatio)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetSuspensionCompressionRatio();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMMTSuspensionStack::execGetSuspensionForceScale)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetSuspensionForceScale();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMMTSuspensionStack::execSetSuspensionForceScale)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewSuspensionForceScale);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSuspensionForceScale(Z_Param_NewSuspensionForceScale);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMMTSuspensionStack::execSetSpringOffsets)
	{
		P_GET_STRUCT(FVector,Z_Param_SpringTopOffset);
		P_GET_STRUCT(FVector,Z_Param_SpringBottomOffset);
		P_GET_UBOOL(Z_Param_bUpdateAllParameters);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSpringOffsets(Z_Param_SpringTopOffset,Z_Param_SpringBottomOffset,Z_Param_bUpdateAllParameters);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMMTSuspensionStack::execSetSpringStiffness)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewSpringStiffness);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSpringStiffness(Z_Param_NewSpringStiffness);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMMTSuspensionStack::execSetSweepShapeComponentReference)
	{
		P_GET_OBJECT(UMeshComponent,Z_Param_SweepShapeMeshComponentRef);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetSweepShapeComponentReference(Z_Param_SweepShapeMeshComponentRef);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMMTSuspensionStack::execSetSprungComponentReference)
	{
		P_GET_OBJECT(UMeshComponent,Z_Param_SprungMeshComponentRef);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetSprungComponentReference(Z_Param_SprungMeshComponentRef);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMMTSuspensionStack::execGetWheelHubPosition)
	{
		P_GET_UBOOL(Z_Param_bInWorldSpace);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetWheelHubPosition(Z_Param_bInWorldSpace);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMMTSuspensionStack::execGetContactData)
	{
		P_GET_UBOOL_REF(Z_Param_Out_bPointActive);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_ForceAtPoint);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_PointLocation);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_SurfaceNormal);
		P_GET_OBJECT_REF(UPhysicalMaterial,Z_Param_Out_SurfacePhysicalMaterial);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_SurfaceVelocity);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetContactData(Z_Param_Out_bPointActive,Z_Param_Out_ForceAtPoint,Z_Param_Out_PointLocation,Z_Param_Out_SurfaceNormal,Z_Param_Out_SurfacePhysicalMaterial,Z_Param_Out_SurfaceVelocity);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMMTSuspensionStack::execGetSuspensionForce)
	{
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Magnitude);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_WorldSpace);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_LocalSpace);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetSuspensionForce(Z_Param_Out_Magnitude,Z_Param_Out_WorldSpace,Z_Param_Out_LocalSpace);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMMTSuspensionStack::execToggleDebugMode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ToggleDebugMode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMMTSuspensionStack::execInitialize)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Initialize();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMMTSuspensionStack::execPhysicsUpdate)
	{
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_DeltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PhysicsUpdate(Z_Param_Out_DeltaTime);
		P_NATIVE_END;
	}
	void UMMTSuspensionStack::StaticRegisterNativesUMMTSuspensionStack()
	{
		UClass* Class = UMMTSuspensionStack::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ApplyAntiRollForce", &UMMTSuspensionStack::execApplyAntiRollForce },
			{ "GetContactData", &UMMTSuspensionStack::execGetContactData },
			{ "GetSuspensionCompressionRatio", &UMMTSuspensionStack::execGetSuspensionCompressionRatio },
			{ "GetSuspensionForce", &UMMTSuspensionStack::execGetSuspensionForce },
			{ "GetSuspensionForceScale", &UMMTSuspensionStack::execGetSuspensionForceScale },
			{ "GetWheelHubPosition", &UMMTSuspensionStack::execGetWheelHubPosition },
			{ "Initialize", &UMMTSuspensionStack::execInitialize },
			{ "PhysicsUpdate", &UMMTSuspensionStack::execPhysicsUpdate },
			{ "SetSpringOffsets", &UMMTSuspensionStack::execSetSpringOffsets },
			{ "SetSpringStiffness", &UMMTSuspensionStack::execSetSpringStiffness },
			{ "SetSprungComponentReference", &UMMTSuspensionStack::execSetSprungComponentReference },
			{ "SetSuspensionForceScale", &UMMTSuspensionStack::execSetSuspensionForceScale },
			{ "SetSweepShapeComponentReference", &UMMTSuspensionStack::execSetSweepShapeComponentReference },
			{ "Test", &UMMTSuspensionStack::execTest },
			{ "ToggleDebugMode", &UMMTSuspensionStack::execToggleDebugMode },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMMTSuspensionStack_ApplyAntiRollForce_Statics
	{
		struct MMTSuspensionStack_eventApplyAntiRollForce_Parms
		{
			float AntiRollForceMagnitude;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AntiRollForceMagnitude;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMMTSuspensionStack_ApplyAntiRollForce_Statics::NewProp_AntiRollForceMagnitude = { "AntiRollForceMagnitude", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MMTSuspensionStack_eventApplyAntiRollForce_Parms, AntiRollForceMagnitude), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMMTSuspensionStack_ApplyAntiRollForce_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMMTSuspensionStack_ApplyAntiRollForce_Statics::NewProp_AntiRollForceMagnitude,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMMTSuspensionStack_ApplyAntiRollForce_Statics::Function_MetaDataParams[] = {
		{ "Category", "MMT Suspension Stack" },
		{ "Comment", "/**\n\x09*\x09""Applies anti-roll force transfered from another suspension stack on the same axis\n\x09*\x09@param AntiRollForceMagnitude\x09Magnitude of anti-roll force, direction is determined by suspension configuration\n\x09*/" },
		{ "CPP_Default_AntiRollForceMagnitude", "0.000000" },
		{ "ModuleRelativePath", "Public/MMTSuspensionStack.h" },
		{ "ToolTip", "Applies anti-roll force transfered from another suspension stack on the same axis\n@param AntiRollForceMagnitude   Magnitude of anti-roll force, direction is determined by suspension configuration" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMMTSuspensionStack_ApplyAntiRollForce_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMMTSuspensionStack, nullptr, "ApplyAntiRollForce", nullptr, nullptr, sizeof(MMTSuspensionStack_eventApplyAntiRollForce_Parms), Z_Construct_UFunction_UMMTSuspensionStack_ApplyAntiRollForce_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMMTSuspensionStack_ApplyAntiRollForce_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMMTSuspensionStack_ApplyAntiRollForce_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMMTSuspensionStack_ApplyAntiRollForce_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMMTSuspensionStack_ApplyAntiRollForce()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMMTSuspensionStack_ApplyAntiRollForce_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMMTSuspensionStack_GetContactData_Statics
	{
		struct MMTSuspensionStack_eventGetContactData_Parms
		{
			bool bPointActive;
			FVector ForceAtPoint;
			FVector PointLocation;
			FVector SurfaceNormal;
			UPhysicalMaterial* SurfacePhysicalMaterial;
			FVector SurfaceVelocity;
		};
		static void NewProp_bPointActive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPointActive;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ForceAtPoint;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PointLocation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SurfaceNormal;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SurfacePhysicalMaterial;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SurfaceVelocity;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMMTSuspensionStack_GetContactData_Statics::NewProp_bPointActive_SetBit(void* Obj)
	{
		((MMTSuspensionStack_eventGetContactData_Parms*)Obj)->bPointActive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMMTSuspensionStack_GetContactData_Statics::NewProp_bPointActive = { "bPointActive", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MMTSuspensionStack_eventGetContactData_Parms), &Z_Construct_UFunction_UMMTSuspensionStack_GetContactData_Statics::NewProp_bPointActive_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMMTSuspensionStack_GetContactData_Statics::NewProp_ForceAtPoint = { "ForceAtPoint", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MMTSuspensionStack_eventGetContactData_Parms, ForceAtPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMMTSuspensionStack_GetContactData_Statics::NewProp_PointLocation = { "PointLocation", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MMTSuspensionStack_eventGetContactData_Parms, PointLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMMTSuspensionStack_GetContactData_Statics::NewProp_SurfaceNormal = { "SurfaceNormal", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MMTSuspensionStack_eventGetContactData_Parms, SurfaceNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMMTSuspensionStack_GetContactData_Statics::NewProp_SurfacePhysicalMaterial = { "SurfacePhysicalMaterial", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MMTSuspensionStack_eventGetContactData_Parms, SurfacePhysicalMaterial), Z_Construct_UClass_UPhysicalMaterial_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMMTSuspensionStack_GetContactData_Statics::NewProp_SurfaceVelocity = { "SurfaceVelocity", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MMTSuspensionStack_eventGetContactData_Parms, SurfaceVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMMTSuspensionStack_GetContactData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMMTSuspensionStack_GetContactData_Statics::NewProp_bPointActive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMMTSuspensionStack_GetContactData_Statics::NewProp_ForceAtPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMMTSuspensionStack_GetContactData_Statics::NewProp_PointLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMMTSuspensionStack_GetContactData_Statics::NewProp_SurfaceNormal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMMTSuspensionStack_GetContactData_Statics::NewProp_SurfacePhysicalMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMMTSuspensionStack_GetContactData_Statics::NewProp_SurfaceVelocity,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMMTSuspensionStack_GetContactData_Statics::Function_MetaDataParams[] = {
		{ "Category", "MMT Suspension Stack" },
		{ "Comment", "/**\n\x09*\x09Get contact data at point where trace or sweep has succeeded. This information is necessary for friction component\n\x09*\x09@return\x09""bPointActive\x09\x09\x09Indicates if contact with surface was made\n\x09*\x09@return\x09""ForceAtPoint\x09\x09\x09""Force at contact point in world space (suspension force pushing against surface)\n\x09*\x09@return\x09PointLocation\x09\x09\x09Location of contact point in world space\n\x09*\x09@return SurfaceNormal\x09\x09\x09Normal of the surface at contact point\n\x09*\x09@return\x09SurfacePhysicalMaterial\x09\x09Physical material of contact surface\n\x09*\x09@return\x09SurfaceVelocity\x09\x09\x09Velocity of the body that contact was made with\n\x09*/" },
		{ "ModuleRelativePath", "Public/MMTSuspensionStack.h" },
		{ "ToolTip", "Get contact data at point where trace or sweep has succeeded. This information is necessary for friction component\n@return bPointActive                    Indicates if contact with surface was made\n@return ForceAtPoint                    Force at contact point in world space (suspension force pushing against surface)\n@return PointLocation                   Location of contact point in world space\n@return SurfaceNormal                   Normal of the surface at contact point\n@return SurfacePhysicalMaterial         Physical material of contact surface\n@return SurfaceVelocity                 Velocity of the body that contact was made with" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMMTSuspensionStack_GetContactData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMMTSuspensionStack, nullptr, "GetContactData", nullptr, nullptr, sizeof(MMTSuspensionStack_eventGetContactData_Parms), Z_Construct_UFunction_UMMTSuspensionStack_GetContactData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMMTSuspensionStack_GetContactData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMMTSuspensionStack_GetContactData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMMTSuspensionStack_GetContactData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMMTSuspensionStack_GetContactData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMMTSuspensionStack_GetContactData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMMTSuspensionStack_GetSuspensionCompressionRatio_Statics
	{
		struct MMTSuspensionStack_eventGetSuspensionCompressionRatio_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMMTSuspensionStack_GetSuspensionCompressionRatio_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MMTSuspensionStack_eventGetSuspensionCompressionRatio_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMMTSuspensionStack_GetSuspensionCompressionRatio_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMMTSuspensionStack_GetSuspensionCompressionRatio_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMMTSuspensionStack_GetSuspensionCompressionRatio_Statics::Function_MetaDataParams[] = {
		{ "Category", "MMT Suspension Stack" },
		{ "Comment", "/**\n\x09*\x09Get current suspension compression ratio 0..1\n\x09*\x09@return\x09\x09Returns current suspension compression ratio\n\x09*/" },
		{ "ModuleRelativePath", "Public/MMTSuspensionStack.h" },
		{ "ToolTip", "Get current suspension compression ratio 0..1\n@return         Returns current suspension compression ratio" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMMTSuspensionStack_GetSuspensionCompressionRatio_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMMTSuspensionStack, nullptr, "GetSuspensionCompressionRatio", nullptr, nullptr, sizeof(MMTSuspensionStack_eventGetSuspensionCompressionRatio_Parms), Z_Construct_UFunction_UMMTSuspensionStack_GetSuspensionCompressionRatio_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMMTSuspensionStack_GetSuspensionCompressionRatio_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMMTSuspensionStack_GetSuspensionCompressionRatio_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMMTSuspensionStack_GetSuspensionCompressionRatio_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMMTSuspensionStack_GetSuspensionCompressionRatio()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMMTSuspensionStack_GetSuspensionCompressionRatio_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMMTSuspensionStack_GetSuspensionForce_Statics
	{
		struct MMTSuspensionStack_eventGetSuspensionForce_Parms
		{
			float Magnitude;
			FVector WorldSpace;
			FVector LocalSpace;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Magnitude;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WorldSpace;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LocalSpace;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMMTSuspensionStack_GetSuspensionForce_Statics::NewProp_Magnitude = { "Magnitude", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MMTSuspensionStack_eventGetSuspensionForce_Parms, Magnitude), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMMTSuspensionStack_GetSuspensionForce_Statics::NewProp_WorldSpace = { "WorldSpace", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MMTSuspensionStack_eventGetSuspensionForce_Parms, WorldSpace), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMMTSuspensionStack_GetSuspensionForce_Statics::NewProp_LocalSpace = { "LocalSpace", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MMTSuspensionStack_eventGetSuspensionForce_Parms, LocalSpace), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMMTSuspensionStack_GetSuspensionForce_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMMTSuspensionStack_GetSuspensionForce_Statics::NewProp_Magnitude,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMMTSuspensionStack_GetSuspensionForce_Statics::NewProp_WorldSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMMTSuspensionStack_GetSuspensionForce_Statics::NewProp_LocalSpace,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMMTSuspensionStack_GetSuspensionForce_Statics::Function_MetaDataParams[] = {
		{ "Category", "MMT Suspension Stack" },
		{ "Comment", "/**\n\x09*\x09Get last calculated suspension force\n\x09*\x09@return\x09Magnitude\x09Magnitude of the force as float\n\x09*\x09@return\x09WorldSpace\x09Vector force in world space\n\x09*\x09@return\x09LocalSpace\x09Vector force in local space\n\x09*/" },
		{ "ModuleRelativePath", "Public/MMTSuspensionStack.h" },
		{ "ToolTip", "Get last calculated suspension force\n@return Magnitude       Magnitude of the force as float\n@return WorldSpace      Vector force in world space\n@return LocalSpace      Vector force in local space" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMMTSuspensionStack_GetSuspensionForce_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMMTSuspensionStack, nullptr, "GetSuspensionForce", nullptr, nullptr, sizeof(MMTSuspensionStack_eventGetSuspensionForce_Parms), Z_Construct_UFunction_UMMTSuspensionStack_GetSuspensionForce_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMMTSuspensionStack_GetSuspensionForce_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMMTSuspensionStack_GetSuspensionForce_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMMTSuspensionStack_GetSuspensionForce_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMMTSuspensionStack_GetSuspensionForce()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMMTSuspensionStack_GetSuspensionForce_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMMTSuspensionStack_GetSuspensionForceScale_Statics
	{
		struct MMTSuspensionStack_eventGetSuspensionForceScale_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMMTSuspensionStack_GetSuspensionForceScale_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MMTSuspensionStack_eventGetSuspensionForceScale_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMMTSuspensionStack_GetSuspensionForceScale_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMMTSuspensionStack_GetSuspensionForceScale_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMMTSuspensionStack_GetSuspensionForceScale_Statics::Function_MetaDataParams[] = {
		{ "Category", "MMT Suspension Stack" },
		{ "Comment", "/**\n\x09*\x09Get current suspension force scale parameter\n\x09*\x09@return\x09\x09Returns current suspension force scale parameter\n\x09*/" },
		{ "ModuleRelativePath", "Public/MMTSuspensionStack.h" },
		{ "ToolTip", "Get current suspension force scale parameter\n@return         Returns current suspension force scale parameter" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMMTSuspensionStack_GetSuspensionForceScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMMTSuspensionStack, nullptr, "GetSuspensionForceScale", nullptr, nullptr, sizeof(MMTSuspensionStack_eventGetSuspensionForceScale_Parms), Z_Construct_UFunction_UMMTSuspensionStack_GetSuspensionForceScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMMTSuspensionStack_GetSuspensionForceScale_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMMTSuspensionStack_GetSuspensionForceScale_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMMTSuspensionStack_GetSuspensionForceScale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMMTSuspensionStack_GetSuspensionForceScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMMTSuspensionStack_GetSuspensionForceScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMMTSuspensionStack_GetWheelHubPosition_Statics
	{
		struct MMTSuspensionStack_eventGetWheelHubPosition_Parms
		{
			bool bInWorldSpace;
			FVector ReturnValue;
		};
		static void NewProp_bInWorldSpace_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInWorldSpace;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMMTSuspensionStack_GetWheelHubPosition_Statics::NewProp_bInWorldSpace_SetBit(void* Obj)
	{
		((MMTSuspensionStack_eventGetWheelHubPosition_Parms*)Obj)->bInWorldSpace = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMMTSuspensionStack_GetWheelHubPosition_Statics::NewProp_bInWorldSpace = { "bInWorldSpace", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MMTSuspensionStack_eventGetWheelHubPosition_Parms), &Z_Construct_UFunction_UMMTSuspensionStack_GetWheelHubPosition_Statics::NewProp_bInWorldSpace_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMMTSuspensionStack_GetWheelHubPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MMTSuspensionStack_eventGetWheelHubPosition_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMMTSuspensionStack_GetWheelHubPosition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMMTSuspensionStack_GetWheelHubPosition_Statics::NewProp_bInWorldSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMMTSuspensionStack_GetWheelHubPosition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMMTSuspensionStack_GetWheelHubPosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "MMT Suspension Stack" },
		{ "Comment", "/**\n\x09*\x09Get last calculated suspension force\n\x09*\x09@return\x09\x09Wheel hub position in local space\n\x09*/" },
		{ "CPP_Default_bInWorldSpace", "false" },
		{ "ModuleRelativePath", "Public/MMTSuspensionStack.h" },
		{ "ToolTip", "Get last calculated suspension force\n@return         Wheel hub position in local space" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMMTSuspensionStack_GetWheelHubPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMMTSuspensionStack, nullptr, "GetWheelHubPosition", nullptr, nullptr, sizeof(MMTSuspensionStack_eventGetWheelHubPosition_Parms), Z_Construct_UFunction_UMMTSuspensionStack_GetWheelHubPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMMTSuspensionStack_GetWheelHubPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMMTSuspensionStack_GetWheelHubPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMMTSuspensionStack_GetWheelHubPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMMTSuspensionStack_GetWheelHubPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMMTSuspensionStack_GetWheelHubPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMMTSuspensionStack_Initialize_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMMTSuspensionStack_Initialize_Statics::Function_MetaDataParams[] = {
		{ "Category", "MMT Suspension Stack" },
		{ "Comment", "/**\n\x09*\x09Initializes class logic, finds references and pre-calculates parameters. Expected to be called from BeginPlay only\n\x09*/" },
		{ "ModuleRelativePath", "Public/MMTSuspensionStack.h" },
		{ "ToolTip", "Initializes class logic, finds references and pre-calculates parameters. Expected to be called from BeginPlay only" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMMTSuspensionStack_Initialize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMMTSuspensionStack, nullptr, "Initialize", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMMTSuspensionStack_Initialize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMMTSuspensionStack_Initialize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMMTSuspensionStack_Initialize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMMTSuspensionStack_Initialize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMMTSuspensionStack_PhysicsUpdate_Statics
	{
		struct MMTSuspensionStack_eventPhysicsUpdate_Parms
		{
			float DeltaTime;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeltaTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMMTSuspensionStack_PhysicsUpdate_Statics::NewProp_DeltaTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMMTSuspensionStack_PhysicsUpdate_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MMTSuspensionStack_eventPhysicsUpdate_Parms, DeltaTime), METADATA_PARAMS(Z_Construct_UFunction_UMMTSuspensionStack_PhysicsUpdate_Statics::NewProp_DeltaTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMMTSuspensionStack_PhysicsUpdate_Statics::NewProp_DeltaTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMMTSuspensionStack_PhysicsUpdate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMMTSuspensionStack_PhysicsUpdate_Statics::NewProp_DeltaTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMMTSuspensionStack_PhysicsUpdate_Statics::Function_MetaDataParams[] = {
		{ "Category", "MMT Suspension Stack" },
		{ "Comment", "/**\n\x09*\x09Runs calculations of suspension stack, applies spring force to sprung component and calculates new position of the road-wheels\n\x09*\x09@param DeltaTime\x09\x09\x09\x09""Delta time\n\x09*\x09@return\x09WheelLocalPosition\x09\x09Position of the road-wheel in local coordinate system of the actor, NOT a relative position to component\n\x09*/" },
		{ "ModuleRelativePath", "Public/MMTSuspensionStack.h" },
		{ "ToolTip", "Runs calculations of suspension stack, applies spring force to sprung component and calculates new position of the road-wheels\n@param DeltaTime                                Delta time\n@return WheelLocalPosition              Position of the road-wheel in local coordinate system of the actor, NOT a relative position to component" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMMTSuspensionStack_PhysicsUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMMTSuspensionStack, nullptr, "PhysicsUpdate", nullptr, nullptr, sizeof(MMTSuspensionStack_eventPhysicsUpdate_Parms), Z_Construct_UFunction_UMMTSuspensionStack_PhysicsUpdate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMMTSuspensionStack_PhysicsUpdate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMMTSuspensionStack_PhysicsUpdate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMMTSuspensionStack_PhysicsUpdate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMMTSuspensionStack_PhysicsUpdate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMMTSuspensionStack_PhysicsUpdate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMMTSuspensionStack_SetSpringOffsets_Statics
	{
		struct MMTSuspensionStack_eventSetSpringOffsets_Parms
		{
			FVector SpringTopOffset;
			FVector SpringBottomOffset;
			bool bUpdateAllParameters;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpringTopOffset;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpringBottomOffset;
		static void NewProp_bUpdateAllParameters_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUpdateAllParameters;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMMTSuspensionStack_SetSpringOffsets_Statics::NewProp_SpringTopOffset = { "SpringTopOffset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MMTSuspensionStack_eventSetSpringOffsets_Parms, SpringTopOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMMTSuspensionStack_SetSpringOffsets_Statics::NewProp_SpringBottomOffset = { "SpringBottomOffset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MMTSuspensionStack_eventSetSpringOffsets_Parms, SpringBottomOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMMTSuspensionStack_SetSpringOffsets_Statics::NewProp_bUpdateAllParameters_SetBit(void* Obj)
	{
		((MMTSuspensionStack_eventSetSpringOffsets_Parms*)Obj)->bUpdateAllParameters = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMMTSuspensionStack_SetSpringOffsets_Statics::NewProp_bUpdateAllParameters = { "bUpdateAllParameters", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MMTSuspensionStack_eventSetSpringOffsets_Parms), &Z_Construct_UFunction_UMMTSuspensionStack_SetSpringOffsets_Statics::NewProp_bUpdateAllParameters_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMMTSuspensionStack_SetSpringOffsets_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMMTSuspensionStack_SetSpringOffsets_Statics::NewProp_SpringTopOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMMTSuspensionStack_SetSpringOffsets_Statics::NewProp_SpringBottomOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMMTSuspensionStack_SetSpringOffsets_Statics::NewProp_bUpdateAllParameters,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMMTSuspensionStack_SetSpringOffsets_Statics::Function_MetaDataParams[] = {
		{ "Category", "MMT Suspension Stack" },
		{ "Comment", "/**\n\x09*\x09Set new spring offsets\n\x09*\x09@param NewSpringStiffness\x09Stiffness of the spring\n\x09*\x09@param bUpdateAllParameters\x09Will refresh all precomputed parameters. If you are changing multiple suspension settings at a time, consider setting this flag to true only on last setter to save some performance\n\x09*/" },
		{ "CPP_Default_bUpdateAllParameters", "true" },
		{ "CPP_Default_SpringBottomOffset", "" },
		{ "CPP_Default_SpringTopOffset", "" },
		{ "ModuleRelativePath", "Public/MMTSuspensionStack.h" },
		{ "ToolTip", "Set new spring offsets\n@param NewSpringStiffness       Stiffness of the spring\n@param bUpdateAllParameters     Will refresh all precomputed parameters. If you are changing multiple suspension settings at a time, consider setting this flag to true only on last setter to save some performance" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMMTSuspensionStack_SetSpringOffsets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMMTSuspensionStack, nullptr, "SetSpringOffsets", nullptr, nullptr, sizeof(MMTSuspensionStack_eventSetSpringOffsets_Parms), Z_Construct_UFunction_UMMTSuspensionStack_SetSpringOffsets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMMTSuspensionStack_SetSpringOffsets_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMMTSuspensionStack_SetSpringOffsets_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMMTSuspensionStack_SetSpringOffsets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMMTSuspensionStack_SetSpringOffsets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMMTSuspensionStack_SetSpringOffsets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMMTSuspensionStack_SetSpringStiffness_Statics
	{
		struct MMTSuspensionStack_eventSetSpringStiffness_Parms
		{
			float NewSpringStiffness;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewSpringStiffness;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMMTSuspensionStack_SetSpringStiffness_Statics::NewProp_NewSpringStiffness = { "NewSpringStiffness", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MMTSuspensionStack_eventSetSpringStiffness_Parms, NewSpringStiffness), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMMTSuspensionStack_SetSpringStiffness_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMMTSuspensionStack_SetSpringStiffness_Statics::NewProp_NewSpringStiffness,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMMTSuspensionStack_SetSpringStiffness_Statics::Function_MetaDataParams[] = {
		{ "Category", "MMT Suspension Stack" },
		{ "Comment", "/**\n\x09*\x09Set stiffness of the spring\n\x09*\x09@param NewSpringStiffness\x09Stiffness of the spring\n\x09*\x09@param bUpdateAllParameters\x09Will refresh all precomputed parameters. If you are changing multiple suspension settings at a time, consider setting this flag to true only on last setter to save some performance\n\x09*/" },
		{ "CPP_Default_NewSpringStiffness", "0.000000" },
		{ "ModuleRelativePath", "Public/MMTSuspensionStack.h" },
		{ "ToolTip", "Set stiffness of the spring\n@param NewSpringStiffness       Stiffness of the spring\n@param bUpdateAllParameters     Will refresh all precomputed parameters. If you are changing multiple suspension settings at a time, consider setting this flag to true only on last setter to save some performance" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMMTSuspensionStack_SetSpringStiffness_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMMTSuspensionStack, nullptr, "SetSpringStiffness", nullptr, nullptr, sizeof(MMTSuspensionStack_eventSetSpringStiffness_Parms), Z_Construct_UFunction_UMMTSuspensionStack_SetSpringStiffness_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMMTSuspensionStack_SetSpringStiffness_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMMTSuspensionStack_SetSpringStiffness_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMMTSuspensionStack_SetSpringStiffness_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMMTSuspensionStack_SetSpringStiffness()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMMTSuspensionStack_SetSpringStiffness_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMMTSuspensionStack_SetSprungComponentReference_Statics
	{
		struct MMTSuspensionStack_eventSetSprungComponentReference_Parms
		{
			UMeshComponent* SprungMeshComponentRef;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SprungMeshComponentRef_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SprungMeshComponentRef;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMMTSuspensionStack_SetSprungComponentReference_Statics::NewProp_SprungMeshComponentRef_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMMTSuspensionStack_SetSprungComponentReference_Statics::NewProp_SprungMeshComponentRef = { "SprungMeshComponentRef", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MMTSuspensionStack_eventSetSprungComponentReference_Parms, SprungMeshComponentRef), Z_Construct_UClass_UMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMMTSuspensionStack_SetSprungComponentReference_Statics::NewProp_SprungMeshComponentRef_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMMTSuspensionStack_SetSprungComponentReference_Statics::NewProp_SprungMeshComponentRef_MetaData)) };
	void Z_Construct_UFunction_UMMTSuspensionStack_SetSprungComponentReference_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MMTSuspensionStack_eventSetSprungComponentReference_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMMTSuspensionStack_SetSprungComponentReference_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MMTSuspensionStack_eventSetSprungComponentReference_Parms), &Z_Construct_UFunction_UMMTSuspensionStack_SetSprungComponentReference_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMMTSuspensionStack_SetSprungComponentReference_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMMTSuspensionStack_SetSprungComponentReference_Statics::NewProp_SprungMeshComponentRef,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMMTSuspensionStack_SetSprungComponentReference_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMMTSuspensionStack_SetSprungComponentReference_Statics::Function_MetaDataParams[] = {
		{ "Category", "MMT Suspension Stack" },
		{ "Comment", "/**\n\x09*\x09Set reference of sprung mesh component manually\n\x09*\x09@param SprungMeshComponentRef\x09Pointer to sprung mesh component, usually root physics component\n\x09*\x09@return\x09\x09Returns true if reference is valid and was set\n\x09*/" },
		{ "ModuleRelativePath", "Public/MMTSuspensionStack.h" },
		{ "ToolTip", "Set reference of sprung mesh component manually\n@param SprungMeshComponentRef   Pointer to sprung mesh component, usually root physics component\n@return         Returns true if reference is valid and was set" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMMTSuspensionStack_SetSprungComponentReference_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMMTSuspensionStack, nullptr, "SetSprungComponentReference", nullptr, nullptr, sizeof(MMTSuspensionStack_eventSetSprungComponentReference_Parms), Z_Construct_UFunction_UMMTSuspensionStack_SetSprungComponentReference_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMMTSuspensionStack_SetSprungComponentReference_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMMTSuspensionStack_SetSprungComponentReference_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMMTSuspensionStack_SetSprungComponentReference_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMMTSuspensionStack_SetSprungComponentReference()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMMTSuspensionStack_SetSprungComponentReference_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMMTSuspensionStack_SetSuspensionForceScale_Statics
	{
		struct MMTSuspensionStack_eventSetSuspensionForceScale_Parms
		{
			float NewSuspensionForceScale;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewSuspensionForceScale;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMMTSuspensionStack_SetSuspensionForceScale_Statics::NewProp_NewSuspensionForceScale = { "NewSuspensionForceScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MMTSuspensionStack_eventSetSuspensionForceScale_Parms, NewSuspensionForceScale), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMMTSuspensionStack_SetSuspensionForceScale_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMMTSuspensionStack_SetSuspensionForceScale_Statics::NewProp_NewSuspensionForceScale,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMMTSuspensionStack_SetSuspensionForceScale_Statics::Function_MetaDataParams[] = {
		{ "Category", "MMT Suspension Stack" },
		{ "Comment", "/**\n\x09*\x09Sets scale of the final suspension force (spring + damping), useful for active suspension\n\x09*\x09@param NewSpringForceScale\x09New scale value of final suspension force\n\x09*/" },
		{ "CPP_Default_NewSuspensionForceScale", "1.000000" },
		{ "ModuleRelativePath", "Public/MMTSuspensionStack.h" },
		{ "ToolTip", "Sets scale of the final suspension force (spring + damping), useful for active suspension\n@param NewSpringForceScale      New scale value of final suspension force" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMMTSuspensionStack_SetSuspensionForceScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMMTSuspensionStack, nullptr, "SetSuspensionForceScale", nullptr, nullptr, sizeof(MMTSuspensionStack_eventSetSuspensionForceScale_Parms), Z_Construct_UFunction_UMMTSuspensionStack_SetSuspensionForceScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMMTSuspensionStack_SetSuspensionForceScale_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMMTSuspensionStack_SetSuspensionForceScale_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMMTSuspensionStack_SetSuspensionForceScale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMMTSuspensionStack_SetSuspensionForceScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMMTSuspensionStack_SetSuspensionForceScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMMTSuspensionStack_SetSweepShapeComponentReference_Statics
	{
		struct MMTSuspensionStack_eventSetSweepShapeComponentReference_Parms
		{
			UMeshComponent* SweepShapeMeshComponentRef;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SweepShapeMeshComponentRef_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SweepShapeMeshComponentRef;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMMTSuspensionStack_SetSweepShapeComponentReference_Statics::NewProp_SweepShapeMeshComponentRef_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMMTSuspensionStack_SetSweepShapeComponentReference_Statics::NewProp_SweepShapeMeshComponentRef = { "SweepShapeMeshComponentRef", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MMTSuspensionStack_eventSetSweepShapeComponentReference_Parms, SweepShapeMeshComponentRef), Z_Construct_UClass_UMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMMTSuspensionStack_SetSweepShapeComponentReference_Statics::NewProp_SweepShapeMeshComponentRef_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMMTSuspensionStack_SetSweepShapeComponentReference_Statics::NewProp_SweepShapeMeshComponentRef_MetaData)) };
	void Z_Construct_UFunction_UMMTSuspensionStack_SetSweepShapeComponentReference_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MMTSuspensionStack_eventSetSweepShapeComponentReference_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMMTSuspensionStack_SetSweepShapeComponentReference_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MMTSuspensionStack_eventSetSweepShapeComponentReference_Parms), &Z_Construct_UFunction_UMMTSuspensionStack_SetSweepShapeComponentReference_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMMTSuspensionStack_SetSweepShapeComponentReference_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMMTSuspensionStack_SetSweepShapeComponentReference_Statics::NewProp_SweepShapeMeshComponentRef,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMMTSuspensionStack_SetSweepShapeComponentReference_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMMTSuspensionStack_SetSweepShapeComponentReference_Statics::Function_MetaDataParams[] = {
		{ "Category", "MMT Suspension Stack" },
		{ "Comment", "/**\n\x09*\x09Set reference of mesh component used for sweeps\n\x09*\x09@param SweepShapeMeshComponentRef\x09Pointer to mesh component used for sweeps, usually a physical wheel component\n\x09*\x09@return\x09\x09Returns true if reference is valid and was set\n\x09*/" },
		{ "ModuleRelativePath", "Public/MMTSuspensionStack.h" },
		{ "ToolTip", "Set reference of mesh component used for sweeps\n@param SweepShapeMeshComponentRef       Pointer to mesh component used for sweeps, usually a physical wheel component\n@return         Returns true if reference is valid and was set" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMMTSuspensionStack_SetSweepShapeComponentReference_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMMTSuspensionStack, nullptr, "SetSweepShapeComponentReference", nullptr, nullptr, sizeof(MMTSuspensionStack_eventSetSweepShapeComponentReference_Parms), Z_Construct_UFunction_UMMTSuspensionStack_SetSweepShapeComponentReference_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMMTSuspensionStack_SetSweepShapeComponentReference_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMMTSuspensionStack_SetSweepShapeComponentReference_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMMTSuspensionStack_SetSweepShapeComponentReference_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMMTSuspensionStack_SetSweepShapeComponentReference()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMMTSuspensionStack_SetSweepShapeComponentReference_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMMTSuspensionStack_Test_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMMTSuspensionStack_Test_Statics::Function_MetaDataParams[] = {
		{ "Category", "MMT Suspension Stack" },
		{ "ModuleRelativePath", "Public/MMTSuspensionStack.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMMTSuspensionStack_Test_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMMTSuspensionStack, nullptr, "Test", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMMTSuspensionStack_Test_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMMTSuspensionStack_Test_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMMTSuspensionStack_Test()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMMTSuspensionStack_Test_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMMTSuspensionStack_ToggleDebugMode_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMMTSuspensionStack_ToggleDebugMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "MMT Suspension Stack" },
		{ "Comment", "/**\n\x09*\x09Toggle debug mode on/off\n\x09*/" },
		{ "ModuleRelativePath", "Public/MMTSuspensionStack.h" },
		{ "ToolTip", "Toggle debug mode on/off" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMMTSuspensionStack_ToggleDebugMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMMTSuspensionStack, nullptr, "ToggleDebugMode", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMMTSuspensionStack_ToggleDebugMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMMTSuspensionStack_ToggleDebugMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMMTSuspensionStack_ToggleDebugMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMMTSuspensionStack_ToggleDebugMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMMTSuspensionStack_NoRegister()
	{
		return UMMTSuspensionStack::StaticClass();
	}
	struct Z_Construct_UClass_UMMTSuspensionStack_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SprungComponentName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SprungComponentName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SuspensionSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SuspensionSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParentComponentRef_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ParentComponentRef;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SprungMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SprungMeshComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSprungMeshComponentSetManually_MetaData[];
#endif
		static void NewProp_bSprungMeshComponentSetManually_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSprungMeshComponentSetManually;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SweepShapeMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SweepShapeMeshComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSweepShapeMeshComponentSetManually_MetaData[];
#endif
		static void NewProp_bSweepShapeMeshComponentSetManually_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSweepShapeMeshComponentSetManually;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ComponentName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ComponentName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ComponentsParentName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ComponentsParentName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpringMaxLenght_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpringMaxLenght;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpringOffsetTopAdjusted_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpringOffsetTopAdjusted;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpringOffsetBottomAdjusted_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpringOffsetBottomAdjusted;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReferenceFrameTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReferenceFrameTransform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpringDirectionLocal_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpringDirectionLocal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bWarningMessageDisplayed_MetaData[];
#endif
		static void NewProp_bWarningMessageDisplayed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWarningMessageDisplayed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WheelHubPositionLS_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WheelHubPositionLS;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviousSpringLenght_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PreviousSpringLenght;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SuspensionForceMagnitude_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SuspensionForceMagnitude;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SuspensionForceLS_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SuspensionForceLS;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SuspensionForceWS_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SuspensionForceWS;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SuspensionForceScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SuspensionForceScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CompressionRatio_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CompressionRatio;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LineTraceOffsetTopLS_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LineTraceOffsetTopLS;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LineTraceOffsetBottomLS_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LineTraceOffsetBottomLS;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TracedHubLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TracedHubLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShapeSweepLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ShapeSweepLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bContactPointActive_MetaData[];
#endif
		static void NewProp_bContactPointActive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bContactPointActive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ContactInducedVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ContactInducedVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ContactForceAtPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ContactForceAtPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ContactPointLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ContactPointLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ContactPointNormal_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ContactPointNormal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ContactPhysicalMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ContactPhysicalMaterial;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMMTSuspensionStack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MMT,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMMTSuspensionStack_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMMTSuspensionStack_ApplyAntiRollForce, "ApplyAntiRollForce" }, // 483240406
		{ &Z_Construct_UFunction_UMMTSuspensionStack_GetContactData, "GetContactData" }, // 1794698310
		{ &Z_Construct_UFunction_UMMTSuspensionStack_GetSuspensionCompressionRatio, "GetSuspensionCompressionRatio" }, // 665522466
		{ &Z_Construct_UFunction_UMMTSuspensionStack_GetSuspensionForce, "GetSuspensionForce" }, // 4063128286
		{ &Z_Construct_UFunction_UMMTSuspensionStack_GetSuspensionForceScale, "GetSuspensionForceScale" }, // 792471533
		{ &Z_Construct_UFunction_UMMTSuspensionStack_GetWheelHubPosition, "GetWheelHubPosition" }, // 3761834829
		{ &Z_Construct_UFunction_UMMTSuspensionStack_Initialize, "Initialize" }, // 1871002271
		{ &Z_Construct_UFunction_UMMTSuspensionStack_PhysicsUpdate, "PhysicsUpdate" }, // 3307880422
		{ &Z_Construct_UFunction_UMMTSuspensionStack_SetSpringOffsets, "SetSpringOffsets" }, // 2761119765
		{ &Z_Construct_UFunction_UMMTSuspensionStack_SetSpringStiffness, "SetSpringStiffness" }, // 918948692
		{ &Z_Construct_UFunction_UMMTSuspensionStack_SetSprungComponentReference, "SetSprungComponentReference" }, // 4141902827
		{ &Z_Construct_UFunction_UMMTSuspensionStack_SetSuspensionForceScale, "SetSuspensionForceScale" }, // 330196618
		{ &Z_Construct_UFunction_UMMTSuspensionStack_SetSweepShapeComponentReference, "SetSweepShapeComponentReference" }, // 3580912903
		{ &Z_Construct_UFunction_UMMTSuspensionStack_Test, "Test" }, // 2873570649
		{ &Z_Construct_UFunction_UMMTSuspensionStack_ToggleDebugMode, "ToggleDebugMode" }, // 704756592
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMMTSuspensionStack_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MMTSuspensionStack.h" },
		{ "ModuleRelativePath", "Public/MMTSuspensionStack.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMMTSuspensionStack_Statics::NewProp_SprungComponentName_MetaData[] = {
		{ "Category", "Suspension Stack Settings" },
		{ "ModuleRelativePath", "Public/MMTSuspensionStack.h" },
		{ "ToolTip", "Name of the mesh component that will receive suspension force, usually root component" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMMTSuspensionStack_Statics::NewProp_SprungComponentName = { "SprungComponentName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMMTSuspensionStack, SprungComponentName), METADATA_PARAMS(Z_Construct_UClass_UMMTSuspensionStack_Statics::NewProp_SprungComponentName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMMTSuspensionStack_Statics::NewProp_SprungComponentName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMMTSuspensionStack_Statics::NewProp_SuspensionSettings_MetaData[] = {
		{ "Category", "Suspension Stack Settings" },
		{ "ModuleRelativePath", "Public/MMTSuspensionStack.h" },
		{ "ToolTip", "Suspension stack settings" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMMTSuspensionStack_Statics::NewProp_SuspensionSettings = { "SuspensionSettings", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMMTSuspensionStack, SuspensionSettings), Z_Construct_UScriptStruct_FSuspensionStackStruct, METADATA_PARAMS(Z_Construct_UClass_UMMTSuspensionStack_Statics::NewProp_SuspensionSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMMTSuspensionStack_Statics::NewProp_SuspensionSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMMTSuspensionStack_Statics::NewProp_ParentComponentRef_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MMTSuspensionStack.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMMTSuspensionStack_Statics::NewProp_ParentComponentRef = { "ParentComponentRef", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMMTSuspensionStack, ParentComponentRef), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMMTSuspensionStack_Statics::NewProp_ParentComponentRef_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMMTSuspensionStack_Statics::NewProp_ParentComponentRef_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMMTSuspensionStack_Statics::NewProp_SprungMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MMTSuspensionStack.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMMTSuspensionStack_Statics::NewProp_SprungMeshComponent = { "SprungMeshComponent", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMMTSuspensionStack, SprungMeshComponent), Z_Construct_UClass_UMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMMTSuspensionStack_Statics::NewProp_SprungMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMMTSuspensionStack_Statics::NewProp_SprungMeshComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMMTSuspensionStack_Statics::NewProp_bSprungMeshComponentSetManually_MetaData[] = {
		{ "ModuleRelativePath", "Public/MMTSuspensionStack.h" },
	};
#endif
	void Z_Construct_UClass_UMMTSuspensionStack_Statics::NewProp_bSprungMeshComponentSetManually_SetBit(void* Obj)
	{
		((UMMTSuspensionStack*)Obj)->bSprungMeshComponentSetManually = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMMTSuspensionStack_Statics::NewProp_bSprungMeshComponentSetManually = { "bSprungMeshComponentSetManually", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMMTSuspensionStack), &Z_Construct_UClass_UMMTSuspensionStack_Statics::NewProp_bSprungMeshComponentSetManually_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMMTSuspensionStack_Statics::NewProp_bSprungMeshComponentSetManually_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMMTSuspensionStack_Statics::NewProp_bSprungMeshComponentSetManually_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMMTSuspensionStack_Statics::NewProp_SweepShapeMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MMTSuspensionStack.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMMTSuspensionStack_Statics::NewProp_SweepShapeMeshComponent = { "SweepShapeMeshComponent", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMMTSuspensionStack, SweepShapeMeshComponent), Z_Construct_UClass_UMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMMTSuspensionStack_Statics::NewProp_SweepShapeMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMMTSuspensionStack_Statics::NewProp_SweepShapeMeshComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMMTSuspensionStack_Statics::NewProp_bSweepShapeMeshComponentSetManually_MetaData[] = {
		{ "ModuleRelativePath", "Public/MMTSuspensionStack.h" },
	};
#endif
	void Z_Construct_UClass_UMMTSuspensionStack_Statics::NewProp_bSweepShapeMeshComponentSetManually_SetBit(void* Obj)
	{
		((UMMTSuspensionStack*)Obj)->bSweepShapeMeshComponentSetManually = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMMTSuspensionStack_Statics::NewProp_bSweepShapeMeshComponentSetManually = { "bSweepShapeMeshComponentSetManually", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMMTSuspensionStack), &Z_Construct_UClass_UMMTSuspensionStack_Statics::NewProp_bSweepShapeMeshComponentSetManually_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMMTSuspensionStack_Statics::NewProp_bSweepShapeMeshComponentSetManually_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMMTSuspensionStack_Statics::NewProp_bSweepShapeMeshComponentSetManually_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMMTSuspensionStack_Statics::NewProp_ComponentName_MetaData[] = {
		{ "ModuleRelativePath", "Public/MMTSuspensionStack.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMMTSuspensionStack_Statics::NewProp_ComponentName = { "ComponentName", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMMTSuspensionStack, ComponentName), METADATA_PARAMS(Z_Construct_UClass_UMMTSuspensionStack_Statics::NewProp_ComponentName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMMTSuspensionStack_Statics::NewProp_ComponentName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMMTSuspensionStack_Statics::NewProp_ComponentsParentName_MetaData[] = {
		{ "ModuleRelativePath", "Public/MMTSuspensionStack.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMMTSuspensionStack_Statics::NewProp_ComponentsParentName = { "ComponentsParentName", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMMTSuspensionStack, ComponentsParentName), METADATA_PARAMS(Z_Construct_UClass_UMMTSuspensionStack_Statics::NewProp_ComponentsParentName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMMTSuspensionStack_Statics::NewProp_ComponentsParentName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMMTSuspensionStack_Statics::NewProp_SpringMaxLenght_MetaData[] = {
		{ "ModuleRelativePath", "Public/MMTSuspensionStack.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMMTSuspensionStack_Statics::NewProp_SpringMaxLenght = { "SpringMaxLenght", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMMTSuspensionStack, SpringMaxLenght), METADATA_PARAMS(Z_Construct_UClass_UMMTSuspensionStack_Statics::NewProp_SpringMaxLenght_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMMTSuspensionStack_Statics::NewProp_SpringMaxLenght_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMMTSuspensionStack_Statics::NewProp_SpringOffsetTopAdjusted_MetaData[] = {
		{ "ModuleRelativePath", "Public/MMTSuspensionStack.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMMTSuspensionStack_Statics::NewProp_SpringOffsetTopAdjusted = { "SpringOffsetTopAdjusted", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMMTSuspensionStack, SpringOffsetTopAdjusted), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UMMTSuspensionStack_Statics::NewProp_SpringOffsetTopAdjusted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMMTSuspensionStack_Statics::NewProp_SpringOffsetTopAdjusted_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMMTSuspensionStack_Statics::NewProp_SpringOffsetBottomAdjusted_MetaData[] = {
		{ "ModuleRelativePath", "Public/MMTSuspensionStack.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMMTSuspensionStack_Statics::NewProp_SpringOffsetBottomAdjusted = { "SpringOffsetBottomAdjusted", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMMTSuspensionStack, SpringOffsetBottomAdjusted), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UMMTSuspensionStack_Statics::NewProp_SpringOffsetBottomAdjusted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMMTSuspensionStack_Statics::NewProp_SpringOffsetBottomAdjusted_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMMTSuspensionStack_Statics::NewProp_ReferenceFrameTransform_MetaData[] = {
		{ "ModuleRelativePath", "Public/MMTSuspensionStack.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMMTSuspensionStack_Statics::NewProp_ReferenceFrameTransform = { "ReferenceFrameTransform", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMMTSuspensionStack, ReferenceFrameTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_UMMTSuspensionStack_Statics::NewProp_ReferenceFrameTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMMTSuspensionStack_Statics::NewProp_ReferenceFrameTransform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMMTSuspensionStack_Statics::NewProp_SpringDirectionLocal_MetaData[] = {
		{ "ModuleRelativePath", "Public/MMTSuspensionStack.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMMTSuspensionStack_Statics::NewProp_SpringDirectionLocal = { "SpringDirectionLocal", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMMTSuspensionStack, SpringDirectionLocal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UMMTSuspensionStack_Statics::NewProp_SpringDirectionLocal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMMTSuspensionStack_Statics::NewProp_SpringDirectionLocal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMMTSuspensionStack_Statics::NewProp_bWarningMessageDisplayed_MetaData[] = {
		{ "ModuleRelativePath", "Public/MMTSuspensionStack.h" },
	};
#endif
	void Z_Construct_UClass_UMMTSuspensionStack_Statics::NewProp_bWarningMessageDisplayed_SetBit(void* Obj)
	{
		((UMMTSuspensionStack*)Obj)->bWarningMessageDisplayed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMMTSuspensionStack_Statics::NewProp_bWarningMessageDisplayed = { "bWarningMessageDisplayed", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMMTSuspensionStack), &Z_Construct_UClass_UMMTSuspensionStack_Statics::NewProp_bWarningMessageDisplayed_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMMTSuspensionStack_Statics::NewProp_bWarningMessageDisplayed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMMTSuspensionStack_Statics::NewProp_bWarningMessageDisplayed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMMTSuspensionStack_Statics::NewProp_WheelHubPositionLS_MetaData[] = {
		{ "ModuleRelativePath", "Public/MMTSuspensionStack.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMMTSuspensionStack_Statics::NewProp_WheelHubPositionLS = { "WheelHubPositionLS", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMMTSuspensionStack, WheelHubPositionLS), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UMMTSuspensionStack_Statics::NewProp_WheelHubPositionLS_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMMTSuspensionStack_Statics::NewProp_WheelHubPositionLS_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMMTSuspensionStack_Statics::NewProp_PreviousSpringLenght_MetaData[] = {
		{ "ModuleRelativePath", "Public/MMTSuspensionStack.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMMTSuspensionStack_Statics::NewProp_PreviousSpringLenght = { "PreviousSpringLenght", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMMTSuspensionStack, PreviousSpringLenght), METADATA_PARAMS(Z_Construct_UClass_UMMTSuspensionStack_Statics::NewProp_PreviousSpringLenght_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMMTSuspensionStack_Statics::NewProp_PreviousSpringLenght_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMMTSuspensionStack_Statics::NewProp_SuspensionForceMagnitude_MetaData[] = {
		{ "ModuleRelativePath", "Public/MMTSuspensionStack.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMMTSuspensionStack_Statics::NewProp_SuspensionForceMagnitude = { "SuspensionForceMagnitude", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMMTSuspensionStack, SuspensionForceMagnitude), METADATA_PARAMS(Z_Construct_UClass_UMMTSuspensionStack_Statics::NewProp_SuspensionForceMagnitude_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMMTSuspensionStack_Statics::NewProp_SuspensionForceMagnitude_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMMTSuspensionStack_Statics::NewProp_SuspensionForceLS_MetaData[] = {
		{ "ModuleRelativePath", "Public/MMTSuspensionStack.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMMTSuspensionStack_Statics::NewProp_SuspensionForceLS = { "SuspensionForceLS", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMMTSuspensionStack, SuspensionForceLS), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UMMTSuspensionStack_Statics::NewProp_SuspensionForceLS_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMMTSuspensionStack_Statics::NewProp_SuspensionForceLS_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMMTSuspensionStack_Statics::NewProp_SuspensionForceWS_MetaData[] = {
		{ "ModuleRelativePath", "Public/MMTSuspensionStack.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMMTSuspensionStack_Statics::NewProp_SuspensionForceWS = { "SuspensionForceWS", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMMTSuspensionStack, SuspensionForceWS), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UMMTSuspensionStack_Statics::NewProp_SuspensionForceWS_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMMTSuspensionStack_Statics::NewProp_SuspensionForceWS_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMMTSuspensionStack_Statics::NewProp_SuspensionForceScale_MetaData[] = {
		{ "ModuleRelativePath", "Public/MMTSuspensionStack.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMMTSuspensionStack_Statics::NewProp_SuspensionForceScale = { "SuspensionForceScale", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMMTSuspensionStack, SuspensionForceScale), METADATA_PARAMS(Z_Construct_UClass_UMMTSuspensionStack_Statics::NewProp_SuspensionForceScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMMTSuspensionStack_Statics::NewProp_SuspensionForceScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMMTSuspensionStack_Statics::NewProp_CompressionRatio_MetaData[] = {
		{ "ModuleRelativePath", "Public/MMTSuspensionStack.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMMTSuspensionStack_Statics::NewProp_CompressionRatio = { "CompressionRatio", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMMTSuspensionStack, CompressionRatio), METADATA_PARAMS(Z_Construct_UClass_UMMTSuspensionStack_Statics::NewProp_CompressionRatio_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMMTSuspensionStack_Statics::NewProp_CompressionRatio_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMMTSuspensionStack_Statics::NewProp_LineTraceOffsetTopLS_MetaData[] = {
		{ "ModuleRelativePath", "Public/MMTSuspensionStack.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMMTSuspensionStack_Statics::NewProp_LineTraceOffsetTopLS = { "LineTraceOffsetTopLS", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMMTSuspensionStack, LineTraceOffsetTopLS), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UMMTSuspensionStack_Statics::NewProp_LineTraceOffsetTopLS_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMMTSuspensionStack_Statics::NewProp_LineTraceOffsetTopLS_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMMTSuspensionStack_Statics::NewProp_LineTraceOffsetBottomLS_MetaData[] = {
		{ "ModuleRelativePath", "Public/MMTSuspensionStack.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMMTSuspensionStack_Statics::NewProp_LineTraceOffsetBottomLS = { "LineTraceOffsetBottomLS", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMMTSuspensionStack, LineTraceOffsetBottomLS), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UMMTSuspensionStack_Statics::NewProp_LineTraceOffsetBottomLS_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMMTSuspensionStack_Statics::NewProp_LineTraceOffsetBottomLS_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMMTSuspensionStack_Statics::NewProp_TracedHubLocation_MetaData[] = {
		{ "Comment", "//Variable to store location of the trace hit\n" },
		{ "ModuleRelativePath", "Public/MMTSuspensionStack.h" },
		{ "ToolTip", "Variable to store location of the trace hit" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMMTSuspensionStack_Statics::NewProp_TracedHubLocation = { "TracedHubLocation", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMMTSuspensionStack, TracedHubLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UMMTSuspensionStack_Statics::NewProp_TracedHubLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMMTSuspensionStack_Statics::NewProp_TracedHubLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMMTSuspensionStack_Statics::NewProp_ShapeSweepLocation_MetaData[] = {
		{ "ModuleRelativePath", "Public/MMTSuspensionStack.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMMTSuspensionStack_Statics::NewProp_ShapeSweepLocation = { "ShapeSweepLocation", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMMTSuspensionStack, ShapeSweepLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UMMTSuspensionStack_Statics::NewProp_ShapeSweepLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMMTSuspensionStack_Statics::NewProp_ShapeSweepLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMMTSuspensionStack_Statics::NewProp_bContactPointActive_MetaData[] = {
		{ "Comment", "//Variables for recording collision of the wheel and passing data further to friction processing\n" },
		{ "ModuleRelativePath", "Public/MMTSuspensionStack.h" },
		{ "ToolTip", "Variables for recording collision of the wheel and passing data further to friction processing" },
	};
#endif
	void Z_Construct_UClass_UMMTSuspensionStack_Statics::NewProp_bContactPointActive_SetBit(void* Obj)
	{
		((UMMTSuspensionStack*)Obj)->bContactPointActive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMMTSuspensionStack_Statics::NewProp_bContactPointActive = { "bContactPointActive", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMMTSuspensionStack), &Z_Construct_UClass_UMMTSuspensionStack_Statics::NewProp_bContactPointActive_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMMTSuspensionStack_Statics::NewProp_bContactPointActive_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMMTSuspensionStack_Statics::NewProp_bContactPointActive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMMTSuspensionStack_Statics::NewProp_ContactInducedVelocity_MetaData[] = {
		{ "ModuleRelativePath", "Public/MMTSuspensionStack.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMMTSuspensionStack_Statics::NewProp_ContactInducedVelocity = { "ContactInducedVelocity", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMMTSuspensionStack, ContactInducedVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UMMTSuspensionStack_Statics::NewProp_ContactInducedVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMMTSuspensionStack_Statics::NewProp_ContactInducedVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMMTSuspensionStack_Statics::NewProp_ContactForceAtPoint_MetaData[] = {
		{ "ModuleRelativePath", "Public/MMTSuspensionStack.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMMTSuspensionStack_Statics::NewProp_ContactForceAtPoint = { "ContactForceAtPoint", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMMTSuspensionStack, ContactForceAtPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UMMTSuspensionStack_Statics::NewProp_ContactForceAtPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMMTSuspensionStack_Statics::NewProp_ContactForceAtPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMMTSuspensionStack_Statics::NewProp_ContactPointLocation_MetaData[] = {
		{ "ModuleRelativePath", "Public/MMTSuspensionStack.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMMTSuspensionStack_Statics::NewProp_ContactPointLocation = { "ContactPointLocation", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMMTSuspensionStack, ContactPointLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UMMTSuspensionStack_Statics::NewProp_ContactPointLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMMTSuspensionStack_Statics::NewProp_ContactPointLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMMTSuspensionStack_Statics::NewProp_ContactPointNormal_MetaData[] = {
		{ "ModuleRelativePath", "Public/MMTSuspensionStack.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMMTSuspensionStack_Statics::NewProp_ContactPointNormal = { "ContactPointNormal", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMMTSuspensionStack, ContactPointNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UMMTSuspensionStack_Statics::NewProp_ContactPointNormal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMMTSuspensionStack_Statics::NewProp_ContactPointNormal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMMTSuspensionStack_Statics::NewProp_ContactPhysicalMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Public/MMTSuspensionStack.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMMTSuspensionStack_Statics::NewProp_ContactPhysicalMaterial = { "ContactPhysicalMaterial", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMMTSuspensionStack, ContactPhysicalMaterial), Z_Construct_UClass_UPhysicalMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMMTSuspensionStack_Statics::NewProp_ContactPhysicalMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMMTSuspensionStack_Statics::NewProp_ContactPhysicalMaterial_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMMTSuspensionStack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMMTSuspensionStack_Statics::NewProp_SprungComponentName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMMTSuspensionStack_Statics::NewProp_SuspensionSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMMTSuspensionStack_Statics::NewProp_ParentComponentRef,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMMTSuspensionStack_Statics::NewProp_SprungMeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMMTSuspensionStack_Statics::NewProp_bSprungMeshComponentSetManually,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMMTSuspensionStack_Statics::NewProp_SweepShapeMeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMMTSuspensionStack_Statics::NewProp_bSweepShapeMeshComponentSetManually,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMMTSuspensionStack_Statics::NewProp_ComponentName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMMTSuspensionStack_Statics::NewProp_ComponentsParentName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMMTSuspensionStack_Statics::NewProp_SpringMaxLenght,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMMTSuspensionStack_Statics::NewProp_SpringOffsetTopAdjusted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMMTSuspensionStack_Statics::NewProp_SpringOffsetBottomAdjusted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMMTSuspensionStack_Statics::NewProp_ReferenceFrameTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMMTSuspensionStack_Statics::NewProp_SpringDirectionLocal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMMTSuspensionStack_Statics::NewProp_bWarningMessageDisplayed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMMTSuspensionStack_Statics::NewProp_WheelHubPositionLS,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMMTSuspensionStack_Statics::NewProp_PreviousSpringLenght,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMMTSuspensionStack_Statics::NewProp_SuspensionForceMagnitude,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMMTSuspensionStack_Statics::NewProp_SuspensionForceLS,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMMTSuspensionStack_Statics::NewProp_SuspensionForceWS,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMMTSuspensionStack_Statics::NewProp_SuspensionForceScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMMTSuspensionStack_Statics::NewProp_CompressionRatio,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMMTSuspensionStack_Statics::NewProp_LineTraceOffsetTopLS,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMMTSuspensionStack_Statics::NewProp_LineTraceOffsetBottomLS,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMMTSuspensionStack_Statics::NewProp_TracedHubLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMMTSuspensionStack_Statics::NewProp_ShapeSweepLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMMTSuspensionStack_Statics::NewProp_bContactPointActive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMMTSuspensionStack_Statics::NewProp_ContactInducedVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMMTSuspensionStack_Statics::NewProp_ContactForceAtPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMMTSuspensionStack_Statics::NewProp_ContactPointLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMMTSuspensionStack_Statics::NewProp_ContactPointNormal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMMTSuspensionStack_Statics::NewProp_ContactPhysicalMaterial,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMMTSuspensionStack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMMTSuspensionStack>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMMTSuspensionStack_Statics::ClassParams = {
		&UMMTSuspensionStack::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMMTSuspensionStack_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMMTSuspensionStack_Statics::PropPointers),
		0,
		0x009010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMMTSuspensionStack_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMMTSuspensionStack_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMMTSuspensionStack()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMMTSuspensionStack_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMMTSuspensionStack, 422664335);
	template<> MMT_API UClass* StaticClass<UMMTSuspensionStack>()
	{
		return UMMTSuspensionStack::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMMTSuspensionStack(Z_Construct_UClass_UMMTSuspensionStack, &UMMTSuspensionStack::StaticClass, TEXT("/Script/MMT"), TEXT("UMMTSuspensionStack"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMMTSuspensionStack);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
