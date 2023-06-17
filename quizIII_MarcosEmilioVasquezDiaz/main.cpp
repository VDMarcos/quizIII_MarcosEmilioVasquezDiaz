//Marcos Emilio Vasquez Diaz
//A00149427

#include"Interfaz.h"
#include"FabricaArtDeco.h"
#include"FabricaVictoriana.h"
#include"FabricaModerna.h"

int main() {

	Fabrica* FE = NULL;
	int op;
	do {

		system("cls");
		FE = NULL;
		cout << endl;
		cout << "--------------ABSTRACT FACTORY--------------" << endl;
		cout << "--------------------MENU--------------------" << endl;
		cout << endl;
		cout << "   1- Creacion de sala Art Deco    " << endl;
		cout << "   2- Creacion de sala Victoriana    " << endl;
		cout << "   3- Creacion de sala Moderna    " << endl;
		cout << "   4- salir    " << endl;
		cout << "--------------------------------------------" << endl;
		cout << "Digite la opcion...";
		cin >> op;
		switch (op)
		{
		case 1:
			cout << "Fabrica ArtDeco..." << endl;
			FE = new FabricaArtDeco();
			cout << FE->toString() << endl;
			break;
		case 2:
			cout << "Fabrica Victoriana..." << endl;
			FE = new FabricaVictoriana();
			cout << FE->toString() << endl;
			break;
		case 3:
			cout << "Fabrica Moderna..." << endl;
			FE = new FabricaModerna();
			cout << FE->toString() << endl;
			break;
		case 4:cout << "Thank you" << endl;
		}
		system("pause");
	} while (op != 4);


	return 0;
}