// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealTeam1Project/UnrealTeam1ProjectGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUnrealTeam1ProjectGameModeBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UNREALTEAM1PROJECT_API UClass* Z_Construct_UClass_AUnrealTeam1ProjectGameModeBase();
	UNREALTEAM1PROJECT_API UClass* Z_Construct_UClass_AUnrealTeam1ProjectGameModeBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealTeam1Project();
// End Cross Module References
	void AUnrealTeam1ProjectGameModeBase::StaticRegisterNativesAUnrealTeam1ProjectGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AUnrealTeam1ProjectGameModeBase);
	UClass* Z_Construct_UClass_AUnrealTeam1ProjectGameModeBase_NoRegister()
	{
		return AUnrealTeam1ProjectGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AUnrealTeam1ProjectGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUnrealTeam1ProjectGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealTeam1Project,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnrealTeam1ProjectGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "UnrealTeam1ProjectGameModeBase.h" },
		{ "ModuleRelativePath", "UnrealTeam1ProjectGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUnrealTeam1ProjectGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUnrealTeam1ProjectGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AUnrealTeam1ProjectGameModeBase_Statics::ClassParams = {
		&AUnrealTeam1ProjectGameModeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AUnrealTeam1ProjectGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AUnrealTeam1ProjectGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUnrealTeam1ProjectGameModeBase()
	{
		if (!Z_Registration_Info_UClass_AUnrealTeam1ProjectGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AUnrealTeam1ProjectGameModeBase.OuterSingleton, Z_Construct_UClass_AUnrealTeam1ProjectGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AUnrealTeam1ProjectGameModeBase.OuterSingleton;
	}
	template<> UNREALTEAM1PROJECT_API UClass* StaticClass<AUnrealTeam1ProjectGameModeBase>()
	{
		return AUnrealTeam1ProjectGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUnrealTeam1ProjectGameModeBase);
	AUnrealTeam1ProjectGameModeBase::~AUnrealTeam1ProjectGameModeBase() {}
	struct Z_CompiledInDeferFile_FID_Users_Jordan_Macri_Documents_Unreal_Projects_UnrealTeam1Project_Source_UnrealTeam1Project_UnrealTeam1ProjectGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Jordan_Macri_Documents_Unreal_Projects_UnrealTeam1Project_Source_UnrealTeam1Project_UnrealTeam1ProjectGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AUnrealTeam1ProjectGameModeBase, AUnrealTeam1ProjectGameModeBase::StaticClass, TEXT("AUnrealTeam1ProjectGameModeBase"), &Z_Registration_Info_UClass_AUnrealTeam1ProjectGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AUnrealTeam1ProjectGameModeBase), 1829918076U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Jordan_Macri_Documents_Unreal_Projects_UnrealTeam1Project_Source_UnrealTeam1Project_UnrealTeam1ProjectGameModeBase_h_2594136096(TEXT("/Script/UnrealTeam1Project"),
		Z_CompiledInDeferFile_FID_Users_Jordan_Macri_Documents_Unreal_Projects_UnrealTeam1Project_Source_UnrealTeam1Project_UnrealTeam1ProjectGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Jordan_Macri_Documents_Unreal_Projects_UnrealTeam1Project_Source_UnrealTeam1Project_UnrealTeam1ProjectGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
