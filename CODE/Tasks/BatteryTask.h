#ifndef BATTERYTASK
#define BATTERYTASK
#include "thread.hpp" // for OsWrapper::Thread<>

#include <iostream> // for std::cout

class BatteryTask : public IThread
{
public:
  
  BatteryTask (ICalculate& batteryVol) : mBatteryVoltage(batteryVol) //Агрегация
  {
    
  }
  void Execute() override
    {
      for(;;) //Цикл расчета значений
      {
        mBatteryVoltage.Calculate();
        Sleep(30000ms); //Спящий режим 5 минут
      }
    }
  
private:
  ICalculate& mBatteryVoltage;
};

#endif