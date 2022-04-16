#pragma once

#include "ITisch.h"

class HolzTisch : public ITisch
{
public:
  HolzTisch(int nummer);
  std::string name() override;
  int nummer() override;
private:
  int m_nummer;
};
