#include "Incrementador.h"
#include <iostream>

Incrementador::Incrementador(int n){
    this->setValorInicial(n);
}

void Incrementador::setValorInicial(int n){
    if(n > 0){
        this->_numActual = n;
    } else {
        this->_numActual = 0;
    }
}

void Incrementador::incrementar(int n){
    if(n < 0){
        std::cout << "No se puede incrementar un valor negativo";
    } else {
        this->_numActual+=n;
        this->_contadorIncrementos+=1;
    }
}

int Incrementador::getValorActual(){
    return this->_numActual;
}

int Incrementador::getContadorIncrementos(){
    return this->_contadorIncrementos;
}