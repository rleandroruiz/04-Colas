#include <iostream>
#include "ColaDePrioridad.h"

int main() {
    std::cout << "Ejercicio 04/03\n" << std::endl;
    ColaDePrioridad<int> miCola;

    miCola.encolar(1);
    miCola.encolar(2);
    miCola.encolar(3);
    miCola.encolar(4);
    miCola.encolar(99, 0);
    miCola.encolar(5, 1);
    miCola.encolar(6, 1);
    miCola.encolar(7, 1);

    while(!miCola.esVacia())
        std::cout<<miCola.desencolar();

    return 0;
}