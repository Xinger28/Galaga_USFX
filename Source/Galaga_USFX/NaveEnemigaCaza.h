// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemiga.h"
#include "NaveEnemigaCaza.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_API ANaveEnemigaCaza : public ANaveEnemiga
{
	GENERATED_BODY()

private:
	int ArmasEspeciales;
	int CantitadadExplosivos;

public:
	ANaveEnemigaCaza();
	FORCEINLINE int GetCantidadBombas() const { return CantitadadExplosivos; }
	FORCEINLINE void SetCantidadBombas(int _cantitadadExplosivos) { CantitadadExplosivos = _cantitadadExplosivos; }

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

protected:
	virtual void ataque();
	virtual void Destruccion();
};
