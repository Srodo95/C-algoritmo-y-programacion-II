#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int maximo_comun_divisor(int a, int b){
	int res = 1;
	for(int i=2; i<a;i++){
		if((a%i == 0) && (b%i ==0)){
			res=i;
		}
	}
	return res;
}

int minimo_comun_multiplo(int a, int b){
	int res = 1;
	int mcd;
	for(int i=2; i<a;i++){
		if((a%i == 0) && (b%i ==0)){
			res=i;
			mcd=(a*b)/res;
		}
	}
	return mcd;
}

int main(){
	int a;
	int b;
	
	cout<<"ingrese a y b"<<endl;
	cin>>a;
	cin>>b;
	cout<<"el maximo comun divisor es: "<<maximo_comun_divisor(a,b)<<endl;
	cout<<"el minimo comun multiplo es: "<<minimo_comun_multiplo(a,b)<<endl;
	return 0;
	
}
