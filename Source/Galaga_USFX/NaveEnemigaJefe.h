// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemiga.h"
#include "NaveEnemigaJefe.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_API ANaveEnemigaJefe : public ANaveEnemiga
{
	GENERATED_BODY()
	
private:
	float TamanoGigante;
	float PatronAtaques;

public:
	FORCEINLINE float GetTamanoGigangante() const { return TamanoGigante; }
	FORCEINLINE void SetTamanoGigante(float _TamanoGigante) { TamanoGigante = _TamanoGigante; }
	FORCEINLINE float GetPatronAtaques() const { return PatronAtaques; }
	FORCEINLINE void SetPatronAtaques(float _PatronAtaques) { PatronAtaques = _PatronAtaques; }
};