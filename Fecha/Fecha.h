#pragma once

class Fecha {
public:
    Fecha(int dia, int mes, int anio);
    Fecha();
    int getDia();
    int getAnio();
    int getMes();
    void setDia(int dia);
    void setMes(int mes);
    void setAnio(int anio);

private:
    int _dia;
    int _mes;
    int _anio;
    int _meses[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    bool esFechaValida(int dia, int mes, int anio);
    bool esValidoDia(int dia, int mes);
    bool esValidoMes(int mes);
    void setFechaDefault();
    void agregarDia();
    void restarDia();
};