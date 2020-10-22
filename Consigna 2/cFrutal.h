#pragma once
#include <stdio.h>
#include <iostream>
#include "cPlanta.h"
using namespace std;

enum TipoFruto{manzana, naranja, limon, palta, pera, mango};

class cFrutal: public cPlanta{
private:
    TipoFruto fruto;
    int cantfrutos;
    int tiempomaduracion; //dias
    
public:
    cFrutal(TipoFruto tipo);
    ~cFrutal();
    void absorberagua(int cant);
    void incrementar(int cant);
    void decrementar(int cant);
    void imprimir();
    string tostring();
    string fruto_tostring();
    string nombredefruto(TipoFruto tipo);
};
