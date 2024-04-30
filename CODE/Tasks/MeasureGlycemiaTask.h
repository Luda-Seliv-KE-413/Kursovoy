#ifndef MEASUREGLYCEMIATASK
#define MEASUREGLYCEMIATASK
#include "thread.hpp" // for OsWrapper::Thread<>

#include <iostream> // for std::cout

class MeasureGlycemiaTask : public IThread
{
public:
  
  MeasureGlycemiaTask (ICalculate& glycemia, ICalculate& temperature, ICalculate& frequency) : 
    mGlycemia(glycemia), mTemperature(temperature), mFrequency(frequency) //?????????
  {
    
  }
  void Execute() override
    {
      for(;;) //???? ??????? ????????
      {
        mFrequency.Calculate();
        mTemperature.Calculate();
        mGlycemia.Calculate();
        Sleep(30000ms); //?????? ????? 5 ?????
      }
    }
  
private:
  ICalculate& mGlycemia;
  ICalculate& mTemperature;
  ICalculate& mFrequency;
};

#endif