#include "../Lista/Lista.h"

#ifndef UNION_H
#define UNION_H


template<class T>
Lista<T> *unir(Lista<T> &lisA, Lista<T> &lisB)
{
    Nodo<T> *auxA, *auxB;
    auxA= lisA.getInicio();
    auxB= lisB.getInicio();
    while(auxA->getSiguiente()!= nullptr)
    {
        auxA=auxA->getSiguiente();
    }
    auxA->setSiguiente(auxB);
    //Lista<T> l(lisA);
    //Lista<T> l = new Lista<T>(lisA);
    return new Lista<T>(lisA);
}


#endif //UNION_H
