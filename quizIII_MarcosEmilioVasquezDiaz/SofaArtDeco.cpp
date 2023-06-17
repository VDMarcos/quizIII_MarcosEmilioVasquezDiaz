#include "SofaArtDeco.h"

SofaArtDeco::SofaArtDeco()
{
	precio = 875000;
}

SofaArtDeco::~SofaArtDeco()
{
}

string SofaArtDeco::toString()
{
	stringstream s;
	s << "Soy un sofa ArtDeco, mi precio es: " << precio << " mil colones.\n";
	return s.str();
}
