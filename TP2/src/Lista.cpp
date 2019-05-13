#include "Lista.h"

template < typename Dato >
Lista<Dato>::Lista(){
    primero=0;
    tamanio=0;
}

template < typename Dato >
    bool Lista<Dato>::lista_vacia(){
    return (tamanio==0);
}

template < typename Dato >
void Lista<Dato>::agregar(Dato d,int posicion){ //despues modificarla para casos bordes

    Nodo* nuevo=new Nodo(d);
    Nodo* actual=primero;
    Nodo* siguiente;

    int i=1;
    while(i<posicion){
        actual=(*actual).obtener_siguiente(); //asi, "actual" va avanzando hasta posicionarse antes del nuevo nodo
        i++;
    }
    siguiente=(*actual).obtener_siguiente();//asi, "siguiente" va avanzando hasta posicionarse despues del nuevo nodo

    (*nuevo).asignar_siguiente(siguiente);

    (*actual).asignar_siguiente(nuevo);

    tamanio++;

}

template < typename Dato >

void Lista<Dato>::eliminar(int posicion){

    Nodo* aux = primero;

    if(posicion==1){
        primero=(*primero).obtener_siguiente();
    }

    else{
        int i=1;
        while(i<posicion){
            aux=(*aux).obtener_siguiente();
            i++;
        }
        (*aux).asignar_siguiente((*aux).obtener_siguiente());
    }
    Nodo* borrar = aux;
    delete borrar;
    tamanio--;
}

template < typename Dato >

Dato Lista<Dato>::consultar(int posicion){
    Nodo* aux = primero;

    if(!lista_vacia()){

        int i=1;
        while(i<posicion){
            i++;
            (*aux).obtener_siguiente();
        }
    }else{
        return (*aux).obtener_siguiente();
    }
    return 0;
}

template < typename Dato >
int Lista<Dato>::buscar(int legajo){

    Nodo* aux = primero;
    int i=1;
    while(i<tamanio && (*aux).trabajador.legajo != legajo){
        (*aux).obtener_siguiente();
        i++;
    }
    if((*aux).trabajador.legajo != legajo){
        return i;
    }else
        return -1;//asi,si devuelve un numero negativo se sabe que el legajo enviado no corresponde con el
                          //de ningun trabajador
}


template < typename Dato >
Lista<Dato>::~Lista(){
    while(!lista_vacia())
        eliminar(1);
}
