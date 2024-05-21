#ifndef TEMPERATURE
#define TEMPERATURE

#include "ICalculate.h" //for Calculate
#include <iostream> // for std::cout

class Temperature : public ICalculate //for Frequency converter Temperature?
{
public:
  float Calculate() const override;
private:
  //константы для формул
  const float B1=-62.0f;
  const float B2=-0.12f;
  const float B3=0.013f;
  const float T0=37.0f;
  float Z;   //разность основной частоты и измеренной (отклонение)
  float z2, z3;
  float T;
};

#endif