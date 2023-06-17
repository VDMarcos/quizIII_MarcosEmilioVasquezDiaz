#include "SofaModerna.h"

SofaModerna::SofaModerna()
{
	precio = 2100000;
}

SofaModerna::~SofaModerna()
{
}

string SofaModerna::toString()
{
	stringstream s;
	s << "Soy un sofa Moderna, mi precio es: " << precio << " colones.\n";
	return s.str();
}
