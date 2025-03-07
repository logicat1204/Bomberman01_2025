// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Bomberman01_2025/Bomberman01_2025GameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBomberman01_2025GameMode() {}

// Begin Cross Module References
BOMBERMAN01_2025_API UClass* Z_Construct_UClass_ABomberman01_2025GameMode();
BOMBERMAN01_2025_API UClass* Z_Construct_UClass_ABomberman01_2025GameMode_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_Bomberman01_2025();
// End Cross Module References

// Begin Class ABomberman01_2025GameMode
void ABomberman01_2025GameMode::StaticRegisterNativesABomberman01_2025GameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABomberman01_2025GameMode);
UClass* Z_Construct_UClass_ABomberman01_2025GameMode_NoRegister()
{
	return ABomberman01_2025GameMode::StaticClass();
}
struct Z_Construct_UClass_ABomberman01_2025GameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Bomberman01_2025GameMode.h" },
		{ "ModuleRelativePath", "Bomberman01_2025GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABomberman01_2025GameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ABomberman01_2025GameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Bomberman01_2025,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABomberman01_2025GameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABomberman01_2025GameMode_Statics::ClassParams = {
	&ABomberman01_2025GameMode::StaticClass,
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
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABomberman01_2025GameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ABomberman01_2025GameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABomberman01_2025GameMode()
{
	if (!Z_Registration_Info_UClass_ABomberman01_2025GameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABomberman01_2025GameMode.OuterSingleton, Z_Construct_UClass_ABomberman01_2025GameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABomberman01_2025GameMode.OuterSingleton;
}
template<> BOMBERMAN01_2025_API UClass* StaticClass<ABomberman01_2025GameMode>()
{
	return ABomberman01_2025GameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABomberman01_2025GameMode);
ABomberman01_2025GameMode::~ABomberman01_2025GameMode() {}
// End Class ABomberman01_2025GameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_HP_VICTUS_CORE_i5_Documents_Unreal_Projects_Bomberman01_2025_Source_Bomberman01_2025_Bomberman01_2025GameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABomberman01_2025GameMode, ABomberman01_2025GameMode::StaticClass, TEXT("ABomberman01_2025GameMode"), &Z_Registration_Info_UClass_ABomberman01_2025GameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABomberman01_2025GameMode), 4026855347U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_HP_VICTUS_CORE_i5_Documents_Unreal_Projects_Bomberman01_2025_Source_Bomberman01_2025_Bomberman01_2025GameMode_h_82823039(TEXT("/Script/Bomberman01_2025"),
	Z_CompiledInDeferFile_FID_Users_HP_VICTUS_CORE_i5_Documents_Unreal_Projects_Bomberman01_2025_Source_Bomberman01_2025_Bomberman01_2025GameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_HP_VICTUS_CORE_i5_Documents_Unreal_Projects_Bomberman01_2025_Source_Bomberman01_2025_Bomberman01_2025GameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
