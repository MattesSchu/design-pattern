#pragma once

#include "../IFabrik.h"
#include "../Tisch/ITisch.h"

class Produzent
{
public:
	ITisch* produziere(IFabrik* fabrik);
};
