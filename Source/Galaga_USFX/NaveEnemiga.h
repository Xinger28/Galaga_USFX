// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NaveEnemiga.generated.h"

UCLASS()
class GALAGA_USFX_API ANaveEnemiga : public AActor
{
	GENERATED_BODY()

public:

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = mallaNaveEnemiga, meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* mallaNaveEnemiga;
	
protected:

	float Velocidad;
	float Resistencia;
	float DanoGenerado;
	FVector Posicion;
	float TiempoDisparo;
	float PatronMovimiento;
	float CapacidadBalas;
	float Energia;
	float Peso;
	float Volumen;

public:
	FORCEINLINE float GetVelocidad() const { return Velocidad; }
	FORCEINLINE float GetResistencia() const { return Resistencia; }
	FORCEINLINE float GetDanoGenerado() const { return DanoGenerado; }
	FORCEINLINE FVector GetPosicion() const { return Posicion; }
	FORCEINLINE float GetTiempoDisparo() const { return TiempoDisparo; }
	FORCEINLINE float GetPatronMovimiento() const { return PatronMovimiento; }
	FORCEINLINE float GetCapacidadBalas() const { return CapacidadBalas; }
	FORCEINLINE float GetEnergia() const { return Energia; }
	FORCEINLINE float GetPeso() const { return Peso; }
	FORCEINLINE float GetVolumen() const { return Volumen; }

	FORCEINLINE void SetVelocidad(float _Velocidad) { Velocidad = _Velocidad; }
	FORCEINLINE void SetResistencia(float _Resistencia) { Resistencia = _Resistencia; }
	FORCEINLINE void SetDanoGenerado(float _DanoGenerado) { DanoGenerado = _DanoGenerado; }
	FORCEINLINE void SetPosicion(FVector _Posicion) { Posicion = _Posicion; }
	FORCEINLINE void SetTiempoDisparo(float _TiempoDisparo) { TiempoDisparo = _TiempoDisparo; }
	FORCEINLINE void SetPatronMovimiento(float _PatronMovimiento) { PatronMovimiento = _PatronMovimiento; }
	FORCEINLINE void SetCapacidadBalas(float _CapacidadBalas) { CapacidadBalas = _CapacidadBalas; }
	FORCEINLINE void SetEnergia(float _Energia) { Energia = _Energia; }
	FORCEINLINE void SetPeso(float _Peso) { Peso = _Peso; }
	FORCEINLINE void SetVolumen(float _Volumen) { Volumen = _Volumen; }


public:	
	// Sets default values for this actor's properties
	ANaveEnemiga();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
