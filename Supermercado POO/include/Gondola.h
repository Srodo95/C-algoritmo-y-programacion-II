#ifndef GONDOLA_H
#define GONDOLA_H
#include "producto.h"
#include <fstream>
using namespace std;

class Gondola
{

    private:
        Producto *productos; //= new Producto[50];
        int cantidad;
    public:
        void cargar_gondola(string nombre_archivo);
        void mostrar_gondola();
        //void cerrar_archivo(string nombre_archivo);
        Gondola();
};

#endif // GONDOLA_H
