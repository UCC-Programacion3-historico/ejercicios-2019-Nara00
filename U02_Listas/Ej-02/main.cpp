#include <iostream>
#include "../Lista/Lista.h"
using namespace std;

int main() {
    Lista<float> l;
    l.insertarPrimero(7);
    l.insertarPrimero(6);
    l.insertarPrimero(5);
    l.insertarPrimero(3);
    l.insertarPrimero(2);
    float dato;
    int pos;
    std::cout << "Ejercicio 01/02\n" << std::endl;
    cout<<"Ingrese su nuevo dato";
    cin>>dato;
    cout<<"\nIngrese donde quiere colocarlo (-1, 0, +1)";
    cin>>pos;
    switch (pos)
    {
        case -1:
            l.insertarPrimero(dato);
            break;
        case 1:
            l.insertarUltimo(dato);
            break;
        case 0:
            l.insertarMedio(dato);
            break;
    }
    l.mostrarElemOrden();
    return 0;
}