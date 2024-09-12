#pragma once
#include "Herramienta.h"

class Taladro : protected Herramienta {
    public:
        Taladro(float peso, float longitud, float potencia);
        void setPotencia(float potencia);
        float getPotencia();
        void mostrarInformacion();
    private:
        float _potencia;
};