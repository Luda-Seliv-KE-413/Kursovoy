#ifndef FREQUENCY
#define FREQUENCY

#include "ICalculate.h" //for Calculate
#include <iostream> // for std::cout
#include "IDataProvider.h" //for Provide

//template
class Frequency : public ICalculate, public IDataProvider
{ 
public:
  float Provide() override;
  float Calculate() override;
private:
  float z;
};

#endif