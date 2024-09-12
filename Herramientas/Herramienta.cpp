#include "Herramienta.h"

Herramienta::Herramienta(float peso, float longitud){
    this->setPeso(peso);
    this->setLongitud(longitud);
    this->_nombre = "";
    
}


void Herramienta::setPeso(float peso){
    if(peso > 0){
        this->_peso = peso;
    }
}

void Herramienta::setLongitud(float longitud){
    if(longitud > 0){
        this->_longitud = longitud;
    }
}

float Herramienta::getPeso(){
    return this->_peso;
}

float Herramienta::getLongitud(){
    return this->_longitud;
}

void Herramienta::mostrarInformacion(){
    std::cout << "soy un " << this->_nombre << " de " << this->_peso << "kg y " << this->_longitud << "cm" << std::endl;
}