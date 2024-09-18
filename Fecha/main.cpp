#include <iostream>
#include "Fecha.h"



//REPASAR CLASE DEL 29-08 PARA VER ALGUNAS COSAS
int main(){

    Fecha fecha = Fecha(31,12,2024);
    std::cout << fecha.toString();
    std::cout << std::endl;
    fecha.agregarDias(-1);
    std::cout << fecha.toString();
    std::cout << std::endl;
    
    fecha.agregarDias(2);
    
    std::cout << fecha.toString();
    std::cout << std::endl;
    


    std::cout << std::endl;
    return 0;
}