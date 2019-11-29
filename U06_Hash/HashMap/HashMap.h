#ifndef HASHMAP_H
#define HASHMAP_H
#include "../../U02_Listas/Lista/Lista.h"
#include "HashEntry.h"
template<class K, class T>
class HashMap {
private:
    unsigned int hashFunc(K clave);

    unsigned int (*hashFuncP)(K clave);

    HashEntry<T,K> *tabla;

    unsigned int tamanio;


public:
    HashMap(unsigned int k);


    HashMap(unsigned int k, unsigned int (*hashFuncP)(K clave));

    T get(K clave);

    void put(K clave, T valor);

    void remove(K clave);

    ~HashMap();

    bool esVacio();

};

template<class K, class T>
HashMap<K, T>::HashMap(unsigned int k) {
    tabla= new HashEntry<T,K> [k];

}

template<class K, class T>
HashMap<K, T>::~HashMap() {

}

template<class K, class T>
T HashMap<K, T>::get(K clave) {
    T temp;
    return temp;
}

template<class K, class T>
void HashMap<K, T>::put(K clave, T valor) {
    unsigned int idx;
    idx = hashFuncP(clave) % tamanio;
    if (tabla[idx] == nullptr){
        tabla[idx] = new Lista<K>;
        tabla[idx]->put(clave, valor);
    }
    else
        tabla[idx]->put(clave, valor);
}

template<class K, class T>
void HashMap<K, T>::remove(K clave) {
    unsigned int idx;
    idx = hashFuncP(clave) % tamanio;
    if (tabla[idx] == nullptr || tabla[idx]->getClave() != clave) {
        throw 404;
    }
    delete tabla[idx];
    tabla[idx] = nullptr;
}

template<class K, class T>
bool HashMap<K, T>::esVacio() {
    return false;
}

template<class K, class T>
unsigned int HashMap<K, T>::hashFunc(K clave) {
    return 99999;
}

template<class K, class T>
HashMap<K, T>::HashMap(unsigned int k, unsigned int (*fp)(K)) {

}


#endif //HASHMAP_H