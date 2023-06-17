#include "SillaArtDeco.h"

SillaArtDeco::SillaArtDeco()
{
	precio = 235000;
}

SillaArtDeco::~SillaArtDeco()
{
}

string SillaArtDeco::toString()
{
	stringstream s;
	s << "Soy una silla Art Deco, mi precio es: " << precio << " mil colones.\n";
	return s.str();
}
