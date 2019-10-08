#include "../Lista/Lista.h"
#ifndef FNINVIERTE_H
#define FNINVIERTE_H


template <class T>
void fnInvierte (Lista<T> *lis);


template <class T>
void fnInvierte (Lista<T> *lis)
{
    Nodo<T> *aux1, *fin, *inicio;
    int tamanio=lis->getTamanio();
    inicio= lis->getInicio();
    aux1=inicio;
    for (int i=0; i<tamanio; i++)
    {
        if(i==0) {
            while (aux1->getSiguiente()->getSiguiente()->getSiguiente() != NULL) {
                aux1 = aux1->getSiguiente();
            }
            fin = aux1->getSiguiente()->getSiguiente();
            aux1->getSiguiente()->getSiguiente() = aux1;
        }
        else
        {
            if(i==tamanio)
            {
                aux1->getSiguiente() = NULL;
            }
            else
            {
                while (aux1->getSiguiente()->getSiguiente()->getSiguiente() != aux1->getSiguiente()) {
                    aux1 = aux1->getSiguiente();
                    aux1->getSiguiente()->getSiguiente() = aux1;
                }
            }
        }
        aux1=inicio;
    }
    lis->setInicio(fin);
}


#endif //FNINVIERTE_H
