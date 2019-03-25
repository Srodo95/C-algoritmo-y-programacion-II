#include <iostream>
#include <fstream>
#include <string>
#include "supermercado.h"

Producto pedir_nuevo_producto(){
	string nombre,codigo;
	int precio;
	char oferta;
	Producto nuevo_producto;
	cout<<"que producto desea cargar?"<<endl;
	cout<<"Nombre:"<<endl;
	cin>>nombre;
	cout<<"Codigo de barra:"<<endl;
	cin>>codigo;
	cout<<"Precio:"<<endl;
	cin>>precio;
	cout<<"tiene oferta? s/n"<<endl;
	cin>>oferta;
	if(oferta = 'n'){
		nuevo_producto.oferta = false;
	}else if(oferta = 's'){
		nuevo_producto.oferta = true;
	}
	nuevo_producto.nombre = nombre;
	nuevo_producto.codigo = codigo;
	nuevo_producto.precio = precio;
	return nuevo_producto;
}

int buscar_producto(Producto vector[],string nombre,int tam){
	int posicion=-1;
	for(int i=0;i<tam;i++){
		if(vector[i].nombre==nombre){
			posicion=i;
		}
	}
	return posicion;
}

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

void imprimir_productos(Producto vector[],int tam){
	for(int i=0;i<tam;i++){
		cout<<"Nombre: "<<vector[i].nombre<<endl;
		cout<<"Codigo de barra: "<<vector[i].codigo<<endl;
		cout<<"Precio: "<<vector[i].precio<<endl;
		if(vector[i].oferta == true){
			cout<<"Oferta: si"<<endl;
		}else{
			cout<<"Oferta: no"<<endl;
		}
		cout<<endl;		
	}
}

void imprimir_oferta(Producto vector[],int pos){
	if(vector[pos].oferta == true){
		cout<<"Oferta: si"<<endl;
	}else{
		cout<<"Oferta: no"<<endl;
	}
}
//cargar_productos(archivo,gondola);
//agregar_producto(nombre,gondola);

int main(){
	
	Producto gondola[MAX_PRODUCTOS];
	int posicion = 0;
	int cantidad = 0;
	ifstream datos("productos.txt");
	while(!datos.eof()){
		datos>>gondola[cantidad].nombre;
		datos>>gondola[cantidad].codigo;
		datos>>gondola[cantidad].precio;
		datos>>gondola[cantidad].oferta;
		cantidad++;
	}
	Producto chango[MAX_PRODUCTOS];
	int opcion;
	int i;
	int contador_ofertas;
	
	string nombre,codigo;
	int precio;
	bool oferta,encontre;
	//opcion 7;
	int total_compra;
	int total_ahorro;
	
	
	imprimir_productos(gondola,cantidad);
	while(opcion!=8){
		total_compra=0;  //SE INICIALIZAN EN 0 PARA QUE SI SE PRESIONA LA OPCION 7, LUEGO SE REINICIE Y NO SE ACUMULE
		total_ahorro=0;
		imprimir_menu();
		cin>>opcion;
		if(opcion==1){
			if(cantidad>=MAX_PRODUCTOS){
				cout<<"Ya tiene la maxima cantidad de productos en la gondola"<<endl;
			}else{
				char opcion_respuesta;
				gondola[cantidad]=pedir_nuevo_producto();
				cantidad++;
				cout<<"desea cargar otro producto? s/n"<<endl;
				cin>>opcion_respuesta;
				while(opcion_respuesta!='n'){
					gondola[cantidad]=pedir_nuevo_producto();
					cantidad++;
					cout<<"desea cargar otro producto? s/n"<<endl;
					cin>>opcion_respuesta;
				}
			}
			imprimir_productos(gondola,cantidad);
		}
		if(opcion==2){
			encontre = false;
			cout<<"que producto desea buscar? ingrese su nombre"<<endl;
			cin>>nombre;
			posicion=buscar_producto(gondola,nombre,cantidad);
			if(posicion==-1){ //si la funcion no encuentra el productor, devuelve -1
				cout<<"producto no encontrado."<<endl;
			}else{
				cout<<"Nombre: "<<gondola[posicion].nombre<<endl;
				cout<<"Codigo de barra: "<<gondola[posicion].codigo<<endl;
				cout<<"Precio: "<<gondola[posicion].precio<<endl;
				imprimir_oferta(gondola,posicion);
			}
			cout<<"-------------------------"<<endl;	
		}else if(opcion==3){
			encontre = false;
			cout<<"que producto desea buscar? ingrese su codigo"<<endl;
			cin>>codigo;
			for(i=0;i<MAX_PRODUCTOS;i++){
				if(gondola[i].codigo == codigo && encontre == false){
					cout<<"Nombre: "<<gondola[i].nombre<<endl;
					cout<<"Codigo de barra: "<<gondola[i].codigo<<endl;
					cout<<"Precio: "<<gondola[i].precio<<endl;
					imprimir_oferta(gondola,i);
				}
			}
			if(encontre == false){
				cout<<"producto no encontrado."<<endl;
			}
			cout<<"-------------------------"<<endl;
		}else if(opcion==4){
			cout<<"que producto desea modificar? ingrese su nombre"<<endl;
			cin>>nombre;
			posicion=buscar_producto(gondola,nombre,cantidad);
			if(posicion== -1){
				cout<<"producto no encontrado."<<endl;
			}else{
				cout<<"ingrese el precio a modificar: "<<endl;
				cin>>precio;
				gondola[posicion].precio = precio;
			}
			cout<<"-------------------------"<<endl;
			imprimir_productos(gondola,cantidad);
		}else if(opcion==5){
			int elemento;
			cout<<"que producto desea quitar? ingrese su nombre"<<endl;
			cin>>nombre;
			elemento=buscar_producto(gondola,nombre,cantidad);
			for(i=elemento;i<cantidad-1;i++){
				gondola[i]=gondola[i+1];
			}
			cantidad--;
			cout<<"-------------------------"<<endl;
			imprimir_productos(gondola,cantidad);
		}else if(opcion==6){
			contador_ofertas=0;
			for(i=0;i<cantidad;i++){
				if((bool)gondola[i].oferta == true){
					contador_ofertas++;
				}
			}
			cout<<"Cantidad de productos con oferta: "<<contador_ofertas<<endl;	
			cout<<"-------------------------"<<endl;
		}else if(opcion==7){
			for(i=0;i<cantidad;i++){
				chango[i]=gondola[i];
				if(gondola[i].oferta == true){
					total_compra+=chango[i].precio*0.9;
					total_ahorro+=chango[i].precio*0.1;
				}else{
					total_compra+=chango[i].precio;
				}
			}
			cout<<"TOTAL DE LA COMPRA: $"<<total_compra<<endl;
			cout<<"TOTAL DE AHORRO: $"<<total_ahorro<<endl;
			cout<<"-------------------------"<<endl;
		}
	}
	datos.close();
	return 0;
}
