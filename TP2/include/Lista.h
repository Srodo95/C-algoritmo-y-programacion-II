#ifndef LISTA_H
#define LISTA_H

#include "nodo.h"

template < typename Dato >

class Lista{
    private:
        Nodo* primero;
        int tamanio;

    public:

        //constructor
        Lista();

        //pre:-
        //post:devuelve true si la lista esta vacia,false en caso contrario
        bool lista_vacia();

        //pre: 0<posicion<tamanio+1
        //post: agrega el dato en la posicion deseada y aumenta tamanio en 1
        void agregar(Dato d,int posicion);

        //pre: 0<posicion<tamanio
        //post: elimina los datos de la posicion y reduce tamanio en 1
        void eliminar(int posicion);

        //pre: 0<posicion<tamanio
        //post:devuelve los datos de la posicion deseada
        Dato consultar(int posicion);

        //pre: recibe un legajo
        //post:si corresponde a algun trabajador devuelve posicion,en caso contrario devuelve un numero negativo
        int buscar(int legajo);


        ~Lista();

};

#endif // LISTA_H
