// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Galaga_USFXGameMode.generated.h"

class ANaveEnemiga;
class ANaveEnemigaCaza;
class ANaveEnemigaEspia;
class ANaveEnemigaFantasma;
class ANaveEnemigaJefe;
class ANaveEnemigaNodriza;
class ANaveEnemigaProtector;
class ANaveEnemigaReabastecimiento;
class ANaveEnemigaSuicida;
class ANaveEnemigaTransporte;

UCLASS(MinimalAPI)
class AGalaga_USFXGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AGalaga_USFXGameMode();

public:
	//ANaveEnemiga* NaveEnemiga1;
	ANaveEnemigaCaza* NaveEnemigaCaza1;
	ANaveEnemigaEspia* NaveEnemigaEspia1;
	ANaveEnemigaFantasma* NaveEnemigaFantasma1;
	ANaveEnemigaJefe* NaveEnemigaJefe1;
	ANaveEnemigaNodriza* NaveEnemigaNodriza1;
	ANaveEnemigaProtector* NaveEnemigaProtector1;
	ANaveEnemigaReabastecimiento* NaveEnemigaReabastecimiento1;
	ANaveEnemigaSuicida* NaveEnemigaSuicida1;
	ANaveEnemigaTransporte* NaveEnemigaTransporte1;

protected:

	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:
	TArray<ANaveEnemiga*> TANavesEnemigas;
	TArray<ANaveEnemigaCaza*> TANavesEnemigasCaza;
	TArray<ANaveEnemigaEspia*> TANavesEnemigasEspia;
	TArray<ANaveEnemigaFantasma*> TANavesEnemigasFantasma;
	TArray<ANaveEnemigaJefe*> TANavesEnemigasJefe;
	TArray<ANaveEnemigaNodriza*> TANavesEnemigasNodriza;
	TArray<ANaveEnemigaProtector*> TANavesEnemigasProtector;
	TArray<ANaveEnemigaReabastecimiento*> TANavesEnemigasReabastecimiento;
	TArray<ANaveEnemigaSuicida*> TANavesEnemigasSuicida;
	TArray<ANaveEnemigaTransporte*> TANavesEnemigasTransporte;

public:
	TMap<int32, TArray<ANaveEnemigaCaza*>>ColumnaNavesEnemigasCaza;
	TMap<int32, TArray<ANaveEnemigaEspia*>>ColumnaNavesEnemigasEspia;
	TMap<int32, TArray<ANaveEnemigaFantasma*>>ColumnaNavesEnemigasFantasma;
	TMap<int32, TArray<ANaveEnemigaJefe*>>ColumnaNavesEnemigasJefe;
	TMap<int32, TArray<ANaveEnemigaNodriza*>>ColumnaNavesEnemigasNodriza;
	TMap<int32, TArray<ANaveEnemigaProtector*>>ColumnaNavesEnemigasProtector;
	TMap<int32, TArray<ANaveEnemigaReabastecimiento*>>ColumnaNavesEnemigasReabastecimiento;
	TMap<int32, TArray<ANaveEnemigaSuicida*>>ColumnaNavesEnemigasSuicida;
	TMap<int32, TArray<ANaveEnemigaTransporte*>>ColumnaNavesEnemigasTransporte;

};



