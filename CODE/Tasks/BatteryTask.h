//#ifndef BATTERYTASK
//#define BATTERYTASK
//#include "thread.hpp" // for OsWrapper::Thread<>

//#include <iostream> // for std::cout

//class BatteryTask : public OsWrapper::Thread<256>
//{
//public:
  
//  BatteryTask (ICalculate& batteryVol) : mBatteryVoltage(batteryVol) //���������
//  {
//    
//  }
//  void Execute() override
//    {
//      for(;;) //���� ������� ��������
//      {
//        mBatteryVoltage.Calculate();
//        Sleep(30000ms); //������ ����� 5 �����
//      }
//    }
  
//private:
//  ICalculate& mBatteryVoltage;
//};

//#endif