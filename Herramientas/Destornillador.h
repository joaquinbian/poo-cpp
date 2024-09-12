#pragma once
#include "Herramienta.h"
#include <iostream>
class Destornillador : protected Herramienta {
    public:
        Destornillador(float peso, float longitud, std::string tipoPunta);
        void setTipoPunta(std::string tipoPunta);
        std::string getTipoPunta();
        void mostrarInformacion();
    private:
        std::string _tipoPunta;
};