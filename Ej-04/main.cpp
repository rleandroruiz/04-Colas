#include <iostream>
#include "../Ej-03/ColaDePrioridad.h"

struct cliente{
    int cant;
    float monto;
    bool embarazada;
};

int main() {
    std::cout << "Ejercicio 04/04\n" << std::endl;
    int c;
    float m;
    int e;
    ColaDePrioridad<cliente> miCola;
    cliente miCliente;

    do{
        std::cout<<"Introduzca la cantidad de prodcutos comprados  o 0 para salir"<<std::endl;
        std::cin>>c;
        if(c > 0) {
            std::cout << "Introduzca el monto gastado" << std::endl;
            std::cin >> m;
            std::cout << "Introduzca 1 si la clienta estaba embaraza, 0 en caso contrario" << std::endl;
            std::cin >> e;
            miCliente = {c, m, static_cast<bool>(e)};
            miCola.encolar(miCliente, e);
        }
    }while(c > 0);

    c = 0;
    m = 0;
    e = 0;


    while(!miCola.esVacia()){
        miCliente = miCola.desencolar();
        c += miCliente.cant;
        m += miCliente.monto;
        e += miCliente.embarazada;
    }

    std::cout<<"La cantidad total de productos comprados es "<<c<<std::endl;
    std::cout<<"El monto total gastado es "<<m<<std::endl;
    std::cout<<"La cantidad de embarazadas es "<<e<<std::endl;


    return 0;
}