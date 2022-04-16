#include "StahlFabrik.h"

std::string StahlFabrik::name()
{
	return "Stahlfabrik";
}

ITisch* StahlFabrik::bauTisch(int nummer)
{
	return new StahlTisch(nummer);
}
