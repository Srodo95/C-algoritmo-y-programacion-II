#ifndef TRABAJADOR_H
#define TRABAJADOR_H
#include <string>
using namespace std;

class Trabajador
{
    private:
        char ocupacion;
        int legajo;
        string apellido_nombre;



    public:
        Trabajador();
        virtual ~Trabajador();
};

#endif // TRABAJADOR_H
