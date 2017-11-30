//
// Created by PC on 30/11/2017.
//

#ifndef INC_04_COLA_COLADEPRIORIDAD_H
#define INC_04_COLA_COLADEPRIORIDAD_H

#include "NodoDePrioridad.h"

template <class T>
class ColaDePrioridad {
private:
    NodoDePrioridad<T> *frente;
    NodoDePrioridad<T> *fondo;


public:
    ColaDePrioridad();

    ~ColaDePrioridad();

    void encolar(T dato);

    void encolar(T dato, int prioriodad);

    T desencolar();

    bool esVacia();

    void vaciar();

    T verFrente();
};


/**
 * Constructor de la clase Cola
 * @tparam T
 */
template<class T>
ColaDePrioridad<T>::ColaDePrioridad() {
    fondo = frente = NULL;
}


/**
 * Destructor de la clase Cola, se encarga de liberar la memoria de todos los nodos
 * utilizados en la Cola
 * @tparam T
 */
template<class T>
ColaDePrioridad<T>::~ColaDePrioridad() {
    vaciar();
}


/**
 * Inserta un dato en la Cola
 * @tparam T
 * @param dato  dato a insertar
 */
template<class T>
void ColaDePrioridad<T>::encolar(T dato) {
    NodoDePrioridad<T> *aux = new NodoDePrioridad<T>(dato);

    // Si la cola esta vacia
    if (fondo == NULL && frente == NULL) {
        frente = fondo = aux;
    } else {
        fondo->setNext(aux);
        // fondo->setNext(new Nodo<T>(dato));
        fondo = aux;
    }
}
template <class T>
void ColaDePrioridad<T>::encolar(T dato, int prioridad){
    NodoDePrioridad<T> *aux = new NodoDePrioridad<T>(dato, prioridad);


    // Si la cola esta vacia
    if (fondo == NULL && frente == NULL) {
        frente = fondo = aux;
    } else {
        NodoDePrioridad<T> *tmp = frente;
        NodoDePrioridad<T> *anterior;
        while(tmp->getPrioridad() >= prioridad && tmp->getNext() != NULL){
            anterior = tmp;
            tmp = tmp->getNext();
        }
        if(tmp == frente) {
            aux->setNext(tmp);
            frente = aux;
        }else if(tmp == fondo){
            aux->setNext(tmp->getNext());
            tmp->setNext(aux);
            fondo = aux;
        }else{
            aux->setNext(tmp);
            anterior->setNext(aux);
        }
    }
}


/**
 * Obtener el dato de la Cola
 * @tparam T
 * @return dato almacenado en el nodo
 */
template<class T>
T ColaDePrioridad<T>::desencolar() {

    if (esVacia())
        throw 1;

    // si no es vacia.
    T tmp;
    NodoDePrioridad<T> *aux = frente;

    frente = frente->getNext();
    tmp = aux->getDato();
    delete aux;

    if (frente == NULL)
        fondo = frente;

    return tmp;
}

/**
 * Responde si la Cola se encuentra Vacía
 * @tparam T
 * @return
 */
template<class T>
bool ColaDePrioridad<T>::esVacia() {
    return frente == NULL;
}


/**
 * Vaciamos y liberamos memoria.
 */
template<class T>
void ColaDePrioridad<T>::vaciar() {

    while(frente != NULL)
        desencolar();

}


/**
 * Mostrar el dato del frente
 */
template<class T>
T ColaDePrioridad<T>::verFrente() {
    if(esVacia())
        throw 404;
    return frente->getDato();
}


#endif //INC_04_COLA_COLADEPRIORIDAD_H
