#include <iostream>
#include "../Cola/Cola.h"
#include <string>
using namespace std;

int main() {
    std::cout << "Ejercicio 04/01\n" << std::endl;

    char *g;


    Cola<char> a, b;
    int v = 1;

    cin.getline(g);
    cout << g << endl;

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