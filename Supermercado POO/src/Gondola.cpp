#include "Gondola.h"
#include <fstream>

Gondola::Gondola(){
    cantidad = 0;
}

/*ifstream Gondola::get_datos(){
    return datos;
}*/

void Gondola::cargar_gondola(string nombre_archivo){
    ifstream datos(nombre_archivo);
    while(!datos.eof()){
        datos>>productos[cantidad].get_nombre();
        datos>>productos[cantidad].get_codigo();
        datos>>productos[cantidad].get_precio();
        datos>>productos[cantidad].get_oferta();
        cantidad++;
    }
}

void Gondola::mostrar_gondola(){
    for(int i = 0; i<cantidad; i++){
        cout<<productos[cantidad].get_nombre()<<", "<<productos[cantidad].get_codigo()<<", "<<productos[cantidad].get_precio()<<", "<<productos[cantidad].get_oferta<<endl;
    }
}

/*void Gondola::cerrar_archivo(string nombre_archivo){
    close(nombre_archivo);
}*/
