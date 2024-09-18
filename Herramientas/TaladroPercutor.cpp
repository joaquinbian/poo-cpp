#include "TaladroPercutor.h"
#include <iostream>
#include <cstring>

TaladroPercutor::TaladroPercutor(int peso, int longitud, int potencia, int golpesPorMinuto):Taladro(peso, longitud, potencia){
    this->setGolpesPorMinuto(golpesPorMinuto);
    strcpy(this->_nombre, "Taladro Percutor");
}


void TaladroPercutor::setGolpesPorMinuto(int gpm){
    if(gpm > 0){
        this->_golpesPorMinuto = gpm;
    } else {
        std::cout << "Golpes por minuto no puede ser un valor menor a 0";
    }
}

int TaladroPercutor::getGolpesPorMinuto(){
    return this->_golpesPorMinuto;
}


void TaladroPercutor::mostrarInformacion(){
    Taladro::mostrarInformacion();
    std::cout << "y puede dar " << this->getGolpesPorMinuto() << " golpes por minuto " << std::endl;
}
