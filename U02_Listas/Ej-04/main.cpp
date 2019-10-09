#include <iostream>
#include "../Lista/Lista.h"
#include "union.h"

using namespace std;

int main() {
    std::cout << "Ejercicio 01/04\n" << std::endl;
    Lista<int> la, lb, *l;
    la.insertarPrimero(7);
    la.insertarPrimero(6);
    la.insertarPrimero(5);
    lb.insertarPrimero(3);
    lb.insertarPrimero(2);
    lb.insertarPrimero(1);
    la.mostrarElemOrden();
    cout << "\ncorta";
    lb.mostrarElemOrden();
    cout << "\ncorta";
    l = unir(la, lb);
    l->mostrarElemOrden();
    return 0;
}