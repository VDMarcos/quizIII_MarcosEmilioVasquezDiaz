#pragma once

#include"Silla.h"
#include"Mesilla.h"
#include"Sofa.h"
#include"SofaArtDeco.h"
#include"SillaArtDeco.h"
#include"MesillaArtDeco.h"
#include"SofaVictoriana.h"
#include"VictorianaSilla.h"
#include"MesillaVictoriana.h"
#include"SofaModerna.h"
#include"SillaModerna.h"
#include"MesillaModerna.h"

class Interfaz
{
public:
	static Silla* creandoSillaArtDeco();
	static Silla* creandoSillaModerna();
	static Silla* creandoSillaVictoriana();
	static Sofa* creandoSofaArtDeco();
	static Sofa* creandoSofaVictoriana();
	static Sofa* creandoSofaModerna();
	static Mesilla* creandoMesillaArtDeco();
	static Mesilla* creandoMesillaVictoriana();
	static Mesilla* creandoMesillaModerna();
};
