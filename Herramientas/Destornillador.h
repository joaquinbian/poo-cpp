#pragma once
#include "Herramienta.h"

class Destornillador : protected Herramienta {
    public:
        Destornillador(float peso, float longitud, char *tipoPunta);
        void setTipoPunta(char *tipoPunta);
        char *getTipoPunta();
        void mostrarInformacion();
    private:
        char *tipoPunta[20];
};