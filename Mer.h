#pragma once
#include "Pokemon.h"
class Mer :public Pokemon
{
protected:
	int nbrNag;
public:
	Mer(string nom, float poids, int nbrNag);
	float getVitesse();
	string ToString();
};

