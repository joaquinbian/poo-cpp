#pragma once
#include "Inmueble.h"
class Construccion : protected Inmueble {
    public:
        Construccion(int codigo, std::string calle, std::string numero, std::string localidad, std::string nombreDueno, std::string apellidoDueno, std::string DNI, std::string celular, float precioVenta, float precioAlquiler, int antiguedadConstruccion, float superficieTotalM2);
        int getAntiguedadConstruccion();
        float getSuperficieTotalM2();

        void setAntiguedadConstruccion(int);
        void setSuperficieTotalM2(float);

    protected:
        int _antiguedadConstruccion;
        float _superficieTotalM2;
};