#ifndef TEMPERATURE
#define TEMPERATURE

#include "ICalculate.h" //for Calculate

//template
class Temperature : public ICalculate //for Frequency converter Temperature?
{
public:
  void Calculate() const override
  {
    std::cout<<"35.7"<<std::endl;
  }
};

#endif