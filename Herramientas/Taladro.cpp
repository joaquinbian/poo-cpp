#include "Taladro.h"
#include <string>
#include <cstring>
#include <iostream>

Taladro::Taladro(float peso, float longitud, float potencia):Herramienta(peso, longitud){
    this->setPotencia(potencia);
    strcpy(this->_nombre, "Taladro");
}


void Taladro::setPotencia(float potencia){
    if(potencia > 0){
        this->_potencia = potencia;
    }
}

float Taladro::getPotencia(){
    return this->_potencia;
    
}

void Taladro::mostrarInformacion() {
    Herramienta::mostrarInformacion();
    std::cout << "Y la potencia de este " << this->_nombre <<  " es de " << this->_potencia << " watts ";
}