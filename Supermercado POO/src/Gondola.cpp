#include "Gondola.h"
#include <fstream>
#include <cstdlib>

const char SEPARADOR = '\t';

Gondola::Gondola(){
    productos = new Producto[50];
    cantidad = 0;
}

void Gondola::cargar_gondola(string nombre_archivo){
    Producto producto;
    ifstream datos(nombre_archivo.c_str());

    for(int i = 0; i < 50 && !datos.eof(); i++){
      string nombre;
      string codigo;
      string precio;
      string oferta;
      getline(datos,nombre,SEPARADOR);
      getline(datos,codigo,SEPARADOR);
      getline(datos,precio,SEPARADOR);
      getline(datos, oferta);
      productos[i].set_nombre(nombre);
      cout<<"PRODUCTO:  "<<productos[i].get_nombre()<<endl;
      productos[i].set_codigo(atol(codigo.c_str()));
      productos[i].set_precio(atof(precio.c_str()));
      productos[i].set_oferta(atoi(oferta.c_str()));
      cantidad++;
    }
    datos.close();
}

void Gondola::mostrar_gondola(){

    for(int i = 0; i<cantidad; i++){
        cout<<"Nombre: "<<productos[i].get_nombre()<<endl;
		cout<<"Codigo de barra: "<<productos[i].get_codigo()<<endl;
		cout<<"Precio: "<<productos[i].get_precio()<<endl;
		if(productos[i].get_oferta() == true){
			cout<<"Oferta: si"<<endl;
		}else{
			cout<<"Oferta: no"<<endl;
		}
		cout<<endl;
    }
}

/*void Gondola::cerrar_archivo(string nombre_archivo){
    close(nombre_archivo);
}*/
