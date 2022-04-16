#pragma once

#include "ITisch.h"

class StahlTisch : public ITisch
{
public:
  StahlTisch(int nummer);

  std::string name() override;
  int nummer() override;
private:
  int m_nummer;
};
