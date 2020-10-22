#pragma once
#include <stdio.h>
#include <iostream>
#include "cPlanta.h"
using namespace std;

enum eColor{violeta, verde, rosa, blanco, amarillo};
enum eAroma{lavanda, menta, albahaca, jazmin };

class cAromatica: public cPlanta{
private:
    eColor colorflores;
    eAroma aroma;
    int intensidad;
    
public:
    cAromatica(eAroma aroma, eColor color);
    ~cAromatica();
    void absorberagua(int cant);
    bool MasIntensa(cAromatica *otra);
    void imprimir();
    string tostring();
    string aroma_tostring(eAroma a);
    string color_tostring();
};
