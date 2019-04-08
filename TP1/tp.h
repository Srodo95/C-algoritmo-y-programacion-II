#ifndef TP_H
#define TP_H

using namespace std;

void leer_archivo_sonido(fstream nombre_archivo);

bool es_sostenido(string tono);

int calcular_distancia_tonos(string tono);

double encontrar_frecuencia(string tono);

#endif

