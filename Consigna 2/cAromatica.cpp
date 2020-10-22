#include "cAromatica.h"

cAromatica::cAromatica(eAroma aroma, eColor color): cPlanta(aroma_tostring(aroma)){
    this->aroma=aroma;
    this->colorflores=color;
    intensidad = rand()%50;
    
}

cAromatica::~cAromatica(){
    
}

void cAromatica::absorberagua(int cant){
   
    cPlanta::absorberagua(cant);
    intensidad+=cant;
    
}

bool cAromatica::MasIntensa(cAromatica *otra){
    if(this->intensidad>otra->intensidad) //flor desde la que se llama el metodo mas intensa -> true
        return true;
    else return false;
}

void cAromatica::imprimir(){
    cPlanta::imprimir();
    cout<<tostring()<<endl;
}

string cAromatica::tostring(){
    return "Aroma: "+aroma_tostring(aroma)+ "\nColor: "+color_tostring()+"\nIntensidad: "+to_string(intensidad)+"\n";
    
}

string cAromatica::aroma_tostring(eAroma a){
    switch(a){
        case lavanda:
            return "lavanda";
        case menta:
            return "menta";
        case albahaca:
            return "albahaca";
        case jazmin:
            return "jazmin";
        default:
            return " ";
    }
}

string cAromatica::color_tostring(){
    switch (colorflores) {
        case violeta:
            return "violeta";
        case verde:
            return "verde";
        case rosa:
            return "rosa";
        case blanco:
            return "blanco";
        case amarillo:
            return "amarillo";
        default:
            return " ";
    }
}
