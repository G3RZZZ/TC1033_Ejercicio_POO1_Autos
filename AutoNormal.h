#include"MotorNormal.h"
#include"AtributosComunes.h"
#include<string>

using namespace std;

#pragma once
class AutoNormal : public AtributosComunes
{
protected:
    MotorNormal motorNormal;

public:
    AutoNormal();

    void setMotorNormal(MotorNormal elMotorNormal);
    MotorNormal getMotorNormal();
};