#pragma once
#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

enum eTipo{ESTACIONARIA, ANUAL};

class cPlanta{
protected:
    string nombre;
    int codigo;
    static int codigoanterior;
    int altura;
    eTipo tipo;
    int estadoH2O;
    int AguaPorDia; //cant maxima por dia
    
public:
    cPlanta(string nombre);
    virtual ~cPlanta();
    virtual void absorberagua(int cant)=0;
    virtual void imprimir();
    string tostring();
    string tipo_tostring();
    string getnombre(){return nombre;}
    eTipo tiporandom();
};

