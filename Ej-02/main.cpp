//TRAETE LA PILA!!!

#include <iostream>
#include "../Cola/Cola.h"
#include <string>
using namespace std;

int main() {
    std::cout << "Ejercicio 04/02\n" << std::endl;


    int v = 0;
    string frase;
    cin >> frase;
    cout << frase << endl;

    Cola<char> a;
    Pila<char> b;

    a.encolar();
    //?????
    b.push();

    for(int i = 0; i <= frase.length(); i++ ){
        if(a.desencolar() == b.pop())
            v = 1;
    }

    return 0;
}

