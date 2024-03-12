// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Galaga_USFXGameMode.generated.h"

//class ANaveEnemiga;
class ANaveEnemigaCaza;
class ANaveEnemigaTransporte;
class ANaveEnemigaEspia;
class ANaveEnemigaJefe;
class ANaveEnemigaNodriza;
class ANaveEnemigaProtector;
class ANaveEnemigaSuicida;
class ANaveEnemigaReabastecimiento;
class ANaveEnemigaFantasma;

UCLASS(MinimalAPI)
class AGalaga_USFXGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AGalaga_USFXGameMode();

public:
	//ANaveEnemiga* NaveEnemiga1;
	ANaveEnemigaCaza* NaveEnemigaCaza1;
	ANaveEnemigaTransporte* NaveEnemigaTransporte1;
	ANaveEnemigaEspia* NaveEnemigaEspia1;
	ANaveEnemigaJefe* NaveEnemigaJefe1;
	ANaveEnemigaNodriza* NaveEnemigaNodriza1;
	ANaveEnemigaProtector* NaveEnemigaProtector1;
	ANaveEnemigaSuicida* NaveEnemigaSuicida1;
	ANaveEnemigaReabastecimiento* NaveEnemigaReabastecimiento1;
	ANaveEnemigaFantasma* NaveEnemigaFantasma1;

protected:

	virtual void BeginPlay() override;
};



