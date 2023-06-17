#pragma once
#include "Fabrica.h"
#include"VictorianaSilla.h"
#include"SofaVictoriana.h"
#include"MesillaVictoriana.h"
#include"Interfaz.h"

class FabricaVictoriana : public Fabrica
{
public:
	FabricaVictoriana();
	virtual~FabricaVictoriana();
	Silla* crearSilla();
	Sofa* crearSofa();
	Mesilla* crearMesilla();
	string toString();
	int sumaDeSala();
};
