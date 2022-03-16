#include "Sportif.h"
Sportif::Sportif(string nom, float poids,int nbrPatte, float taille, int frequence)
	:Pokemon(nom,poids) {
	this->nbrPatte = nbrPatte;
	this->taille = taille;
	this->frequence = frequence;
}
float Sportif::getVitesse() {
	return nbrPatte * taille * 3;
}
string Sportif::ToString() {
	return Pokemon::ToString() +
		"Nombre Patte : " + to_string(this->nbrPatte) +
		"\nTaille : " + to_string(this->taille) +
		"\nFrequence : " + to_string(this->frequence) + "\n";
	    "\nVitesse : " + to_string(this->getVitesse()) + "\n";
}