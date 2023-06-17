#include "MesillaVictoriana.h"

MesillaVictoriana::MesillaVictoriana()
{
	precio = 575000;
}

MesillaVictoriana::~MesillaVictoriana()
{
}

string MesillaVictoriana::toString()
{
	stringstream s;
	s << "Soy una mesilla Victoriana, mi precio es: " << precio << " mil colones.\n";
	return s.str();
}
