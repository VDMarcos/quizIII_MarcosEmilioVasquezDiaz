#include "Interfaz.h"

Silla* Interfaz::creandoSillaArtDeco()
{
	cout << "Creando silla Art Deco\n";
	return new SillaArtDeco();
}

Silla* Interfaz::creandoSillaModerna()
{
	cout << "Creando silla Victoriana\n";
	return new VictorianaSilla();
}

Silla* Interfaz::creandoSillaVictoriana()
{
	cout << "Creando silla Moderna\n";
	return new SillaModerna();
}

Sofa* Interfaz::creandoSofaArtDeco()
{
	cout << "Creando sofa Art Deco\n";
	return new SofaArtDeco();
}

Sofa* Interfaz::creandoSofaVictoriana()
{
	cout << "Creando sofa Victoriana\n";
	return new SofaVictoriana();
}

Sofa* Interfaz::creandoSofaModerna()
{
	cout << "Creando sofa Moderna\n";
	return new SofaModerna();
}

Mesilla* Interfaz::creandoMesillaArtDeco()
{
	cout << "Creando mesilla Art Deco\n";
	return new MesillaArtDeco();
}

Mesilla* Interfaz::creandoMesillaVictoriana()
{
	cout << "Creando mesilla Victoriana\n";
	return new MesillaVictoriana();
}

Mesilla* Interfaz::creandoMesillaModerna()
{
	cout << "Creando mesilla Moderna\n";
	return new MesillaModerna();
}
