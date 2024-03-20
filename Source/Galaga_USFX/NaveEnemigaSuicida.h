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
	float AutoExplosion;
	float RangoExplosion;

public:
	FORCEINLINE float GetAutoExplosion() const { return AutoExplosion; }
	FORCEINLINE void SetAutoExplosion(float _AutoExplosion) { AutoExplosion = _AutoExplosion; }
	FORCEINLINE float GetRangoExplosion() const { return RangoExplosion; }
	FORCEINLINE void SetRangoExplosion(float _RangoExplosion) { RangoExplosion = _RangoExplosion; }

public:
	ANaveEnemigaSuicida();

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

protected:
	virtual void Ataque();
	virtual void Explotar();
};
