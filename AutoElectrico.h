#include<string>
#include"MotorElectrico.h"
#include"AtributosComunes.h"

using namespace std;

#pragma once
class AutoElectrico : public AtributosComunes
{
protected:
    MotorElectrico motorElectrico;

public:
    AutoElectrico();

    void setMotorElectrico(MotorElectrico elMotorElectrico);
    MotorElectrico getMotorElectrico();
};