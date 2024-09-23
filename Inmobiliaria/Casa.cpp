#include "Casa.h"
#include "Construccion.h"
#include <iostream>

Casa::Casa(int codigo, std::string calle, std::string numero, std::string localidad, std::string nombreDueno, std::string apellidoDueno, std::string DNI, std::string celular, float precioVenta, float precioAlquiler, int antiguedadConstruccion, float superficieTotalM2, float superficieCubierta, int habitaciones):Construccion(codigo, calle, numero, localidad, nombreDueno, apellidoDueno, DNI, celular, precioVenta, precioAlquiler, antiguedadConstruccion, superficieTotalM2){
    this->setSuperficieCubiertaM2(superficieCubierta);
    this->setHabitaciones(habitaciones);
};


void Casa::setSuperficieCubiertaM2(float superficie){
    if(superficie>0.0){

        this->_superficieCubiertaM2 = superficie;
    } else {
        std::cout << "Superficie no puede ser menor a 0" << std::endl;
    }
};

void Casa::setHabitaciones(int habitaciones){
    if(habitaciones > 0){
        this->_habitaciones = habitaciones;
    } else {
        std::cout << "No puede tener menos de 0 habitaciones " << std::endl;
    }
}