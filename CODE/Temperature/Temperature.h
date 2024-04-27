#ifndef TEMPERATURE
#define TEMPERATURE

#include "ICalculate.h" //for Calculate
#include <iostream> // for std::cout

class Temperature : public ICalculate //for Frequency converter Temperature?
{
public:
  void Calculate() const override
  {
    std::cout << "35.6 Ñ" << std::endl;
  }
};

#endif