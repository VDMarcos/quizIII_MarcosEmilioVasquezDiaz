#include "FabricaArtDeco.h"

FabricaArtDeco::FabricaArtDeco()
{
    silla = crearSilla();
    sofa = crearSofa();
    mesi = crearMesilla();
}

FabricaArtDeco::~FabricaArtDeco()
{
    if (silla != NULL)
        delete silla;
    if (sofa != NULL)
        delete sofa;
    if (mesi != NULL)
        delete mesi;
}

Silla* FabricaArtDeco::crearSilla()
{
    return Interfaz::creandoSillaArtDeco();
}

Sofa* FabricaArtDeco::crearSofa()
{
    return Interfaz::creandoSofaArtDeco(); 
}

Mesilla* FabricaArtDeco::crearMesilla()
{
    return Interfaz::creandoMesillaArtDeco(); 
}

string FabricaArtDeco::toString()
{
    stringstream s;
    s << silla->toString() << endl;
    s << sofa->toString() << endl;
    s << mesi->toString() << endl;
    s << "La suma de la sala es de " << sumaDeSala() << " colones" << endl;
    return s.str();
}

int FabricaArtDeco::sumaDeSala()
{
    return silla->getPrecio() + sofa->getPrecio() + mesi->getPrecio();
}
