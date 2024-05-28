#include "BluetoothTask.h"

void BluetoothTask :: Execute()
{
  for(;;) 
  {
    mInfoUsart.DataTransmitor();
    Sleep(30000ms); 
  }
}