#ifndef BLUETOOTHTASK
#define BLUETOOTHTASK
#include "thread.hpp" // for OsWrapper::Thread<>

#include <iostream> // for std::cout
#include "IBluetooth.h" // for IBluetooth

class BluetoothTask : public OsWrapper::Thread<256>
{
public:
  
 BluetoothTask ( IBluetooth& infoUsart) : mInfoUsart(infoUsart) {}
   void Execute() override;   
private:
IBluetooth& mInfoUsart;
};

#endif