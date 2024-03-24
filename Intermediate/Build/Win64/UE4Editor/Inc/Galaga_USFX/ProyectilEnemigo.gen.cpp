// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX/ProyectilEnemigo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProyectilEnemigo() {}
// Cross Module References
	GALAGA_USFX_API UClass* Z_Construct_UClass_AProyectilEnemigo_NoRegister();
	GALAGA_USFX_API UClass* Z_Construct_UClass_AProyectilEnemigo();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AProyectilEnemigo::StaticRegisterNativesAProyectilEnemigo()
	{
	}
	UClass* Z_Construct_UClass_AProyectilEnemigo_NoRegister()
	{
		return AProyectilEnemigo::StaticClass();
	}
	struct Z_Construct_UClass_AProyectilEnemigo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MallaProyectilEnemigo_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MallaProyectilEnemigo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Velocidad_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Velocidad;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AProyectilEnemigo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProyectilEnemigo_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ProyectilEnemigo.h" },
		{ "ModuleRelativePath", "ProyectilEnemigo.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProyectilEnemigo_Statics::NewProp_MallaProyectilEnemigo_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "MallaProyectilEnemigo" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ProyectilEnemigo.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProyectilEnemigo_Statics::NewProp_MallaProyectilEnemigo = { "MallaProyectilEnemigo", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProyectilEnemigo, MallaProyectilEnemigo), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AProyectilEnemigo_Statics::NewProp_MallaProyectilEnemigo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProyectilEnemigo_Statics::NewProp_MallaProyectilEnemigo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProyectilEnemigo_Statics::NewProp_Velocidad_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Movement" },
		{ "Comment", "/** Projectile movement component */" },
		{ "ModuleRelativePath", "ProyectilEnemigo.h" },
		{ "ToolTip", "Projectile movement component" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AProyectilEnemigo_Statics::NewProp_Velocidad = { "Velocidad", nullptr, (EPropertyFlags)0x0040000000010015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProyectilEnemigo, Velocidad), METADATA_PARAMS(Z_Construct_UClass_AProyectilEnemigo_Statics::NewProp_Velocidad_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProyectilEnemigo_Statics::NewProp_Velocidad_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AProyectilEnemigo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProyectilEnemigo_Statics::NewProp_MallaProyectilEnemigo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProyectilEnemigo_Statics::NewProp_Velocidad,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AProyectilEnemigo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProyectilEnemigo>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AProyectilEnemigo_Statics::ClassParams = {
		&AProyectilEnemigo::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AProyectilEnemigo_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AProyectilEnemigo_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AProyectilEnemigo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AProyectilEnemigo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AProyectilEnemigo()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AProyectilEnemigo_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AProyectilEnemigo, 3163432746);
	template<> GALAGA_USFX_API UClass* StaticClass<AProyectilEnemigo>()
	{
		return AProyectilEnemigo::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AProyectilEnemigo(Z_Construct_UClass_AProyectilEnemigo, &AProyectilEnemigo::StaticClass, TEXT("/Script/Galaga_USFX"), TEXT("AProyectilEnemigo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AProyectilEnemigo);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
