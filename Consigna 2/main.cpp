#include <stdio.h>
#include <iostream>
#include <stdbool.h>
#include "cAromatica.h"
#include "cFrutal.h"
using namespace std;

int main(){
    cFrutal* Manzano = new cFrutal(manzana);
    cFrutal* Limonero = new cFrutal(limon);
    cFrutal* Naranjo = new cFrutal(naranja);
    cFrutal* Mango = new cFrutal(mango);
    cAromatica* Lavanda = new cAromatica(lavanda, violeta);
    cAromatica* Menta = new cAromatica(menta, verde);
    cAromatica* Albahaca = new cAromatica(albahaca, verde);
    cAromatica* Jazmin = new cAromatica(jazmin, blanco);
    
    
    cPlanta* invernadero[] = {Manzano, Limonero, Naranjo, Mango, Lavanda, Menta, Albahaca, Jazmin};
    
    for(int i=0; i<8; i++){
        invernadero[i]->absorberagua(rand()%50);
        invernadero[i]->imprimir();
    }
    
    Limonero->decrementar(10);
    Mango->incrementar(5);

    
    if(Menta->MasIntensa(Albahaca))
        cout<<Menta->getnombre()<<" es mas intensa que "<<Albahaca->getnombre()<<endl;
    else
        cout<<Albahaca->getnombre()<<" es mas intensa que "<<Menta->getnombre()<<endl;
    
    
    if(Jazmin->MasIntensa(Lavanda))
        cout<<Jazmin->getnombre()<<" es mas intensa que "<<Lavanda->getnombre()<<endl;
    else
        cout<<Lavanda->getnombre()<<" es mas intensa que "<<Jazmin->getnombre()<<endl;

    return 0;
}
