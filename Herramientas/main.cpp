#include <iostream>
#include "Martillo.h"
#include "Destornillador.h"
#include "Taladro.h"
int main(){

    Martillo martillo = Martillo(4,20, "Plana");
    Destornillador destornillador = Destornillador(1, 12, "Estrella");
    Taladro taladro = Taladro(4, 30, 200);
    
    martillo.mostrarInformacion();
    destornillador.mostrarInformacion();
    taladro.mostrarInformacion();
    return 0;
}