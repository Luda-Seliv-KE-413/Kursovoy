#ifndef FREQUENCY
#define FREQUENCY

#include "ICalculate.h" //for Calculate
#include <iostream> // for std::cout

//template
class Frequency : public ICalculate //for Temperature converter Glycemia?
{
public:
  void Calculate() const override
  {
    std::cout << "55 Hz" << std::endl; //необходимо дописать (данная строка для теста)
  }
};

#endif