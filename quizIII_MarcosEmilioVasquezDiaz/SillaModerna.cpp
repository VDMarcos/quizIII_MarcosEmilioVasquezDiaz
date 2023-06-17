#include "SillaModerna.h"

SillaModerna::SillaModerna()
{
	precio = 350000;
}

SillaModerna::~SillaModerna()
{
}

string SillaModerna::toString()
{
	stringstream s;
	s << "Soy una silla Moderna, mi precio es: " << precio << " mil colones.\n";
	return s.str();
}
