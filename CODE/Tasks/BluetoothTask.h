//#ifndef BLUETOOTHTASK
//#define BLUETOOTHTASK
//#include "thread.hpp" // for OsWrapper::Thread<>

//#include <iostream> // for std::cout

//class BluetoothTask : public OsWrapper::Thread<256>
//{
//public:
  
// BluetoothTask (IConverter& information, IBluetooth& transmitor) : 
//   mInformation(information), mTransmitor(transmitor) //���������
//  {
    
//  }
 /*BluetoothTask (IBluetooth& transmitor) : mTransmitor(transmitor) //���������
  { 
  }*/
//   void Execute() override
//    {
//      for(;;) //���� ������� ��������
//      {
//        mInformation.DataLine(); //�������������� ���������� ���������� � ������
//        mTransmitor.DataTransmitor();//�������� ���������� �� Bluetooth
//        Sleep(30000ms); //������ ����� 5 �����
//      }
//    }
  
//private:
//IConverter& mInformation;
//IBluetooth& mTransmitor;
//};

//#endif