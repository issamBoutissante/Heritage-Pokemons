#include <iostream>
#include"Casanier.h"
#include"Sportif.h"
#include"Mer.h"
#include"Croisiere.h"
int main()
{
	Mer m1("issam", 13, 3);
	Croisiere c1("me", 13, 3);
	cout << m1.ToString();
	cout<<c1.ToString();
	return 200;
}