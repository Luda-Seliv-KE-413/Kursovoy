#ifndef GLYCEMIA
#define GLYCEMIA

#include "ICalculate.h" //for Calculate
#include <iostream> // for std::cout

//template
class Glycemia : public ICalculate //for Temperature converter Glycemia?
{
public:
  void Calculate() const override
  {
    std::cout << "5.6 Mol/L" << std::endl; //ѕреобразовать формулы под расчет из температуры в гликемии (строка дл€ теста)
  }
};

#endif