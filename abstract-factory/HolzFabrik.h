#pragma once

#include "IFabrik.h"
#include "Tisch/ITisch.h"

class HolzFabrik : public IFabrik
{
public:
	std::string name() override;
	ITisch* bauTisch(int nummer) override;
};
