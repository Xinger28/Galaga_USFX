// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemiga.h"
#include "NaveEnemigaFantasma.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_API ANaveEnemigaFantasma : public ANaveEnemiga
{
	GENERATED_BODY()
	
private:
	int Invisibilidad;
	int DisappearSpeed;// La velocidad a la que la nave se desvanece de la vista del jugador cuando se vuelve invisible.
	int AppearSpeed;// La velocidad a la que la nave reaparece en la pantalla del jugador cuando se hace visible nuevamente.
	float InvisibilityDuration;// El tiempo durante el cual la nave permanece invisible antes de volver a aparecer.

public:
	FORCEINLINE float GetInvisibililidad() const { return Invisibilidad; }
	FORCEINLINE void SetInvisibililidad(float _Invisibilidad) { Invisibilidad = _Invisibilidad; }
	FORCEINLINE float GetDisappearsPeed() const { return DisappearSpeed; }
	FORCEINLINE void SetDisappearsPeed(float _DisappearSpeed) { DisappearSpeed = _DisappearSpeed; }
	FORCEINLINE float GetInvisibilityDuration() const { return InvisibilityDuration; }
	FORCEINLINE void SetInvisibilityDuration(float _InvisibilityDuration) { InvisibilityDuration = _InvisibilityDuration; }

public:
	ANaveEnemigaFantasma();


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

protected:
	virtual void Ataque();
	virtual void Destruccion();
	virtual void Desaparecer();
};
