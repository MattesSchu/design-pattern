#include "StahlTisch.h"

#include <iostream>

StahlTisch::StahlTisch(int nummer)
  : m_nummer(nummer)
{
}

std::string StahlTisch::name() {
  return "Stahltisch";
}

int StahlTisch::nummer()
{
  return m_nummer;
}
