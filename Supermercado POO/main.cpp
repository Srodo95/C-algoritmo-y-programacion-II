#include <iostream>
#include "Chango.h"
#include "Gondola.h"
#include "producto.h"
using namespace std;

void imprimir_menu(){
	cout<<"1. Cargar productos en el vector."<<endl;
	cout<<"2. Buscar un producto indicando su nombre."<<endl;
	cout<<"3. Buscar un producto por código de barra."<<endl;
	cout<<"4. Poder modificar el precio de algún producto."<<endl;
	cout<<"5. Quitar un producto que esté en el vector."<<endl;
	cout<<"6. Indicar la cantidad de productos en oferta."<<endl;
	cout<<"7. Cargar productos de Gondola en un nuevo vector Chango, indicando: monto a abonar y ahorro total teniendo en cuenta los productos en oferta."<<endl;
	cout<<"8. Salir"<<endl;
	cout<<"-------------------------"<<endl;
}

int main()
{
    int opcion;
    Chango chango;
    Gondola gondola;
    gondola.cargar_gondola("productos.txt");
    imprimir_menu();
    gondola.mostrar_gondola();
    cout<<"ingrese una opcion a elegir"<<endl;
    cin>>opcion;
    //gondola.cerrar_archivo("productos.txt");


    return 0;
}
