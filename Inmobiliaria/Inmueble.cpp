#include "Inmueble.h"
#include <iostream>
#include <cstring>


Inmueble::Inmueble(int codigo, std::string calle, std::string numero, std::string localidad, std::string nombreDueno, std::string apellidoDueno, std::string DNI, std::string celular, float precioVenta, float precioAlquiler){
    this->setCodigoInmueble(codigo);
    this->setCalle(calle);
    this->setNumero(numero);
    this->setLocalidad(localidad);
    this->setNombreDueno(nombreDueno);
    this->setApellidoDueno(apellidoDueno);
    this->setDNIDueno(DNI);
    this->setCelularDueno(celular);
    this->setPrecioVenta(precioVenta);
    this->setPrecioAlquiler(precioAlquiler);
};


void Inmueble::setCodigoInmueble(int codigo){
    if(codigo>0){
        this->_codigoInmueble = codigo;
    } else {
        std::cout << "No puedes asignar un codigo negativo" << std::endl;
    }
}

void Inmueble::setCalle(std::string calle){
    strcpy(this->_calle, calle.c_str());
};


void Inmueble::setNumero(std::string num){
    strcpy(this->_numero, num.c_str());
};

void Inmueble::setLocalidad(std::string localidad){
    strcpy(this->_localidad, localidad.c_str());
};


void Inmueble::setNombreDueno(std::string nombre){
    strcpy(this->_nombreDueno, nombre.c_str());
};

void Inmueble::setApellidoDueno(std::string apellido){
    strcpy(this->_apellidoDueno, apellido.c_str());
};


void Inmueble::setDNIDueno(std::string dni){
    strcpy(this->_DNIDueno, dni.c_str());
};

void Inmueble::setCelularDueno(std::string cel){
    strcpy(this->_celularDueno, cel.c_str());
};

void Inmueble::setPrecioVenta(float precio){
    if(precio >= 0){
        this->_precioVenta = precio;
    } else {
        std::cout << "El precio minimo debe ser $0"<< std::endl;
    }
};


void Inmueble::setPrecioAlquiler(float precio){
    if(precio >= 0){
        this->_precioAlquiler = precio;
    } else {
        std::cout << "El precio minimo debe ser $0"<< std::endl;
    }
};