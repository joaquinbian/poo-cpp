#pragma once

class Incrementador{
public:
     Incrementador(int initialValue);
     void incrementar(int n);
     void setValorInicial(int n);
     int getValorActual();
     int getContadorIncrementos();
private:
    int _contadorIncrementos;
    int _numActual;

        
};