#pragma once
#include "Taladro.h"

class TaladroPercutor : protected Taladro {
    public:
        TaladroPercutor(int peso, int longitud, int potencia, int golpesPorMinuto);
        int getGolpesPorMinuto();
        void setGolpesPorMinuto(int gpm);
        void mostrarInformacion();

    private:
        int _golpesPorMinuto;

};