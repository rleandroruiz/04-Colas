//TRAETE LA PILA!!!

#include <iostream>
#include "../Cola/Cola.h"
#include "../Pila/Pila.h"
#include <string>
using namespace std;

int main() {
    std::cout << "Ejercicio 04/02\n" << std::endl;

    bool t = true;
    string frase;
    char c;

    cout<<"Ingrese una frase"<<endl;
    getline(cin,frase);
    cout << frase << endl;

    Cola<char> a;
    Pila<char> b;

    for(int i = 0; i < frase.length(); i++) {
        c = toupper(frase[i]);
        if(c != ' ' && c != '.' && c != ',' && c != ';') {
            a.encolar(c);
            b.push(c);
        }
    }

    while(!a.esVacia() && !b.esVacia() && t)
        if(a.desencolar() != b.pop())
            t = false;

    if(t)
        cout<<"Es palindromo"<<endl;
    else
        cout<<"NO es palindromo"<<endl;
    return 0;
}

