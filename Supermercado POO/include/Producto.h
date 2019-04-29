#ifndef PRODUCTO_H
#define PRODUCTO_H
#include <string>
using namespace std;

class Producto
{
   private:
        string nombre;
        float precio;
        long int codigo;
        bool oferta;
    public:
        Producto();
        float get_precio();
        long int get_codigo();
        string get_nombre();
        bool get_oferta();
        void set_precio(float precio);
        void set_codigo(long int codigo);
        void set_nombre(string nombre);
        void set_oferta(bool oferta);
};

#endif // PRODUCTO_H
