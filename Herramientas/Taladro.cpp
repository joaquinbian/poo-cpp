#include "Taladro.h"
#include <string>

Taladro::Taladro(float peso, float longitud, float potencia):Herramienta(peso, longitud){
    this->setPotencia(potencia);
    this->_nombre = "Taladro";
}


void Taladro::setPotencia(float potencia){
    if(potencia > 0){
        this->_potencia = potencia;
    }
}

float Taladro::getPotencia(){
    return this->_potencia;
    
}