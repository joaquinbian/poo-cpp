#pragma once
#include "Inmueble.h"

class Terreno : protected Inmueble {
    public:
    protected:
        float _anchoMts;
        float _largoMts;
        float _superficieConstruibleM2;
};