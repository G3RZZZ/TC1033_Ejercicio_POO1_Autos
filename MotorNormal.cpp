#include"MotorNormal.h"

MotorNormal::MotorNormal()
{
    potencia = (118);
    numCilindros = (4);
}
MotorNormal::MotorNormal(int laPotencia, int elNumCilindros)
{
    potencia = laPotencia;
    numCilindros = elNumCilindros;
}

void MotorNormal::setPotencia(int laPotencia)
{
    potencia = laPotencia;
}
int MotorNormal::getPotencia()
{
    return potencia;
}
    
void MotorNormal::setNumCilindros(int elNumCilindros)
{
    numCilindros = elNumCilindros;
}
int MotorNormal::getNumCilindros()
{
    return numCilindros;
}
