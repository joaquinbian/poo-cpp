#pragma once
#include "Herramienta.h"
#include <iostream>
class Martillo : protected Herramienta {
    public:
        Martillo(float peso, float longitud, std::string tipoCabeza);
        void setTipoCabeza(std::string tipoCabeza);
        std::string getTipoCabeza();
        void mostrarInformacion();
    private:
        std::string tipoCabeza;
};