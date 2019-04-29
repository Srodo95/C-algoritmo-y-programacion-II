#ifndef CHANGO_H
#define CHANGO_H
#include "producto.h"

class Chango
{
    private:
        Producto* productos;
        int cantidad;
        int monto;
        int total_ahorro;
    public:
        void agregar_producto(Producto producto);
        void mostrar_ofertas();
        int devolver_cantidad();
        int devolver_monto();
        int devolver_total_ahorro();

        Chango();


};

#endif // CHANGO_H
