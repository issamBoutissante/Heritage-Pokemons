#pragma once
#include<string>
using namespace std;
class Pokemon
{
protected:
	string nom;
	float poids;
public:
	Pokemon(string nom, float poids);
	string ToString();
};

