// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX/EnemigoJefe.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemigoJefe() {}
// Cross Module References
	GALAGA_USFX_API UClass* Z_Construct_UClass_AEnemigoJefe_NoRegister();
	GALAGA_USFX_API UClass* Z_Construct_UClass_AEnemigoJefe();
	GALAGA_USFX_API UClass* Z_Construct_UClass_ANaveEnemiga();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX();
// End Cross Module References
	void AEnemigoJefe::StaticRegisterNativesAEnemigoJefe()
	{
	}
	UClass* Z_Construct_UClass_AEnemigoJefe_NoRegister()
	{
		return AEnemigoJefe::StaticClass();
	}
	struct Z_Construct_UClass_AEnemigoJefe_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemigoJefe_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ANaveEnemiga,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemigoJefe_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "EnemigoJefe.h" },
		{ "ModuleRelativePath", "EnemigoJefe.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemigoJefe_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemigoJefe>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEnemigoJefe_Statics::ClassParams = {
		&AEnemigoJefe::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AEnemigoJefe_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigoJefe_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEnemigoJefe()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEnemigoJefe_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEnemigoJefe, 3002207074);
	template<> GALAGA_USFX_API UClass* StaticClass<AEnemigoJefe>()
	{
		return AEnemigoJefe::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEnemigoJefe(Z_Construct_UClass_AEnemigoJefe, &AEnemigoJefe::StaticClass, TEXT("/Script/Galaga_USFX"), TEXT("AEnemigoJefe"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemigoJefe);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
