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



//public:

	/*UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Proyectil")
	TSubclassOf<class AProyectilEnemigo> ProyectilEnemigoClass;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Proyectil")*/
	
	/*float DistanciaDisparo;
	void Disparar();*/
	//FTimerHandle TimerHandle_Disparo;


private:
	int ArmasEspeciales;
	int CantitadadExplosivos;

public:
	ANaveEnemigaCaza();
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
	UFUNCTION(BlueprintCallable, Category = "Gameplay")
	virtual void Disparar();

	/*float TiempoEntreDisparos;
	float TiempoUltimoDisparo;*/
};
