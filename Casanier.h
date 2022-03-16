#pragma once
#include "Sportif.h"
class Casanier :public Sportif
{
private:
	int nbrHeur;
public:
	Casanier(string nom, float poids, int nbrPatte, float taille, int frequence,int nbrHeur);
	string ToString();
};

