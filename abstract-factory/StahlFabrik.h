#pragma once

#include "IFabrik.h"
#include "Tisch/StahlTisch.h"

class StahlFabrik : public IFabrik
{
public:
	std::string name() override;
	ITisch* bauTisch(int nummer) override;
};
