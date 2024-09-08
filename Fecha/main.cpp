#include <iostream>
#include "Fecha.h"


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