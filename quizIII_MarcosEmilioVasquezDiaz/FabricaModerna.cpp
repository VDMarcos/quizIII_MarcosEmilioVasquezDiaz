#include "FabricaModerna.h"

FabricaModerna::FabricaModerna()
{
    silla = crearSilla();
    sofa = crearSofa();
    mesi = crearMesilla();
}

FabricaModerna::~FabricaModerna()
{
    if (silla != NULL)
        delete silla;
    if (sofa != NULL)
        delete sofa;
    if (mesi != NULL)
        delete mesi;
}

Silla* FabricaModerna::crearSilla()
{
    return Interfaz::creandoSillaModerna();
}

Sofa* FabricaModerna::crearSofa()
{
    return Interfaz::creandoSofaModerna();
}

Mesilla* FabricaModerna::crearMesilla()
{
    return Interfaz::creandoMesillaModerna();
}

string FabricaModerna::toString()
{
    stringstream s;
    s << silla->toString() << endl;
    s << sofa->toString() << endl;
    s << mesi->toString() << endl;
    s << "La suma de la sala es de " << sumaDeSala() << " colones" << endl;
    return s.str();
}

int FabricaModerna::sumaDeSala()
{
    return silla->getPrecio() + sofa->getPrecio() + mesi->getPrecio();
}
