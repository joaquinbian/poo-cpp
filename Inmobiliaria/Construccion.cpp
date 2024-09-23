#include "Inmueble.h"
#include "Construccion.h"
#include <iostream>

Construccion::Construccion(int codigo, std::string calle, std::string numero, std::string localidad, std::string nombreDueno, std::string apellidoDueno, std::string DNI, std::string celular, float precioVenta, float precioAlquiler, int antiguedadConstruccion, float superficieTotalM2):Inmueble(codigo, calle, numero, localidad, nombreDueno, apellidoDueno, DNI, celular, precioVenta, precioAlquiler){
    this->setAntiguedadConstruccion(antiguedadConstruccion);
    this->setSuperficieTotalM2(superficieTotalM2);

};

void Construccion::setAntiguedadConstruccion(int antiguedad){
    if(antiguedad > 0){
        this->_antiguedadConstruccion = antiguedad;
    } else {
        std::cout << "el anio de construccion no puede ser negativo" << std::endl;
    }
};

void Construccion::setSuperficieTotalM2(float superficie){
    if(superficie > 0.0){
        this->_superficieTotalM2 = superficie;
    } else{
        std::cout << "No se puede asignar una superficie menor a 0"<<std::endl;
    }
};
