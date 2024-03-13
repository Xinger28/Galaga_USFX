// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemiga.h"
#include "NaveEnemigaReabastecimiento.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_API ANaveEnemigaReabastecimiento : public ANaveEnemiga
{
	GENERATED_BODY()
	
private:
	float CapacidadMaxSuministros;
	int Autonomia;//tiempo de mantenerse activo con los suministros

public:

	FORCEINLINE float GetCapacidadMaxSuministros() const { return CapacidadMaxSuministros; }
	FORCEINLINE void SetCapacidadMaxSuministros(float _CapacidadMaxSuministros) { CapacidadMaxSuministros = _CapacidadMaxSuministros; }
	FORCEINLINE float GetAutonomia() const { return Autonomia; }
	FORCEINLINE void SetAutonomia(float _Autonomia) { Autonomia = _Autonomia; }

public:
	ANaveEnemigaReabastecimiento();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

protected:
	virtual void Destruccion();
	virtual void Cargar();
	virtual void Defender();
};
