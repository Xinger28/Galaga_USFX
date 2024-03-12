// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemiga.h"
#include "NaveEnemigaSuicida.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_API ANaveEnemigaSuicida : public ANaveEnemiga
{
	GENERATED_BODY()
	
private:
	float TiempoDestruccion;
	float RangoExplosion;

public:
	FORCEINLINE float GetTiempoDestruccion() const { return TiempoDestruccion; }
	FORCEINLINE void SetTiempoDestruccion(float _TiempoDestruccion) { TiempoDestruccion = _TiempoDestruccion; }
	FORCEINLINE float GetrangoExplosion() const { return RangoExplosion; }
	FORCEINLINE void SetrangoExplosion(float _RangoExplosion) { RangoExplosion = _RangoExplosion; }
};
