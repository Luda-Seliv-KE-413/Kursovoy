#include "rtos.hpp"         // for Rtos
#include "rccregisters.hpp" // for RCC
//#include "usart2registers.hpp" // for USART2
//#include "gpioaregisters.hpp" // for GPIOA


#include "MeasureGlycemiaTask.h" // for MeasureGlycemiaTask
#include "Temperature.h" // for Temperature
#include "Glycemia.h" // for Glycemia
#include "Frequency.h" // for Frequency
//TODO

std::uint32_t SystemCoreClock = 16'000'000U;

extern "C" {
int __low_level_init(void)
{
  //TODO
  return 1;
}
}

Temperature temp;
Glycemia glyc;
Frequency freq;

MeasureGlycemiaTask measureGlycemiaTask (glyc, temp, freq);

int main()
{  
  using namespace OsWrapper;
  Rtos::CreateThread(measureGlycemiaTask, "measureGlycemiaTask");
  
  Rtos::Start();
  
  return 0;
}
