#include "Martillo.h"
#include <iostream>

Martillo::Martillo(float peso, float longitud, std::string tipoCabeza):Herramienta(peso, longitud){
    this->setTipoCabeza(tipoCabeza);
    this->_nombre = "Martillo";
}

void Martillo::setTipoCabeza(std::string tipoCabeza){
    this->_tipoCabeza = tipoCabeza;
}

std::string Martillo::getTipoCabeza(){
    return this->_tipoCabeza;
}