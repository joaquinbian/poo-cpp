#include <iostream>
#include "Fecha.h"


int main(){

    Fecha fecha = Fecha(31,1,2024);
    std::cout << fecha.toString();
    std::cout << std::endl;
    fecha.agregarDia();
    std::cout << fecha.toString();



    std::cout << std::endl;
    return 0;
}