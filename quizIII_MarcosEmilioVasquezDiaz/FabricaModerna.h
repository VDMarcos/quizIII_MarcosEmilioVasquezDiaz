#pragma once
#include "Fabrica.h"
#include"SillaModerna.h"
#include"SofaModerna.h"
#include"MesillaModerna.h"
#include"Interfaz.h"

class FabricaModerna : public Fabrica
{
public:
	FabricaModerna();
	virtual~FabricaModerna();
	Silla* crearSilla();
	Sofa* crearSofa();
	Mesilla* crearMesilla();
	string toString();
	int sumaDeSala();
};
