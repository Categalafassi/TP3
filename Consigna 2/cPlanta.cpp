#include "cPlanta.h"

int cPlanta::codigoanterior=0;

cPlanta::cPlanta(string nombre){
  
    this->nombre=nombre;
    codigo=codigoanterior++;
    altura=rand()%100+20;
    tipo = tiporandom();
    AguaPorDia=rand()%50;
    estadoH2O=rand()%50;
}

cPlanta::~cPlanta(){
    
}

void cPlanta::absorberagua(int cant){
    //que no se pase de aguapordia
    int cantnecesaria = AguaPorDia-estadoH2O;
    if(cant<=cantnecesaria)
        estadoH2O+=cant;
    else if (cant>cantnecesaria)
        estadoH2O+=cantnecesaria; //sobra agua
}

void cPlanta::imprimir(){
    cout<<tostring()<<endl;
}

string cPlanta::tostring(){
    return "-- NOMBRE: "+nombre+"--\nCodigo: "+to_string(codigo)+"\nAltura: "+to_string(altura)+"m\nTipo: "+tipo_tostring()+"\nAgua por dia: "+to_string(AguaPorDia)+"L";
}

string cPlanta::tipo_tostring(){
   
    switch (tipo) {
        case ESTACIONARIA:
            return "estacionaria";
        case ANUAL:
            return "anual";
        default:
            return " ";
    }
}

eTipo cPlanta::tiporandom(){
    switch (rand()%1) {
        case 0:
            return ESTACIONARIA;
        case 1:
            return ANUAL;
        default:
            return ESTACIONARIA;
    }
}
