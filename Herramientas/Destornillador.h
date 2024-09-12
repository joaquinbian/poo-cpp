#pragma once
#include "Herramienta.h"
#include <iostream>
class Destornillador : protected Herramienta {
    public:
        Destornillador(float peso, float longitud, std::string tipoPunta);
        void setTipoPunta(char *tipoPunta);
        std::string getTipoPunta();
        void mostrarInformacion();
    private:
        std::string tipoPunta[20];
};