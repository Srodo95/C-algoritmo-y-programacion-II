#include "Chango.h"

Chango::Chango(){
    cantidad = 0;
}

int Chango::get_cantidad(){
    return cantidad;
}

int Chango::get_opcion(){
    return opcion;
}

int Chango::get_total_compra(){
    return total_compra;
}

int Chango::get_total_ahorro(){
    return total_ahorro;
}

/*Producto pedir_nuevo_producto(){
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

void Chango::ejecutar_opcion(opcion){
    while(opcion!=8){
        total_compra = get_total_compra();  //SE INICIALIZAN EN 0 PARA QUE SI SE PRESIONA LA OPCION 7, LUEGO SE REINICIE Y NO SE ACUMULE
		total_ahorro = get_total_ahorro();
		cantidad = get_cantidad();
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
}
*/
