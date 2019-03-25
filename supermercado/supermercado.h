#ifndef SUPERMERCADO_H
#define SUPERMERCADO_H

using namespace std;
const int MAX_PRODUCTOS = 50;

typedef struct Producto{
	string nombre;
	string codigo;
	int precio;
	bool oferta;
}Producto;

Producto pedir_nuevo_producto();

int buscar_producto(Producto vector[], string nombre,int tam);

void imprimir_menu();

void imprimir_productos(Producto vector[],int tam);

void imprimir_oferta(Producto vector[],int pos);

#endif /* SUPERMERCADO_H */
