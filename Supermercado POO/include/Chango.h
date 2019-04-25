#ifndef CHANGO_H
#define CHANGO_H
#include "producto.h"

class Chango
{
    private:
        Producto* productos;
        int cantidad;
        int total_compra;
        int total_ahorro;
    public:
        void agregar_producto(Producto producto);
        void mostrar_ofertas();
        int get_cantidad();
        int get_opcion();
        int get_total_compra();
        int get_total_ahorro();
        //Producto pedir_nuevo_producto();
        Chango();


};

#endif // CHANGO_H
