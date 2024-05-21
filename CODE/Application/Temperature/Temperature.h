#ifndef TEMPERATURE
#define TEMPERATURE

#include "ICalculate.h" //for Calculate
#include <iostream> // for std::cout
#include "IDataProvider.h" //for Provide

class Temperature : public ICalculate, public IDataProvider
{
public:
  Temperature(IDataProvider& frequency): mFrequency(frequency){}
  float Provide() override;
  float Calculate() override;
private:
  //константы для формул
  const float B1=-62.0f;
  const float B2=-0.12f;
  const float B3=0.013f;
  const float T0=37.0f;

  float T;
  IDataProvider& mFrequency;
};

#endif