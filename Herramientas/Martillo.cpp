#include "Martillo.h"
#include <iostream>
#include <cstring>

Martillo::Martillo(float peso, float longitud, std::string tipoCabeza):Herramienta(peso, longitud){
    this->setTipoCabeza(tipoCabeza);
    strcpy(this->_nombre, "Martillo");
}

void Martillo::setTipoCabeza(std::string tipoCabeza){
    strcpy(this->_tipoCabeza, tipoCabeza.c_str()); //convertimos el string a char

}

std::string Martillo::getTipoCabeza(){
    return this->_tipoCabeza;
}


void Martillo::mostrarInformacion(){
    this->mostrarInformacion();

    std::cout << "y el tipo de cabeza es " << this->_tipoCabeza << std::endl;
}