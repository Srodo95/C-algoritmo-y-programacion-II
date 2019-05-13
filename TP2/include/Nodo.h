#ifndef NODO_H
#define NODO_H
#include "Trabajador.h"

class Nodo
{
    private:
        Trabajador trabajador;
        Nodo* siguiente;
    public:
        //Constructor
        Nodo(Trabajador trabajador);

        //post: Asigna un elemento al nodo
        void asignar_elemento(Trabajador empl);

        //pre: -
        //post: asigna el siguiente nodo
        void asignar_siguiente(Nodo* puntero_siguiente);

        //pre: -
        //post: devuelve el objeto del nodo;
        Trabajador obtener_trabajador();

        //pre: -
        //post: devuelve el siguiente nodo
        Nodo* obtener_siguiente();

        //Destructor
        ~Nodo();
};

#endif // NODO_H
