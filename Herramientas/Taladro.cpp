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
    this->mostrarInformacion();
    std::cout << "Y la potencia de este Taladro es " << this->_potencia << " watts " << std::endl;
}