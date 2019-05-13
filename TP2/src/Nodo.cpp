#include "Nodo.h"

Nodo::Nodo(Trabajador empl)
{
    trabajador = empl;
    siguiente = 0;
}

void Nodo::asignar_elemento(Trabajador empl){
    trabajador = empl;
    siguiente = 0;
}

void Nodo::asignar_siguiente(Nodo* puntero_siguiente){
    siguiente = puntero_siguiente;
}

Trabajador Nodo::obtener_trabajador(){
    return trabajador;
}

Nodo* Nodo::obtener_siguiente(){
    return siguiente;
}

Nodo::~Nodo()
{
    //dtor
}
