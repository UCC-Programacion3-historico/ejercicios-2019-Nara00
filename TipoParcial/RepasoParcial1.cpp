#include "Pila.h"
#include "../U02_Listas/Lista/Lista.h"
#include <iostream>


using namespace std;

template <class int>
void ElimNodos( Lista<T> list, Pila<T> stack )
{
    while(!(stack.esVacia()))
    {
        list.remover(stack.pop());
    }
}

template <class int>
int main()
{
    Lista<T> lista;
    Pila<T> stack;
    lista.insertarUltimo(2);
    lista.insertarUltimo(4);
    lista.insertarUltimo(6);
    lista.insertarUltimo(8);
    lista.insertarUltimo(9);
    lista.insertarUltimo(3);
    stack.push(5);
    stack.push(2);
    ElimNodos(lista, stack);

    return 0;

}

//
// Created by Abril on 15/10/2019.
//