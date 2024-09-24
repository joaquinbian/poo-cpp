#pragma once
#include "Casa.h"

class CasaQuinta : protected Casa {
    public:
        CasaQuinta(int codigo, std::string calle, std::string numero, std::string localidad, std::string nombreDueno, std::string apellidoDueno, std::string DNI, std::string celular, float precioVenta, float precioAlquiler, int antiguedadConstruccion, float superficieTotalM2, float superficieCubierta, int habitaciones, bool pileta, bool quincho);
        bool getConPileta();
        bool getConQuincho();

        void setConPileta(bool);
        void setConQuincho(bool);
    protected:
        bool _pileta;
        bool _quincho;
};