// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemiga.h"
#include "NaveEnemigaProtector.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_API ANaveEnemigaProtector : public ANaveEnemiga
{
	GENERATED_BODY()
	
private:
	int Blindaje;
	int ArmasDefensivas;

public:
	FORCEINLINE float GetBlindaje() const { return Blindaje; }
	FORCEINLINE void SetBlindaje(float _Blindaje) { Blindaje = _Blindaje; }
	FORCEINLINE float GetArmasDefensivas() const { return ArmasDefensivas; }
	FORCEINLINE void SetArmasDefensivas(float _ArmasDefensivas) { ArmasDefensivas = _ArmasDefensivas; }

public:
	ANaveEnemigaProtector();

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

protected:
	virtual void Defender();
	virtual void Destruccion();
	virtual void Cargar();
};
