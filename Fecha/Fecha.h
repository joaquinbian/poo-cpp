#pragma once

class Fecha {
public:
    Fecha(int dia, int mes, int anio);
    Fecha();
    int getDia();
    int getAnio();
    int getMes();

private:
    int _dia;
    int _mes;
    int _anio;
    bool esFechaValida(int dia, int mes, int anio);
    bool esValidoDia(int dia, int mes);
    bool esValidoMes(int mes);
    void setFechaDefault();
};