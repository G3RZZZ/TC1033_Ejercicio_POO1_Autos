#include"AtributosComunes.h"

void AtributosComunes::setMarca(string laMarca)
{
    marca = laMarca;
}
string AtributosComunes::getMarca()
{
    return marca;
}

void AtributosComunes::setNombre(string elNombre)
{
    nombre = elNombre;
}
string AtributosComunes::getNombre()
{
    return nombre;
}

void AtributosComunes::setAnioModelo(int elAnioModelo)
{
    anioModelo = elAnioModelo;
}
int AtributosComunes::getAnioModelo()
{
    return anioModelo;
}

void AtributosComunes::setVelMaxima(int laVelMaxima)
{
    velMaxima = laVelMaxima;
}
int AtributosComunes::getVelMaxima()
{
    return velMaxima;
}