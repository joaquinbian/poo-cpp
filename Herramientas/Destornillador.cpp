#include "Destornillador.h"
#include <iostream>

Destornillador::Destornillador(float peso, float longitud, std::string tipoPunta):Herramienta(peso, longitud){
    this->setTipoPunta(tipoPunta);
    this->_nombre = "Destornillador";
}


void Destornillador::setTipoPunta(std::string tipoPunta){
    this-> _tipoPunta = tipoPunta;
}



std::string Destornillador::getTipoPunta(){
    return this->_tipoPunta;
}