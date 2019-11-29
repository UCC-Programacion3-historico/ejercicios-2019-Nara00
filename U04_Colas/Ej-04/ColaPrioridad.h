//
// Created by Abril on 15/10/2019.
//
#include "../Cola/COla.h"

#ifndef PROGRAMACION3_COLAPRIORIDAD_H
#define PROGRAMACION3_COLAPRIORIDAD_H
template <class T>
class ColaPrioridad
{
private:
    Cola<T> *colas;
    int tamanio;
public:
    ColaPrioridad(int cant)
    {
        tamanio = cant;
        colas = new Cola<T>[tamanio];
    }

    void EncolarPrioridad(int prioridad, T dato)
    {
        if (prioridad>=0&&prioridad<tamanio)
            colas[prioridad].encolar(dato);
        else
            throw 252;
    }

    int desencolar()
    {
        for (int i=0; i<tamanio; i++)
        {
            if (!(colas[i].esVacia()))
            {
                return colas[i].desencolar();
            }
            else
                throw 404;
        }
    }


};


#endif //PROGRAMACION3_COLAPRIORIDAD_H
