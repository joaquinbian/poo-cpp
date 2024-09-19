#pragma once
#include "Casa.h"

class CasaQuinta : protected Casa {
    public:
        bool getConPileta();
        bool getConQuincho();

        void setConPileta(bool);
        void setConQuincho(bool);
    protected:
        bool _pileta;
        bool _quincho;
};