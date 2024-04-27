#ifndef MEASUREGLYCEMIATASK
#define MEASUREGLYCEMIATASK
#include "thread.hpp" // for OsWrapper::Thread<>

#include <iostream> // for std::cout

class MeasureGlycemiaTask : public IThread
{
public:
  
  MeasureGlycemiaTask (ICalculate& glycemia, ICalculate& temperature, ICalculate& frequency) : 
    mGlycemia(glycemia), mTemperature(temperature), mFrequency(frequency) //Агрегация
  {
    
  }
  void Execute() override
    {
      for(;;) //Цикл расчета значений
      {
        mFrequency.Calculate();
        mTemperature.Calculate();
        mGlycemia.Calculate();
        Sleep(30000ms); //Спящий режим 5 минут
      }
    }
  
private:
  ICalculate& mGlycemia;
  ICalculate& mTemperature;
  ICalculate& mFrequency;
};

#endif