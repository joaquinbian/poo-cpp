#pragma once

class Herramienta {
    public:
        Herramienta(float peso, float longitud);
        void setPeso(float peso);
        void setLongitud(float longitud);
        float getPeso();
        float getLongitud();
        void mostrarInformacion();

    protected:
        char *nombre[20];
        float peso;
        float longitud;
        

};