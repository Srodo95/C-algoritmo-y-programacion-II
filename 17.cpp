#include <iostream>
#include <conio.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int cantidad;
	int numero;
	int contador_mayor = 0;
	int contador_menor = 0;
	
	
	cout<<"ingrese la cantidad de numeros enteros que desea ingresar en el vector"<<endl;
	cin>>cantidad;
	
	int vector[cantidad];
	cout<<"por favor ingrese los valores"<<endl;
	
	int mayor;
	int menor;
	
	
	for(int i=0;i<cantidad;i++){
		cin>>numero;
		vector[i]=numero;
	}
	
	int i;
	menor = vector[0];
	for(i=0;i<cantidad;i++){
		if(vector[i]==menor){
			contador_menor++;
		}
		else if(vector[i]<menor){
			menor=vector[i];
			contador_menor = 1;
		}	
	}
	mayor = vector[0];
	for(i=0;i<cantidad;i++){
		if(vector[i]==mayor){
			contador_mayor++;
		}
		else if(vector[i]>mayor){
			mayor=vector[i];
			contador_mayor = 1;
		}	
	}
	
	for(int i=0;i<cantidad;i++){
		cout<<vector[i];
		cout<<" ";
	}	
	cout<<"--------------------------------------------"<<endl;
	
	cout<<"el numero de mayor valor es : "<<mayor<<" y aparece "<<contador_mayor<<" veces"<<endl;
	
	cout<<"el numero de menor valor es : "<<menor<<" y aparece "<<contador_menor<<" veces"<<endl;
	
	return 0;
	
	
	
}
