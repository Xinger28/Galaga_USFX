// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemiga.h"
#include "NaveEnemigaNodriza.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_API ANaveEnemigaNodriza : public ANaveEnemiga
{
	GENERATED_BODY()
	
private:
	float FighterSquadrons;//La cantidad y tipo de cazas o naves de ataque que puede desplegar para protegerse o atacar al jugador.
	float Shields;//La capacidad de protección de escudos de la nave nodriza contra los ataques del jugador.
	float PowerGenerators;	//Equipamiento especializado que puede aumentar la velocidad de recarga de escudos, armas o habilidades de otras naves enemigas cercanas.

public:
	FORCEINLINE float GetFighterSquadrons() const { return FighterSquadrons; }
	FORCEINLINE void SetFighterSquadrons(float _FighterSquadrons) { FighterSquadrons = _FighterSquadrons; }
	FORCEINLINE float GetShields() const { return Shields; }
	FORCEINLINE void SetShields(float _Shields) { Shields = _Shields; }
	FORCEINLINE float GetPowerGenerators() const { return PowerGenerators; }
	FORCEINLINE void SetPowerGenerators(float _PowerGenerators) { PowerGenerators = _PowerGenerators; }

public:
	ANaveEnemigaNodriza();

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

protected:
	virtual void Ataque();
	virtual void Destruccion();
	virtual void Cargar();
};
