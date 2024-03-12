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
//
//public:
//	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = mallaNaveEnemiga, meta = (AllowPrivateAccess = "true"))
//	UStaticMeshComponent* mallaNaveEnemiga;
	
private:
	float capacidadMaxPeso;
	float capacidadMaxVolumen;

public:

	FORCEINLINE float GetCapacidadCargaPeso() const { return capacidadMaxPeso; }
	FORCEINLINE void SetCapacidadCargaPeso(float capacidad) { capacidadMaxPeso = capacidad; }
	FORCEINLINE float GetCapacidadCargaVolumen() const { return capacidadMaxVolumen; }
	FORCEINLINE void SetCapacidadCargaVolumen(float capacidad) { capacidadMaxVolumen = capacidad; }

public:
	ANaveEnemigaTransporte();
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	float Speed;

};
