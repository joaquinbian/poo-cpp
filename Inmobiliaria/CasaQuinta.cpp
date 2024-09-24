#include "CasaQuinta.h"
#include "Casa.h"

CasaQuinta::CasaQuinta(int codigo, std::string calle, std::string numero, std::string localidad, std::string nombreDueno, std::string apellidoDueno, std::string DNI, std::string celular, float precioVenta, float precioAlquiler, int antiguedadConstruccion, float superficieTotalM2, float superficieCubierta, int habitaciones, bool pileta, bool quincho):Casa(codigo, calle, numero, localidad, nombreDueno, apellidoDueno, DNI, celular, precioVenta, precioAlquiler, antiguedadConstruccion, superficieTotalM2, superficieCubierta, habitaciones){
    this->setConQuincho(quincho);
    this->setConPileta(pileta);
};


void CasaQuinta::setConPileta(bool pileta){
    this->_pileta = pileta;
}

void CasaQuinta::setConQuincho(bool quincho){
    this->_quincho = quincho;
}