#include<iostream>
#include"AutoElectrico.h"
#include"AutoNormal.h"

using namespace std;

int main()
{
    AutoElectrico ae;
    ae.setMarca("Tesla "); 
    ae.setNombre("Model x ");
    ae.setAnioModelo(2015);

    cout << "La marca del auto eléctrico es: " << ae.getMarca() << " Y el nombre y año del auto son: " << ae.getNombre();
    cout << ae.getAnioModelo() << endl;

    AutoNormal an;
    an.setMarca("Ford ");
    an.setNombre("Fiesta ");
    an.setAnioModelo(2020);

    cout << "La marca del auto normal es: " << an.getMarca() <<  " Y el nombre y año del auto son: " << an.getNombre();
    cout << an.getAnioModelo() << endl;
}