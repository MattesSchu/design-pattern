#pragma once

#include "Tisch/ITisch.h"

#include <string>

class IFabrik
{
public:
	virtual ~IFabrik() {};

	virtual std::string name() = 0;
	virtual ITisch* bauTisch(int nummer) = 0;
};
