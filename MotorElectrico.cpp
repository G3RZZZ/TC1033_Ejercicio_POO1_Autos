#include"MotorElectrico.h"

MotorElectrico::MotorElectrico()
{
    numBaterias = 45;
    potenciaElectrico = 285;
}
MotorElectrico::MotorElectrico(int elNumBaterias, int laPotencia)
{
    numBaterias = elNumBaterias;
    potenciaElectrico = laPotencia;
}


void MotorElectrico::setNumBaterias(int elNumBaterias)
{
    numBaterias = elNumBaterias;
}
int MotorElectrico::getNumBaterias()
{
    return numBaterias;
}

void MotorElectrico::setPotenciaElectrico(int laPotencia)
{
    potenciaElectrico = laPotencia;
}
int MotorElectrico::getPotenciaElectrico()
{
    return potenciaElectrico;
}