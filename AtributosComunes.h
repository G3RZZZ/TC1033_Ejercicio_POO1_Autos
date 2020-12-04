#include<string>
using namespace std;

#pragma once
class AtributosComunes
{
protected:
    string marca;
    string nombre;
    int anioModelo;
    int velMaxima;

public:
    void setMarca(string laMarca);
    string getMarca();

    void setNombre(string elNombre);
    string getNombre();

    void setAnioModelo(int elAnioModelo);
    int getAnioModelo();

    void setVelMaxima(int laVelMaxima);
    int getVelMaxima();
};