#include <iostream>
#include <string>
using namespace std;
const int MAX_PRODUCTOS = 50;

typedef struct Producto{
	string nombre;
	int codigo;
	int precio;
	bool oferta;
}Producto;


//cargar_productos(archivo,gondola);
//agregar_producto(nombre,gondola);

int main(){
	
	Producto gondola[MAX_PRODUCTOS];
	//cargar_productos(archivo,gondola);
/*	for(int i=0;i<MAX_PRODUCTOS,i++){
		
	}
	*/
	Producto chango[MAX_PRODUCTOS];
	int opcion;
	char opcion_respuesta;
	int posicion = 0;
	int i;
	int contador_ofertas;
	string nombre;
	int codigo;
	bool encontre;
	
	while(opcion!=8){
		cout<<"1. Cargar productos en el vector."<<endl;
		cout<<"2. Buscar un producto indicando su nombre."<<endl;
		cout<<"3. Buscar un producto por código de barra."<<endl;
		cout<<"4. Poder modificar el precio de algún producto."<<endl;
		cout<<"5. Quitar un producto que esté en el vector."<<endl;
		cout<<"6. Indicar la cantidad de productos en oferta."<<endl; 
		cout<<"7. Cargar productos de Gondola en un nuevo vector Chango, indicando: monto a abonar y ahorro total teniendo en cuenta los productos en oferta."<<endl;
		cout<<"8. Salir"<<endl;
		cin>>opcion;
		if(opcion==1){
			cout<<"que producto desea cargar?"<<endl;
			cin>>nombre;
			//chango[posicion]=agregar_producto(nombre,gondola);
			posicion++;
			cout<<"desea cargar otro producto? s/n"<<endl;
			cin>>opcion_respuesta;
			while(opcion_respuesta!='n'){
				cout<<"que producto desea cargar?"<<endl;
				cin>>nombre;
				//chango[posicion]=agregar_producto(nombre,gondola);
				cout<<"desea cargar otro producto? s/n"<<endl;
				cin>>opcion_respuesta;
			}
			
		}
		if(opcion==2){
			encontre = false;
			cout<<"que producto desea buscar? ingrese su nombre"<<endl;
			cin>>nombre;
			for(i=0;i<MAX_PRODUCTOS;i++){
				if(gondola[i].nombre == nombre && encontre == false){
					cout<<gondola[i].nombre<<" "<<gondola[i].codigo<<" "<<gondola[i].precio<<" "<<gondola[i].oferta<<endl;
				}
			}
			if(encontre == false){
				cout<<"producto no encontrado."<<endl;
			}	
		}else if(opcion==3){
			encontre = false;
			cout<<"que producto desea buscar? ingrese su codigo"<<endl;
			cin>>codigo;
			for(i=0;i<MAX_PRODUCTOS;i++){
				if(gondola[i].codigo == codigo && encontre == false){
					cout<<gondola[i].nombre<<" "<<gondola[i].codigo<<" "<<gondola[i].precio<<" "<<gondola[i].oferta<<endl;
				}
			}
			if(encontre == false){
				cout<<"producto no encontrado."<<endl;
			}
		}else if(opcion==4){
			
		}else if(opcion==5){
			
		}else if(opcion==6){
			contador_ofertas=0;
			for(i=0;i<MAX_PRODUCTOS;i++){
				if(chango[i].oferta == true){
					contador_ofertas++;
				}
			}
			cout<<"Cantidad de productos con oferta: "<<contador_ofertas<<endl;	
		}else if(opcion==7){
		}
	}
	return 0;
}
