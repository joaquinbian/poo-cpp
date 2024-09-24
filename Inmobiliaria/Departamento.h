#pragma once
#include <string>
#include "Casa.h"

class Departamento : protected Casa {
    public: 
        Departamento(int codigo, std::string calle, std::string numero, std::string localidad, std::string nombreDueno, std::string apellidoDueno, std::string DNI, std::string celular, float precioVenta, float precioAlquiler, int antiguedadConstruccion, float superficieTotalM2, float superficieCubierta, int habitaciones, std::string piso, std::string departamento, bool cochera, float precioExpensa, float superficieBalconM2);
        std::string getPiso();
        std::string getDepartamento();
        bool getConCochera();
        float getPrecioExpensa();
        float getSuperficieBalconM2();

        void setPiso(std::string);
        void setDepartamento(std::string);
        void setConCochera(bool);
        void setPrecioExpensa(float);
        void setSuperficieBalconM2(float);

    protected:
        char _piso[3];
        char _departamento[3];
        bool _cochera;
        float _precioExpensa;
        float _superficieBalconM2;
};