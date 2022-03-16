#include "Croisiere.h"
Croisiere::Croisiere(string nom, float poids, int nbrNag)
	:Mer(nom, poids,nbrNag) {
}
float Croisiere::getVitesse() {
	return (Mer::getVitesse() / 2);
}
string Croisiere::ToString() {
	return Pokemon::ToString() +
		"Nombre Nageoires : " + to_string(this->nbrNag) +
		"\nVitesse : " + to_string(this->getVitesse()) + "\n";
}
