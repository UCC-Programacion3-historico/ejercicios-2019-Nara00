#include <iostream>
#include "../Pila/Pila.h"
#include <stdlib.h>

using namespace std;

template <class T>
int Pilasiguales(Pila<T> a, Pila<T> b);

int main()
{
    srand(3);
    int elemento;
    Pila<int> a , b, c, d;
    cout << "Ejercicio 03/02\n" << std::endl;
    for (int i=0; i<=5; i++)
    {
        elemento = rand() % 100;
        a.push(elemento);
        c.push(elemento);
        elemento = rand() % 100;
        b.push(elemento);
    }
    c.pop();
    cout<<"\nSon iguales: "<<Pilasiguales(a,c);
    return 0;
}


template <class T>
int Pilasiguales(Pila<T> a, Pila<T> b)
{
    T auxa, auxb;
    for(int i=0; !a.esVacia() && !b.esVacia() ;i++)
    {
        auxa= a.pop();
        auxb= b.pop();
        if (auxa != auxb)
            return false;
    }
    return a.esVacia() == b.esVacia();
}