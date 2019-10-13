#include <iostream>
#include "../Pila/Pila.h"
#include <string.h>

using namespace std;

int main() {
    std::cout << "Ejercicio 03/01\n" << std::endl;
    Pila<char> p;
    char palabra[100];
    cout<<"\nIngrese su palabra: ";
    cin>>palabra;
    for (int i=0; palabra[i]!= '\0'; i++)
    {
        p.push(palabra[i]);
    }
    while (p.esVacia()!=1)
    {
        cout<<p.peek();
        p.pop();
    }

    return 0;
}