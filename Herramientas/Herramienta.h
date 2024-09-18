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
        char _nombre[50];
        float _peso;
        float _longitud;
        

};
