#pragma once
#include "Construccion.h"
class ConstruccionHabitable : protected Construccion {

    public:
        float getSuperficieCubiertaM2();
        int getHabitaciones();

        void setSuperficieCubiertaM2();
        void setHabitaciones();
    protected:
        float _superficieCubiertaM2;
        int _habitaciones;
};