#ifndef GLYCEMIA
#define GLYCEMIA

#include "ICalculate.h" //for Calculate

//template
class Glycemia : public ICalculate //for Temperature converter Glycemia?
{
public:
  void Calculate() const override
  {
    std::cout<<"5.6 Mol/L"<<std::endl;
  }
};

#endif