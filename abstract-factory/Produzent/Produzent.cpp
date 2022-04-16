#include "Produzent.h"

ITisch* Produzent::produziere(IFabrik* fabrik)
{
	return fabrik->bauTisch(1);
}
