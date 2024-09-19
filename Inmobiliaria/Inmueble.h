#pragma once
#include <string>
class Inmueble {
    public:
        int getCodigoInmueble();
        float getPrecioVenta();
        float getPrecioAlquiler();
        std::string getCalle();
        std::string getNumero();
        std::string getLocalidad();
        std::string getApellidoDueno();
        std::string getNombreDueno();
        std::string getDNIDueno();
        std::string getCelularDueno();

        void setCodigoInmueble(int);
        void setPrecioVenta(float);
        void setPrecioAlquiler(float);
        void setCalle(std::string);
        void setNumero(std::string);
        void setLocalidad(std::string);
        void setApellidoDueno(std::string);
        void setNombreDueno(std::string);
        void setDNIDueno(std::string);
        void setCelularDueno(std::string);

    protected:
        int _codigoInmueble;
        char _calle[50];
        char _numero[6];
        char _localidad[50];
        char _apellidoDueno[50];
        char _nombreDueno[50];
        char _DNIDueno[12];
        char _celularDueno[15];
        float _precioVenta;
        float _precioAlquiler;

};