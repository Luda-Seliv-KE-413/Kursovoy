//#ifndef BLUETOOTHTASK
//#define BLUETOOTHTASK
//#include "thread.hpp" // for OsWrapper::Thread<>

//#include <iostream> // for std::cout

//class BluetoothTask : public OsWrapper::Thread<256>
//{
//public:
  
// BluetoothTask (IConverter& information, IBluetooth& transmitor) : 
//   mInformation(information), mTransmitor(transmitor) //Агрегация
//  {
    
//  }
 /*BluetoothTask (IBluetooth& transmitor) : mTransmitor(transmitor) //Агрегация
  { 
  }*/
//   void Execute() override
//    {
//      for(;;) //Цикл расчета значений
//      {
//        mInformation.DataLine(); //преобразование полученной информации в строку
//        mTransmitor.DataTransmitor();//передача информации по Bluetooth
//        Sleep(30000ms); //Спящий режим 5 минут
//      }
//    }
  
//private:
//IConverter& mInformation;
//IBluetooth& mTransmitor;
//};

//#endif