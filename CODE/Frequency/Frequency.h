#ifndef FREQUENCY
#define FREQUENCY

#include "ICalculate.h" //for Calculate
#include <iostream> // for std::cout

class Frequency : public ICalculate //for Temperature converter Glycemia?
{
public:
  void Calculate() const override
  {
    std::cout << "55 Hz" << std::endl; //���������� �������� (������ ������ ��� �����)
  }
};

#endif