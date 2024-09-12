#pragma once
#include <iostream>
class Herramienta {
    public:
        Herramienta(float peso, float longitud);
        void setPeso(float peso);
        void setLongitud(float longitud);
        float getPeso();
        float getLongitud();
        void mostrarInformacion();

    private:
        std::string _nombre;
        float _peso;
        float _longitud;
        

};
