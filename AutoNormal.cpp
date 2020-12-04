#include"AutoNormal.h"

AutoNormal::AutoNormal()
{
    motorNormal = MotorNormal(18, 4);
}

void AutoNormal::setMotorNormal(MotorNormal elMotorNormal)
{
    motorNormal = elMotorNormal;
}
MotorNormal AutoNormal::getMotorNormal()
{
    return motorNormal;
}