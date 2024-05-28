#include "MeasureGlycemiaTask.h"

void MeasureGlycemiaTask :: Execute()
{
  for(;;)
  {
    mFrequency.Calculate();
    mTemperature.Calculate();
    mGlycemia.Calculate();
    Sleep(1000ms);
  }
}