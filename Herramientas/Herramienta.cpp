#include "Herramienta.h"

Herramienta::Herramienta(float peso, float longitud){
    this->setPeso(peso);
    this->setLongitud(longitud);
    this->nombre = "";
    
}


void Herramienta::setPeso(float peso){
    if(peso > 0){
        this->peso = peso;
    }
}

void Herramienta::setLongitud(float longitud){
    if(longitud > 0){
        this->longitud = longitud;
    }
}

float Herramienta::getPeso(){
    return this->peso;
}

float Herramienta::getLongitud(){
    return this->longitud;
}

void Herramienta::mostrarInformacion(){

}