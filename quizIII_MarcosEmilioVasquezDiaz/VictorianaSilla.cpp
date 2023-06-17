#include "VictorianaSilla.h"

VictorianaSilla::VictorianaSilla()
{
    precio = 185000;
}

VictorianaSilla::~VictorianaSilla()
{
}

string VictorianaSilla::toString()
{
    stringstream s;
    s << "Soy una silla Victoriana, mi precio es: " << precio << " mil colones.\n";
    return s.str();
}
