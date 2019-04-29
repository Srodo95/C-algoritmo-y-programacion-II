#include "Producto.h"

Producto::Producto()
{
    //ctor
}

long int Producto::get_codigo(){
    return codigo;
}

float Producto::get_precio(){
    return precio;
}

string Producto::get_nombre(){
    return nombre;
}

bool Producto::get_oferta(){
    return oferta;
}

void Producto::set_precio(float precio){
    this->precio = precio;
}

void Producto::set_codigo(long int codigo){
    this->codigo = codigo;
}

void Producto::set_nombre(string nombre){
    this->nombre = nombre;
}

void Producto::set_oferta(bool oferta){
    this->oferta = oferta;

}
