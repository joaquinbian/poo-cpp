#pragma once
#include "Construccion.h"

class Local : protected Construccion {
    public:
        float getSuperficieEstacionamientoM2();
        bool getZonaComercial();

        void SetSuperficieEstacionamientoM2(float);
        void setZonaComercial(bool);
    private:
        float _superficieEstacionamientoM2;
        bool _zonaComercial;

};
