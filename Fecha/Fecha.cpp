#include "Fecha.h"


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


int Fecha::getDia(){
    return this->_dia;
}

int Fecha::getMes(){
    return this->_mes;
}

int Fecha::getAnio(){
    return this->_anio;
}

bool Fecha::esFechaValida(int dia, int mes, int anio){
    return this->esValidoDia(dia, mes) && this->esValidoMes(mes);
}

bool Fecha::esValidoDia(int dia, int mes){
    int meses[12] = {31,28,31,30,31,30,31,31,30,31,30,31};

    if(meses[mes - 1] < dia){
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

void Fecha::setFechaDefault(){
    this->_dia = 1;
    this->_mes = 1;
    this->_anio = 2023;
}