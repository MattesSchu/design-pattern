#include "HolzTisch.h"

#include <iostream>

HolzTisch::HolzTisch(int nummer) : m_nummer(nummer) {};

std::string HolzTisch::name()
{
	return "Holztisch";
}

int HolzTisch::nummer()
{
	return m_nummer;
}

