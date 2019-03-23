#include <iostream>
using namespace std;
const int MAX = 3;


int main(){
	cout<<"Maximo de dimension para filas y columnas: "<<MAX<<endl;
	cout<<"----------------------------";
	int filas,columnas;
	cout<<"ingrese la cantidad de filas: "<<endl;
	cin>>filas;
	if(filas <= 0 || filas>MAX){
		cout<<"por favor ingrese un numero valido mayor a cero"<<endl;
		return 0;
	}
	cout<<"ingrese la cantidad de columnas: "<<endl;
	cin>>columnas;
	if(columnas <= 0 || columas>MAX){
		cout<<"por favor ingrese un numero valido mayor a cero"<<endl;
		return 0;
	}
	
	int primer_matriz[filas][columnas];
	int segunda_matriz[filas][columnas];
	int resultado[filas][columnas];
	int i,j;
	cout<<"PRIMER MATRIZ: "<<endl;
	for(i=0;i<filas;i++){
		cout<<"FILA "<<i<<" : "<<endl;;
		for(j=0;j<columnas;j++){
			cout<<"COLUMNA "<<j<<" : ";
			cin>>primer_matriz[i][j];
		}
	}
	
	cout<<"SEGUNDA MATRIZ: "<<endl;
	for(i=0;i<filas;i++){
		cout<<"FILA "<<i<<" : "<<endl;;
		for(j=0;j<columnas;j++){
			cout<<"COLUMNA "<<j<<" : ";
			cin>>segunda_matriz[i][j];
		}
	}
	
	for(i=0;i<filas;i++){
		for(j=0;j<columnas;j++){
			resultado[i][j]=primer_matriz[i][j]+segunda_matriz[i][j];
		}
	}
	
	cout<<"RESULTADO";
	for(i=0;i<filas;i++){
		cout<<""<<endl;
		for(j=0;j<columnas;j++){
			cout<<resultado[i][j]<<" ";
		}
	}
	return 0;
}
