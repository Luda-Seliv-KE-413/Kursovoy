#ifndef GLYCEMIA
#define GLYCEMIA

#include "ICalculate.h" //for Calculate
#include <iostream> // for std::cout
#include "IDataProvider.h" //for Provide

//template
class Glycemia : public ICalculate, public IDataProvider
{
public:
  Glycemia(IDataProvider& temperature): mTemperature(temperature){}
  float Provide() override;
  float Calculate() override;
private:
  //��������� ��� ������
  const float XT_0 = 37.0f;
  const float XP_0 = 700.0f; //���������� ���������� (��������� ��������)
  const float al = 0.48f;
  
  const float dt = 300000.0f;
  const float dtau = 600000.0f;

  //������������ ������ (���������� ����� ����������� ��� ������� �������������
  const float Xg0 = 6.0f;
  const float KTP = 2.5f;
  const float KP = 1.4f;
  
  //���������� ����������� �������� ��� ��������� ����������� ���������
  float XT;//����� �������� XT, ��� �������� T �� Temperature.cpp
  float XP, s, dXT, dXP, XT_j, XP_j, WTP, Xg; 
  IDataProvider& mTemperature;
};

#endif