#include <iostream>
#include <fstream>
#include <math.h>
#include <string>
#include "tp.h"

const int ESCALA=12;
const double LA_CENTRAL = 440;
const int C = -9;
const int C_SOSTENIDO = -8;
const int D = -7;
const int D_SOSTENIDO = -6;
const int E = -5;
const int F = -4;
const int F_SOSTENIDO = -3;
const int G = -2;
const int G_SOSTENIDO = -1;
const int A = 0;
const int A_SOSTENIDO = 1;
const int B = 2;
const int MUESTRAS_MIN=8000;
const int AMPLITUD=100;
const float PI = 3.14159;

using namespace std;

void leer_archivo_sonido(fstream nombre_archivo){
	ofstream archivo(nombre_archivo,ios::binary);
	
	if(archivo.is_open()){
		//archivo.write(reinterpret_cast<char *>(&riff),sizeof(char))*4);
		for(i=0;i<3;i++){
			arhivo.put(riff[i]);
		}
		
		for(i=0;i<2;i++){
			arhivo.put(fmt[i]);
		}
		
		for(i=0;i<3;i++){
			arhivo.put(wave[i]);
		}
		
		
		
	}
}

bool es_sostenido(string tono){
	for(int i=0;i<tono.length();i++){
		if(tono[i]=='#' || tono[i]=='b'){
			return true;
		}
	}
	return false;
}

int calcular_distancia_tonos(string tono){
	int distancia;
	int cantidad_escalas = 0;
	int escala_tono;
	int vector[ESCALA]={C,C_SOSTENIDO,D,D_SOSTENIDO,E,F,F_SOSTENIDO,G,G_SOSTENIDO,A,A_SOSTENIDO,B};
	string vector_tonos[ESCALA]={"C","C#","D","D#","E","F","F#","G","G#","A","A#","B"};
	bool encontre_tono = false;
	
	for(int i=0;i<ESCALA;i++){
		if(vector_tonos[i][0]==tono[0] && encontre_tono==false){
			encontre_tono=true;
			if(es_sostenido(tono)){
				cantidad_escalas = (int)tono.at(2)-48;
				i++;
			}else{
				cantidad_escalas = (int)tono.at(1)-48;
			}
			cout<<"cantidad de escalas: "<<cantidad_escalas<<endl;
			if(cantidad_escalas>4){
				while(cantidad_escalas-4>0){
					distancia+=ESCALA;
					cantidad_escalas--;
				}
			}else if(cantidad_escalas<4){
				while(cantidad_escalas+4>0){
					distancia-=ESCALA;
					cantidad_escalas++;
				}
			}
			distancia += vector[i];
		}
	}
	cout<<"distancia: "<<distancia<<endl;
	return distancia;
}



double encontrar_frecuencia(string tono){
	double numero = 0.083333;   //raiz doceava de 2
	
	double frecuencia=440*pow(pow(2,numero),(double)calcular_distancia_tonos(tono));
	return frecuencia;
}

/*
1' parametro : archivo a leer
2' parametro : archivo wav a crear
3' parametro : representacion de cada muestra (8,16 o 32 bits); 
4' parametro : cantidad de muestras por segundo >=8000
*/

/*0 - 3 "RIFF" 
4 - 7 Tamaño del archivo a partir del byte 8 
8 - 11 "WAVE" 
Formato 
 12 - 15 "fmt " 
 16 - 19 Tamaño del chunk de formato (16 bytes) 
 20 - 21 Formato de audio: 1 = sin compresión
 22 - 23 cc = cantidad de canales: 1 = Mono 
 24 - 27 mps = muestras por segundo (4to parámetro) 
 28 - 31 br = byte rate = mps * cc * bpm / 8 
 32 - 33 ba = block align = cc * bpm / 8 
 34 - 35 bpm = bits por muestra: 8, 16 o 32 (3er param) 
Datos 
4 36 - 39 "data" 4 40 - 43 Tamaño del chunk de datos = n n 44 - Muestras */
 

int main(int argc, char* argv[]){
	int cantidas_bits;
	int ciclos; //cantidad de muestras por segundo
	int duracion_melodia;
	int duracion_nota
	int i;
	
	float funcion;
	float frecuencia_nota;
	
	string tono_actual;
	
	int canal = 1;
	
	
	ifstream archivo_notas(argv[3]);
	if(!archivo_notas){
		cout<<"error al abrir el archivo de notas"<<endl;
	}
	ofstream musica(argv[4],ios::binary);
	if(archivo_notas.is_open()){
		archivo_notas>>duracion_melodia;
		while(!archivo_notas.eof()){
			archivo_notas>>tono_actual;
			archivo_notas>>duracion_melodia;
			frecuencia_nota=encontrar_frecuencia(tono_actual);
			funcion = AMPLITUD*sin(frecuencia_nota*2*PI+c)+d;
			write()
	}
//F(X)=AMPLITUD * (bx+c)+d
// c = muestra anterior
//c = ((arcs(y - D/A)/2pi)-C)/FRECUENCIA
	
	if(musica.is_open()){
		musica>>duracion_melodia;
		while(!musica.eof()){
			
		}
	}
	musica.close();
}
