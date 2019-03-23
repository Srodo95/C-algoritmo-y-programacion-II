#include <iostream>
using namespace std;

int main(){
	int primer_vector[1];
	int segundo_vector[1];
	int vector_suma[1];
	int producto_escalar[1];
	cout<<"ingrese las coordenadas del primer vector"<<endl;
	cin>>primer_vector[0];
	cin>>primer_vector[1];
	cout<<"-----------------------------------"<<endl;
	cout<<"ingrese las coordenadas del segundo vector"<<endl;
	cin>>segundo_vector[0];
	cin>>segundo_vector[1];
	
	vector_suma[0] = primer_vector[0] + segundo_vector[0];
	vector_suma[1] = primer_vector[1] + segundo_vector[1]; 
	
	producto_escalar[0] = primer_vector[0]*segundo_vector[0];
	producto_escalar[1] = primer_vector[1]*segundo_vector[1];
	
	cout<<"el vector suma es: "<<"("<<vector_suma[0]<<","<<vector_suma[1]<<")"<<endl;
	cout<<"el producto escalar es: "<<"("<<producto_escalar[0]<<","<<producto_escalar[1]<<")"<<endl;
	
	return 0;
}
