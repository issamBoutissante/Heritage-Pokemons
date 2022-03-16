#include "Pokemon.h"
#include<iostream>
Pokemon::Pokemon(string nom, float poids) {
	this->nom = nom;
	this->poids = poids;
}
string Pokemon::ToString() {
	return "Nom : " + this->nom +
		"\nPoids : " + to_string(this->poids);
}