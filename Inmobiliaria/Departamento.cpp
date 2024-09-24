#include "Departamento.h"
#include "Casa.h"
#include <iostream>
#include <cstring>
Departamento::Departamento(int codigo, std::string calle, std::string numero, std::string localidad, std::string nombreDueno, std::string apellidoDueno, std::string DNI, std::string celular, float precioVenta, float precioAlquiler, int antiguedadConstruccion, float superficieTotalM2, float superficieCubiertaM2, int habitaciones, std::string piso, std::string departamento, bool cochera, float precioExpensa, float superficieBalconM2):Casa(codigo, calle, numero, localidad, nombreDueno, apellidoDueno, DNI, celular, precioVenta, precioAlquiler, antiguedadConstruccion, superficieTotalM2, superficieCubiertaM2, habitaciones){
    this->setPiso(piso);
    this->setConCochera(cochera);
    this->setPrecioExpensa(precioExpensa);
    this->setSuperficieBalconM2(superficieBalconM2);
}


void Departamento::setPiso(std::string piso){
    strcpy(this->_piso, piso.c_str());
};

void Departamento::setDepartamento(std::string dep){
    strcpy(this->_departamento, dep.c_str());
};


void Departamento::setConCochera(bool cochera){
    this->_cochera = cochera;
};

void Departamento::setPrecioExpensa(float precio){
    if(precio < 0){
        this->_precioExpensa = precio;
    } else {
        std::cout << "el precio no puede ser menor a $0 " << std::endl;
    }
};


void Departamento::setSuperficieBalconM2(float superficie){
    if(superficie < 0){
        this->_superficieBalconM2 = superficie;
    } else {
        std::cout << "la superficie no puede ser menora 0" << std::endl;
    }
};