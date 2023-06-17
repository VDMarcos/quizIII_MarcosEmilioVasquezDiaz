#pragma once

#include"Silla.h"
#include"Sofa.h"
#include"Mesilla.h"

using namespace std;

class Fabrica      //abstract
{
protected:
	Silla* silla;
	Sofa* sofa;
	Mesilla* mesi;
public:
	virtual Silla* crearSilla() = 0;
	virtual Sofa* crearSofa() = 0;
	virtual Mesilla* crearMesilla() = 0;
	virtual int sumaDeSala() = 0;
	virtual string toString() = 0;
};


