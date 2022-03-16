#pragma once
#include "Pokemon.h"
class Sportif:public Pokemon
{
private:
	int nbrPatte;
	float taille;
	int frequence;
public:
	Sportif(string nom, float poids,int nbrPatte, float taille, int frequence);
	string ToString();
	float getVitesse();
};

