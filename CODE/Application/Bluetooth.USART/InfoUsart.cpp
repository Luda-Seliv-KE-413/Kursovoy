#include "InfoUsart.h"

void InfoUsart::DataTransmitor()
{
  glycemia = mGlycemia.Provide();
  
  std::size_t i = 0;
  constexpr auto glycemiaText = "Glycemia: ";
  
  std::string message{ (glycemiaText) + to_string_with_precision(glycemia)};
  USART2::DR::Write(message[i++]); //������������ ������
  
  message = { (glycemiaText) + to_string_with_precision(glycemia)};
   while(!USART2::SR::TXE::DataRegisterEmpty::IsSet())//�������� ���� �� �����
  {
  }
  USART2::DR::Write(message[i++]);

  if(i >= message.length())
  {
  i = 0;
  }
};