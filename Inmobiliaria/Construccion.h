#pragma once
#include "Inmueble.h"
class Construccion : protected Inmueble {
    public:
        int getAntiguedadConstruccion();
        float getSuperficieTotalM2();

        void setAntiguedadConstruccion(int);
        void setSuperficieTotalM2(float);

    protected:
        int _antiguedadConstruccion;
        float _superficieTotalM2;
};