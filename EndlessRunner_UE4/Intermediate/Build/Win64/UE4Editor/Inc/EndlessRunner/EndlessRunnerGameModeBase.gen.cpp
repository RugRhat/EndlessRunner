// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EndlessRunner/EndlessRunnerGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEndlessRunnerGameModeBase() {}
// Cross Module References
	ENDLESSRUNNER_API UClass* Z_Construct_UClass_AEndlessRunnerGameModeBase_NoRegister();
	ENDLESSRUNNER_API UClass* Z_Construct_UClass_AEndlessRunnerGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_EndlessRunner();
// End Cross Module References
	void AEndlessRunnerGameModeBase::StaticRegisterNativesAEndlessRunnerGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AEndlessRunnerGameModeBase_NoRegister()
	{
		return AEndlessRunnerGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AEndlessRunnerGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEndlessRunnerGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_EndlessRunner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEndlessRunnerGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "EndlessRunnerGameModeBase.h" },
		{ "ModuleRelativePath", "EndlessRunnerGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEndlessRunnerGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEndlessRunnerGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEndlessRunnerGameModeBase_Statics::ClassParams = {
		&AEndlessRunnerGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AEndlessRunnerGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEndlessRunnerGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEndlessRunnerGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEndlessRunnerGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEndlessRunnerGameModeBase, 2344192768);
	template<> ENDLESSRUNNER_API UClass* StaticClass<AEndlessRunnerGameModeBase>()
	{
		return AEndlessRunnerGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEndlessRunnerGameModeBase(Z_Construct_UClass_AEndlessRunnerGameModeBase, &AEndlessRunnerGameModeBase::StaticClass, TEXT("/Script/EndlessRunner"), TEXT("AEndlessRunnerGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEndlessRunnerGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
