// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX/NaveEnemigaProtectorNv2.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNaveEnemigaProtectorNv2() {}
// Cross Module References
	GALAGA_USFX_API UClass* Z_Construct_UClass_ANaveEnemigaProtectorNv2_NoRegister();
	GALAGA_USFX_API UClass* Z_Construct_UClass_ANaveEnemigaProtectorNv2();
	GALAGA_USFX_API UClass* Z_Construct_UClass_ANaveEnemigaProtector();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX();
// End Cross Module References
	void ANaveEnemigaProtectorNv2::StaticRegisterNativesANaveEnemigaProtectorNv2()
	{
	}
	UClass* Z_Construct_UClass_ANaveEnemigaProtectorNv2_NoRegister()
	{
		return ANaveEnemigaProtectorNv2::StaticClass();
	}
	struct Z_Construct_UClass_ANaveEnemigaProtectorNv2_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANaveEnemigaProtectorNv2_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ANaveEnemigaProtector,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveEnemigaProtectorNv2_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "NaveEnemigaProtectorNv2.h" },
		{ "ModuleRelativePath", "NaveEnemigaProtectorNv2.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANaveEnemigaProtectorNv2_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANaveEnemigaProtectorNv2>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANaveEnemigaProtectorNv2_Statics::ClassParams = {
		&ANaveEnemigaProtectorNv2::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ANaveEnemigaProtectorNv2_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveEnemigaProtectorNv2_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANaveEnemigaProtectorNv2()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANaveEnemigaProtectorNv2_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANaveEnemigaProtectorNv2, 1444070938);
	template<> GALAGA_USFX_API UClass* StaticClass<ANaveEnemigaProtectorNv2>()
	{
		return ANaveEnemigaProtectorNv2::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANaveEnemigaProtectorNv2(Z_Construct_UClass_ANaveEnemigaProtectorNv2, &ANaveEnemigaProtectorNv2::StaticClass, TEXT("/Script/Galaga_USFX"), TEXT("ANaveEnemigaProtectorNv2"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANaveEnemigaProtectorNv2);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
