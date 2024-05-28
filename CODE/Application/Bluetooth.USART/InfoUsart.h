#ifndef INFOUSART
#define INFOUSART

#include <iostream> // for std::cout
#include "usart2registers.hpp" // for USART2
#include "IDataProvider.h" //for Provide
#include "IBluetooth.h" // for DataTransmitor
#include <sstream> // for sstream
#include <string>

class InfoUsart : public IBluetooth
{
public:
  InfoUsart(IDataProvider& provglyc): mGlycemia(provglyc){}
  void DataTransmitor();
  
  template <typename T>
  std::string to_string_with_precision(const T a_value, const int n = 2)
  {
    std::ostringstream out;
    out.precision(n);
    out << std::fixed << a_value;
    return std::move(out).str();
  }
private:
  float glycemia; 
  IDataProvider& mGlycemia;
};

#endif