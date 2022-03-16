#include "Mer.h"
Mer::Mer(string nom, float poids, int nbrNag)
	:Pokemon(nom, poids) {
	this->nbrNag = nbrNag;
}
float Mer::getVitesse() {
	return (poids / 25) * nbrNag;
}

string Mer::ToString() {
	return Pokemon::ToString() +
		"Nombre Nageoires : " + to_string(this->nbrNag) +
	    "\nVitesse : " + to_string(this->getVitesse()) + "\n";
}
