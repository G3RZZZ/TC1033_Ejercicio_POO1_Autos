#include"AutoElectrico.h"

AutoElectrico::AutoElectrico()
{
    motorElectrico = MotorElectrico(45, 285);
}

void AutoElectrico::setMotorElectrico(MotorElectrico elMotorElectrico)
{
    motorElectrico = elMotorElectrico;
}
MotorElectrico AutoElectrico::getMotorElectrico()
{
    return motorElectrico;
}