#include "Destornillador.h"
#include <iostream>
#include <cstring>

Destornillador::Destornillador(float peso, float longitud, std::string tipoPunta):Herramienta(peso, longitud){
    this->setTipoPunta(tipoPunta);
    strcpy(this->_nombre, "Destornillador");

}


void Destornillador::setTipoPunta(std::string tipoPunta){
    strcpy(this-> _tipoPunta, tipoPunta.c_str());
}



std::string Destornillador::getTipoPunta(){
    return this->_tipoPunta;
}

void Destornillador::mostrarInformacion(){
    Herramienta::mostrarInformacion();
    std::cout << "y el tipo de punta es " << this->_tipoPunta << std::endl;
}