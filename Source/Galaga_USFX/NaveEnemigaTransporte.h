// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemiga.h"
#include "NaveEnemigaTransporte.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_API ANaveEnemigaTransporte : public ANaveEnemiga
{
	GENERATED_BODY()

	
private:
	float capacidadMaxPeso;
	float capacidadMaxVolumen;

public:

	FORCEINLINE float GetCapacidadMaxPeso() const { return capacidadMaxPeso; }
	FORCEINLINE void SetCapacidadMaxPeso(float _capacidadMaxPeso) { capacidadMaxPeso = _capacidadMaxPeso; }
	FORCEINLINE float GetCapacidadMaxVolumen() const { return capacidadMaxVolumen; }
	FORCEINLINE void SetCapacidadMaxVolumen(float _capacidadMaxVolumen) { capacidadMaxVolumen = _capacidadMaxVolumen; }

public:
	ANaveEnemigaTransporte();
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};
