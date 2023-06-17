#pragma once
#include "Fabrica.h"
#include"SillaArtDeco.h"
#include"SofaArtDeco.h"
#include"MesillaArtDeco.h"
#include"Interfaz.h"

class FabricaArtDeco : public Fabrica
{
public:
	FabricaArtDeco();
	virtual~FabricaArtDeco();
	Silla* crearSilla();
	Sofa* crearSofa();
	Mesilla* crearMesilla();
	string toString();
	int sumaDeSala();
};

