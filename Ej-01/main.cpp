#include <iostream>
#include "../Cola/Cola.h"
#include <string>
using namespace std;

int main() {
    std::cout << "Ejercicio 04/01\n" << std::endl;


    Cola<char> a, b;
    int v = 1;

    a.encolar('o');
    a.encolar('l');
    a.encolar('a');
    b.encolar('h');
    b.encolar('o');
    b.encolar('l');
    b.encolar('a');

    while(!a.esVacia() && !b.esVacia() && v == 1){
        if(a.desencolar() != b.desencolar())
            v = -1;
    }

    if(v == 1)
        cout << "Son iguales" << endl;
    else
        cout << "NO son iguales" << endl;



    return 0;
}