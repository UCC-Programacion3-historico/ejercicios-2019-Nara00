#ifndef CIRCLIST_H
#define CIRCLIST_H

#include "../Lista/nodo.h"

using namespace std;

template <class T>
class CircList
{
private:
    Nodo<T> *punta;
public:
    CircList();

    ~CircList();

    int getTamanio();

    void insertarDato(T);

    void Mostrarlista();

    bool esVacia();
};

template<class T>
CircList<T>::CircList()
{
    punta= nullptr;
}

template<class T>
CircList<T>::~CircList() {
    Nodo<T> *aux, *aBorrar;
    aux=punta;
    for(int i=0; i<getTamanio(); i++)
    {
        aBorrar=aux;
        aux=aux->getSiguiente();
        delete aBorrar;
    }
    punta= nullptr;

}

template<class T>
int CircList<T>::getTamanio() {
    Nodo<T> *aux;
    int nroElementos=0;
    aux=punta;
    if (esVacia())
        return nroElementos;
    do
    {
        nroElementos++;
        aux=aux->getSiguiente();
    } while (aux!=punta);
    return nroElementos;
}

template<class T>
bool CircList<T>::esVacia()
{
    return (punta== nullptr);
}

template<class T>
void CircList<T>::insertarDato(T dato) {
    Nodo<T> *aux, *nuevo;
    nuevo = new Nodo<T>;
    nuevo->setDato(dato);
    aux=punta;
    if (esVacia())
    {
        punta=nuevo;
        nuevo->setSiguiente(punta);
        return;
    }
    while (aux->getSiguiente()!=punta)
    {
        aux=aux->getSiguiente();
    }
    aux->setSiguiente(nuevo);
    nuevo->setSiguiente(punta);
}

template<class T>
void CircList<T>::Mostrarlista() {
    Nodo<T> *aux;
    aux= punta;
    for(int i=0; i<this->getTamanio(); i++)
    {
        cout<<"\t"<<aux->getDato();
        aux= aux->getSiguiente();
    }

}


#endif //CIRCLIST_H
