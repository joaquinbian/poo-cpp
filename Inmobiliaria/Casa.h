#pragma once
#include "Construccion.h"
class Casa : protected Construccion {

    public:
        float getSuperficieCubiertaM2();
        int getHabitaciones();

        void setSuperficieCubiertaM2(float);
        void setHabitaciones(int);
    protected:
        float _superficieCubiertaM2;
        int _habitaciones;
};
