#include "FabricaVictoriana.h"

FabricaVictoriana::FabricaVictoriana()
{
    silla = crearSilla();
    sofa = crearSofa();
    mesi = crearMesilla();
}

FabricaVictoriana::~FabricaVictoriana()
{
    if (silla != NULL)
        delete silla;
    if (sofa != NULL)
        delete sofa;
    if (mesi != NULL)
        delete mesi;
}

Silla* FabricaVictoriana::crearSilla()
{
    return Interfaz::creandoSillaVictoriana();
}

Sofa* FabricaVictoriana::crearSofa()
{
    return Interfaz::creandoSofaVictoriana();
}

Mesilla* FabricaVictoriana::crearMesilla()
{
    return Interfaz::creandoMesillaVictoriana();
}

string FabricaVictoriana::toString()
{
    stringstream s;
    s << silla->toString() << endl;
    s << sofa->toString() << endl;
    s << mesi->toString() << endl;
    s << "La suma de la sala es de " << sumaDeSala() << " colones" << endl;
    return s.str();
}

int FabricaVictoriana::sumaDeSala()
{
    return silla->getPrecio() + sofa->getPrecio() + mesi->getPrecio();
}
