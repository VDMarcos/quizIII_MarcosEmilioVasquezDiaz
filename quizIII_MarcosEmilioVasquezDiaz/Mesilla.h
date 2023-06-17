#pragma once

#include<iostream>
#include<sstream>

using namespace std;

class Mesilla    //abstract
{
protected:
	int precio;
public:
	Mesilla();
	virtual~Mesilla();
	int getPrecio();
	virtual string toString() = 0;
};
