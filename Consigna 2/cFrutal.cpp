#include "cFrutal.h"

cFrutal::cFrutal(TipoFruto tipo):cPlanta(nombredefruto(tipo)){
    fruto = tipo;
    cantfrutos=rand()%30;
    tiempomaduracion = rand()%31;
}

cFrutal::~cFrutal(){
    
}

void cFrutal::absorberagua(int cant){
   
    cPlanta::absorberagua(cant);
    incrementar(cant);
    altura++;
    
}

void cFrutal::incrementar(int cant){
    cantfrutos+=cant;
}

void cFrutal::decrementar(int cant){
    cantfrutos-=cant;
}

void cFrutal::imprimir(){
    cPlanta::imprimir();
    cout<<tostring()<<endl;
}

string cFrutal::tostring(){
    return "Tipo de fruto: "+ fruto_tostring()+"\nCantidad de frutos: "+to_string(cantfrutos)+"\nTiempo de maduracion: "+to_string(tiempomaduracion)+" dias\n";
}

string cFrutal::fruto_tostring(){
    switch(fruto){
        case manzana:
            return "manzana";
        case naranja:
            return "naranja";
        case limon:
            return "limon";
        case palta:
            return "palta";
        case pera:
            return "pera";
        case mango:
            return "mango";
        default:
            return " ";
    }
}
string cFrutal::nombredefruto(TipoFruto tipo){
    switch(tipo){
        case manzana:
            return "Manzano";
        case naranja:
            return "Naranjo";
        case limon:
            return "Limonero";
        case palta:
            return "Palto";
        case pera:
            return "Peral";
        case mango:
            return "Mango";
        default:
            return " ";
    }
}
    

