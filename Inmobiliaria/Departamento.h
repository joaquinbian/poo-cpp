#pragma once
#include <string>
#include "Casa.h"

class Departamento : protected Casa {
    public: 
        std::string getPiso();
        std::string getDepartamento();
        bool getConCochera();
        float getPrecioExpensa();
        float getSuperficieBalconM2();

        void setPiso(std::string);
        void setDepartamento(std::string);
        bool setConCochera(bool);
        void setPrecioExpensa(float);
        void setSuperficieBalconM2(float);

    protected:
        char _piso[3];
        char _departamento[3];
        bool _cochera;
        float _precioExpensa;
        float _superficieBalconM2;
};