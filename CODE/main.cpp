#include "rtos.hpp"         // for Rtos
#include "rccregisters.hpp" // for RCC
#include "usart2registers.hpp" // for USART2
#include "gpioaregisters.hpp" // for GPIOA

#include "MeasureGlycemiaTask.h" // for MeasureGlycemiaTask
#include "Temperature.h" // for Temperature
#include "Glycemia.h" // for Glycemia
#include "Frequency.h" // for Frequency
#include "BluetoothTask.h" // for BluetoothTask
#include "InfoUsart.h" // for InfoUsart

std::uint32_t SystemCoreClock = 16'000'000U;

extern "C" {
int __low_level_init(void)
{
  //Usart
  RCC::APB1ENR::USART2EN::Enable::Set(); // тактирование
  GPIOA::MODER::MODER2::Alternate::Set(); // конфигурация портов, альтернативная функция
  GPIOA::MODER::MODER3::Alternate::Set(); // конфигурация портов, альтернативная функция
  GPIOA::OTYPER::OT2::OutputPushPull::Set();
  GPIOA::OTYPER::OT3::OutputPushPull::Set();
  GPIOA::PUPDR::PUPDR2::PullUp::Set(); // подтяжка к 1  
  GPIOA::PUPDR::PUPDR3::PullUp::Set(); // подтяжка к 1 
  
  GPIOA::AFRL::AFRL2::Af7::Set();
  GPIOA::AFRL::AFRL3::Af7::Set();
  
  USART2::BRR::DIV_Mantissa::Set(104);
  USART2::BRR::DIV_Fraction::Value2::Set();
  USART2::CR2::STOP::Value0::Set();
    
  USART2::CR1::OVER8::OversamplingBy16::Set(); // Режим дискретизации? 1/16
  USART2::CR1::M::Data8bits::Set();
  
  USART2::CR1::TE::Enable::Set();
  USART2::CR1::UE::Enable::Set();
  
  return 1;
}
}

Frequency freq;
Temperature temp (freq);
Glycemia glyc (temp);
InfoUsart usart(glyc);

MeasureGlycemiaTask measureGlycemiaTask(glyc, temp, freq);
BluetoothTask bluetoothTask(usart);


int main()
{  
  using namespace OsWrapper;
  Rtos::CreateThread(measureGlycemiaTask, "measureGlycemiaTask");
  Rtos::CreateThread(bluetoothTask, "bluetoothTask");
  Rtos::Start();
  
  return 0;
}
