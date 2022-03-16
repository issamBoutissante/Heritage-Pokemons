#include "Casanier.h"
Casanier::Casanier(string nom, float poids, int nbrPatte, float taille, int frequence, int nbrHeur) 
	:Sportif(nom,poids,nbrPatte,taille,frequence) {
	this->nbrHeur = nbrHeur;
}
string Casanier::ToString() {
	return Sportif::ToString() +
		"Nombre Heurs : " + to_string(this->nbrHeur)+"\n";
}
