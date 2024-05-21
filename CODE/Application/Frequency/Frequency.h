#ifndef FREQUENCY
#define FREQUENCY

#include "ICalculate.h" //for Calculate
#include <iostream> // for std::cout

//template
class Frequency : public ICalculate //for Temperature converter Glycemia?
{ 
public:
  float Calculate() const override;
private:
  float z;
};

#endif