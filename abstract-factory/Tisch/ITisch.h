#pragma once

#include <string>

class ITisch
{
public:
  virtual ~ITisch() = default;

  virtual std::string name() = 0;
  virtual int nummer() = 0;
};