#ifndef CHANGO_H
#define CHANGO_H
#include "producto.h"

class Chango
{
    private:
        Producto* productos = new Producto[50];
        int cantidad;
        int opcion;
        int total_compra=0;
        int total_ahorro=0;
    public:
        void cargar_chango();
        void mostrar_ofertas();
        int get_cantidad();
        int get_opcion();
        int get_total_compra();
        int get_total_ahorro();
        //void ejecutar_opcion(opcion);
        //Producto pedir_nuevo_producto();
        Chango();

};

#endif // CHANGO_H
