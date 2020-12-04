

#pragma once
class MotorNormal
{
protected:
    //Atributos
    int potencia;
    int numCilindros;

public:
    //Constructores
    MotorNormal();  //Constructor por default
    MotorNormal(int laPotencia, int elNumCilindros);

    void setPotencia(int laPotencia);
    int getPotencia();
    
    void setNumCilindros(int elNumCilindros);
    int getNumCilindros();

};