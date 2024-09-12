#pragma once
#include "Herramienta.h"

class Martillo : protected Herramienta {
    public:
        Martillo(float peso, float longitud, float tipoCabeza);
        void setTipoCabeza(float tipoCabeza);
        char *getTipoCabeza();
        void mostrarInformacion();
    private:
        char *tipoCabeza[20];
};