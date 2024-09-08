#include "Fecha.h"
#include <iostream>

//constructores
Fecha::Fecha(){
    this->setFechaDefault();
}

Fecha::Fecha(int dia, int mes, int anio){
    if(this->esFechaValida(dia, mes, anio)){
        this->_dia = dia;
        this->_mes = mes;
        this->_anio = anio;
    } else {
        this->setFechaDefault();
    }
}

//getters
int Fecha::getDia(){
    return this->_dia;
}

int Fecha::getMes(){
    return this->_mes;
}

int Fecha::getAnio(){
    return this->_anio;
}

//setters
void Fecha::setDia(int dia){
    if(this->esValidoDia(dia, this->_mes)){
        this->_dia = dia;
    } else {
        this->_dia = 1;
        std::cout << "El dia no es valido";
    }
}

void Fecha::setMes(int mes){
    if(this->esValidoMes(mes)){
        this->_mes = mes;
    } else {
        this->_mes = 1;
        std::cout << "El mes no es valido";
    }
}

void Fecha::setAnio(int anio){
    if(anio > 0){
        this->_anio = anio;
    } else {
        this->_anio = anio;
        std::cout << "El anio no es valido";
    }
}

void Fecha::setFechaDefault(){
    this->_dia = 1;
    this->_mes = 1;
    this->_anio = 2023;
}



//metodos
bool Fecha::esFechaValida(int dia, int mes, int anio){
    return this->esValidoDia(dia, mes) && this->esValidoMes(mes);
}

bool Fecha::esValidoDia(int dia, int mes){
    if(_meses[mes - 1] < dia){
        return false;
    } else if(dia < 1 || dia > 31){
        return false;
    }

    return true;
}

bool Fecha::esValidoMes(int mes){
    if(mes < 1 || mes > 12 ){
        return false;
    } 

    return true;
}


void Fecha::agregarDia(){
    if(this->_dia == this->_meses[this->_mes - 1]){
        if(this->_mes == 12){
            this->setMes(1);
            this->setAnio(this->_anio + 1);
        } else {
            this->setMes(this->_mes + 1);
        }
        this->setDia(1);
    } else {
        this->setDia(this->_dia + 1);
    }
}

void Fecha::restarDia(){
    if(this->_dia == 1){
        if(this->_mes == 1){
            this->setAnio(this->_anio - 1);
            this->setMes(12);
        }else {
            this->setMes(this->_mes - 1);
        }
        this->setDia(this->_meses[this->_mes]);
    } else {
        this->setDia(this->_dia - 1);
    }
}