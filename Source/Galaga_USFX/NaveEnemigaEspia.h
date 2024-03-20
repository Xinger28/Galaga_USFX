// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemiga.h"
#include "NaveEnemigaEspia.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_API ANaveEnemigaEspia : public ANaveEnemiga
{
	GENERATED_BODY()
	
private:
	int Camuflage;
	int VelocidadCamuflage;
	float DuracionCamuflage;

public:
	FORCEINLINE float GetInvisibililidad() const { return Camuflage; }
	FORCEINLINE void SetInvisibililidad(float _Camuflage) { Camuflage = _Camuflage; }
	FORCEINLINE float GetVelocidadCamuflage() const { return VelocidadCamuflage; }
	FORCEINLINE void SetVelocidadCamuflage(float _VelocidadCamuflage) { VelocidadCamuflage = _VelocidadCamuflage; }
	FORCEINLINE float GetDuracionCamuflage() const { return DuracionCamuflage; }
	FORCEINLINE void SetDuracionCamuflage(float _DuracionCamuflage) { DuracionCamuflage = _DuracionCamuflage; }

public:
		ANaveEnemigaEspia();

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

protected:
	virtual void Destruccion();
	virtual void Retirada();
	virtual void Camuflaje();
};
