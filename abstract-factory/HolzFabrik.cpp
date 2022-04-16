#include "HolzFabrik.h"

#include "Tisch/HolzTisch.h"

std::string HolzFabrik::name()
{
	return "Holzfabrik";
}

ITisch* HolzFabrik::bauTisch(int nummer)
{
	return new HolzTisch(nummer);
}
