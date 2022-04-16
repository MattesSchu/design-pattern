#include "Produzent/Produzent.h"
#include "HolzFabrik.h"
#include "StahlFabrik.h"

#include <iostream>

int main(int argc, char* argv[])
{
	Produzent produzent;

	std::cout << "Holzfabrik\n";
	HolzFabrik holzFabrik;
	ITisch* holzTisch = produzent.produziere(&holzFabrik);
	std::cout << "..Tisch: " << holzTisch->name() << ", " << holzTisch->nummer() << "\n\n";

	std::cout << "Stahlfabrik\n";
	StahlFabrik stahlFabrik;
	ITisch* stahlTisch = produzent.produziere(&stahlFabrik);
	std::cout << "..Tisch: " << stahlTisch->name() << ", " << stahlTisch->nummer() << "\n\n";

	delete stahlTisch;
	delete holzTisch;

	return 0;
}