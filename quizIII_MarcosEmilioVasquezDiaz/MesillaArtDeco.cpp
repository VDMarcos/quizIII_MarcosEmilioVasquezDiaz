#include "MesillaArtDeco.h"

MesillaArtDeco::MesillaArtDeco()
{
	precio = 158000;
}

MesillaArtDeco::~MesillaArtDeco()
{
}

string MesillaArtDeco::toString()
{
	stringstream s;
	s << "Soy una mesilla Art Deco, mi precio es: " << precio << " mil colones.\n";
	return s.str();
}
