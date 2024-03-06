// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemiga.h"
#include "EnemigoTransporte.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_API AEnemigoTransporte : public ANaveEnemiga
{
	GENERATED_BODY()
	
private:
	float capacidadMaxPeso;
	float capacidadMaxVolumen;

public:
	FORCEINLINE float GetCapacidadCargaPeso() const { return capacidadMaxPeso; }
	FORCEINLINE void SetCapacidadCargaPeso(float capacidad) { capacidadMaxPeso = capacidad; }
	FORCEINLINE float GetCapacidadCargaVolumen() const { return capacidadMaxVolumen; }
	FORCEINLINE void SetCapacidadCargaVolumen(float capacidad) { capacidadMaxVolumen = capacidad; }
};
