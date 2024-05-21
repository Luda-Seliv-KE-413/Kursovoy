#include "Temperature.h"
#include <math.h> // для sqrt(), fabs(), pow(), cos(), acos().
#include <iostream> // for std::cout
#define M_PI (3.141592653589793)
#define M_2PI (2.*M_PI)
 
float Temperature::Calculate()
{
  z2=z*z;
  z3=pow(z, 3);
  T=T0+B1*z+B2*z2+B3*z3;
};