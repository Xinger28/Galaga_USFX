// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemiga.h"
#include "Galaga_USFXProjectile.h"
#include "NaveEnemigaCaza.generated.h"


/**
 * 
 */
UCLASS()
class GALAGA_USFX_API ANaveEnemigaCaza : public ANaveEnemiga
{
	GENERATED_BODY()

public:
	ANaveEnemigaCaza();

private:
	int ArmasEspeciales;
	int CantitadadExplosivos;

public:

	FORCEINLINE int GetCantidadBombas() const { return CantitadadExplosivos; }
	FORCEINLINE void SetCantidadBombas(int _cantitadadExplosivos) { CantitadadExplosivos = _cantitadadExplosivos; }
	FORCEINLINE int GetArmasEspeciales() const { return ArmasEspeciales; }
	FORCEINLINE void SetArmasEspeciales(int _ArmasEspeciales) { ArmasEspeciales = _ArmasEspeciales; }

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

protected:
	virtual void BeginPlay() override;

protected:
	virtual void Ataque();
	virtual void Destruccion();
	
private:

	virtual void Disparar();


	float TiempoEntreProyectil;
	float TiempoUltimoProyectil;
	float VelocidadProyectil;

};
