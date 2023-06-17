#pragma once
#include<iostream>
#include<sstream>

using namespace std;

class Sofa    //abstract
{
protected:
	int precio;
public:
	Sofa();
	virtual~Sofa();
	int getPrecio();
	virtual string toString() = 0;
};

