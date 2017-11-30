//
// Created by PC on 30/11/2017.
//

#ifndef INC_04_COLA_NODODEPRIORIDAD_H
#define INC_04_COLA_NODODEPRIORIDAD_H
#include <iostream>

template<class T>
class NodoDePrioridad {


private:
    T dato;
    NodoDePrioridad<T> *next;
    int prioridad;

public:
    NodoDePrioridad(T dato, NodoDePrioridad<T> *next, int prioridad) {
        this->dato = dato;
        this->next = next;
        this->prioridad = prioridad;
    }

    NodoDePrioridad(T dato, NodoDePrioridad<T> *n){
        this->dato = dato;
        this->next = next;
        prioridad = 0;
    }

    NodoDePrioridad(T dato, int prioridad){
        this->dato = dato;
        next = NULL;
        this->prioridad = prioridad;
    }

    NodoDePrioridad(T dato) : dato(dato) {
        this->next = NULL;
        prioridad = 0;
    }

    T getDato() const {
        return dato;
    }

    void setDato(T dato) {
        NodoDePrioridad::dato = dato;
    }

    NodoDePrioridad<T> *getNext() const {
        return next;
    }

    void setNext(NodoDePrioridad<T> *next) {
        NodoDePrioridad::next = next;
    }

    int getPrioridad() const  {
        return prioridad;
    }

};


#endif //INC_04_COLA_NODODEPRIORIDAD_H
