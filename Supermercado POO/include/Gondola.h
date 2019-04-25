#ifndef GONDOLA_H
#define GONDOLA_H
#include "producto.h"
#include <fstream>
#include <iostream>
using namespace std;

class Gondola
{

    private:
        Producto *productos; //= new Producto[50];
        int cantidad;
        int maximo;
    public:
        void cargar_gondola(string nombre_archivo);
        void mostrar_gondola();
        Producto buscar(long int codigo);
        Producto buscar(string nombre);

        Gondola();
};

#endif // GONDOLA_H
