#include "Martillo.h"
#include "Destornillador.h"
#include "Taladro.h"
#include "TaladroPercutor.h"

int main(){

    Martillo martillo = Martillo(4,20, "Plana");
    Destornillador destornillador = Destornillador(1, 12, "Estrella");
    Taladro taladro = Taladro(4, 30, 200);
    TaladroPercutor tp = TaladroPercutor(9, 40, 220, 100);
    martillo.mostrarInformacion();
    destornillador.mostrarInformacion();
    taladro.mostrarInformacion();
    std::cout << std::endl;
    tp.mostrarInformacion();
    return 0;
}