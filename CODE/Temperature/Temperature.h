#ifndef TEMPERATURE
#define TEMPERATURE

#include "ICalculate.h" //for Calculate
#include <iostream> // for std::cout

class Temperature : public ICalculate //for Frequency converter Temperature?
{
public:
  void Calculate() const override
  {
    std::cout << "35.6 С" << std::endl; //необходимо дописать (данная строка для теста)
  }
};

#endif