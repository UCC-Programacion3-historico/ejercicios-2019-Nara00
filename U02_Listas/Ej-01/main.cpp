#include <iostream>
#include "../Lista/Lista.h"
#include "fnInvierte.h"

using namespace std;

int main() {
    std::cout << "Ejercicio 02/01\n" << std::endl;
    Lista<int> l, *listap;
    listap=&l;
    l.insertarPrimero(7);
    l.insertarPrimero(6);
    l.insertarPrimero(5);
    l.insertarPrimero(3);
    l.insertarPrimero(2);
    l.insertarPrimero(1);
    l.mostrarElemOrden();
    fnInvierte(listap);
    l.mostrarElemOrden();
    return 0;
}

