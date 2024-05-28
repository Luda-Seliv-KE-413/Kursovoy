#ifndef MEASUREGLYCEMIATASK
#define MEASUREGLYCEMIATASK
#include "thread.hpp" // for OsWrapper::Thread<>
#include "ICalculate.h" //for Calculate

#include <iostream> // for std::cout

class MeasureGlycemiaTask : public OsWrapper::Thread<256>
{
public:
  
  MeasureGlycemiaTask (ICalculate& glycemia, ICalculate& temperature, ICalculate& frequency) : 
    mGlycemia(glycemia), mTemperature(temperature), mFrequency(frequency) //Агрегация
  {
  }
  virtual void Execute() override;
  
private:
  ICalculate& mGlycemia;
  ICalculate& mTemperature;
  ICalculate& mFrequency;
};

#endif