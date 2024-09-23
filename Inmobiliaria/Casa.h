#pragma once
#include "Construccion.h"
class Casa : protected Construccion {

    public:
        Casa(int codigo, std::string calle, std::string numero, std::string localidad, std::string nombreDueno, std::string apellidoDueno, std::string DNI, std::string celular, float precioVenta, float precioAlquiler, int antiguedadConstruccion, float superficieTotalM2, float superficieCubierta, int habitaciones);
        float getSuperficieCubiertaM2();
        int getHabitaciones();

        void setSuperficieCubiertaM2(float);
        void setHabitaciones(int);
    protected:
        float _superficieCubiertaM2;
        int _habitaciones;
};
