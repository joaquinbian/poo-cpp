#include <iostream>
#include "Incrementador.h"
using namespace std;

/*
Hacer un programa que permita representar un Incrementador. Un incrementador es un número entero que comienza con un valor inicial 
y pueda incrementarse a partir de un valor de incremento. También deberá llevar la cuenta de la cantidad de veces que incrementó.

Por ejemplo, si nuestro incrementador comienza en 0 y el valor de incremento es de 50. En cada incremento, aumentará de 50 en 50. Ejemplo:
0, 50, 100, 150, etc.


Restricciones:
El valor del incrementador no puede nunca disminuir.
La cantidad de veces que se incrementó siempre debe aumentar de uno en uno. Tampoco puede disminuir.
Siempre que el incrementador aumente debe hacerlo por la misma cantidad definida en el valor de incremento.


*/

int main(){

    cout << "~~~~~~~~ INCREMENTADOR ~~~~~~~~" << endl;
    Incrementador incrementador = Incrementador(0);

    incrementador.incrementar(5);
    incrementador.incrementar(5);

    cout << "El numero actual es de " << incrementador.getValorActual() << endl;
    cout << "La cantidad de veces que se incremento es de " << incrementador.getContadorIncrementos() << endl;

    return 0;
}