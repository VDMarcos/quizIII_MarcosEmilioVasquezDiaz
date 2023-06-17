#include "MesillaModerna.h"

MesillaModerna::MesillaModerna()
{
	precio = 950000;
}

MesillaModerna::~MesillaModerna()
{
}

string MesillaModerna::toString()
{
	stringstream s;
	s << "Soy una mesilla Moderna, mi precio es: " << precio << " mil colones.\n";
	return s.str();
}
