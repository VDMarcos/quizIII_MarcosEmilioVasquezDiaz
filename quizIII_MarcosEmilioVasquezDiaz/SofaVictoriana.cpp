#include "SofaVictoriana.h"

SofaVictoriana::SofaVictoriana()
{
	precio = 1200000;
}

SofaVictoriana::~SofaVictoriana()
{
}

string SofaVictoriana::toString()
{
	stringstream s;
	s << "Soy un sofa Victoriana, mi precio es: " << precio << " colones.\n";
	return s.str();
}
