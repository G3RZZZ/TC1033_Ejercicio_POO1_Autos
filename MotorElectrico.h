

#pragma once
class MotorElectrico
{
protected:
    //Atributos
    int numBaterias; //número de Baterías 
    int potenciaElectrico; // potencia del motor en hp(horsepower)

public:
    //Constructores
    MotorElectrico(); //Contructor por default a usar
    MotorElectrico(int elNumBaterias, int laPotencia);

    void setNumBaterias(int elNumBaterias);
    int getNumBaterias();

    void setPotenciaElectrico(int laPotenciaElectrico);
    int getPotenciaElectrico();
};