#pragma once
#include "Mer.h"
class Croisiere :public Mer
{
public:
	Croisiere(string nom, float poids, int nbrNag);
	float getVitesse();
	string ToString();
};

