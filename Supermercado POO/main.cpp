#include <iostream>
#include "Chango.h"
#include "Gondola.h"
#include "producto.h"
using namespace std;

void imprimir_menu(){
	cout<<"1. Cargar productos en el vector."<<endl;
	cout<<"2. Buscar un producto indicando su nombre."<<endl;
	cout<<"3. Buscar un producto por c�digo de barra."<<endl;
	cout<<"4. Poder modificar el precio de alg�n producto."<<endl;
	cout<<"5. Quitar un producto que est� en el vector."<<endl;
	cout<<"6. Indicar la cantidad de productos en oferta."<<endl;
	cout<<"7. Cargar productos de Gondola en un nuevo vector Chango, indicando: monto a abonar y ahorro total teniendo en cuenta los productos en oferta."<<endl;
	cout<<"8. Salir"<<endl;
	cout<<"-------------------------"<<endl;
}

int main()
{
    Chango chango;
    Gondola gondola;
    gondola.cargar_gondola("productos.txt");
    imprimir_menu();
    gondola.mostrar_gondola();
    //gondola.cerrar_archivo("productos.txt");


    return 0;
}
