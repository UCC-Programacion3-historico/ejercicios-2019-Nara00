#include <iostream>
#include "../Cola/Cola.h"

using namespace std;

int main() {
    std::cout << "Ejercicio 04/01\n" << std::endl;
    Cola<char> colaA, colaB;
    char A[50], B[50];
    cout<<"Ingrese: ";
    cin>>A>>B;
    for (int i=0; A[i]!='\0'; i++)
    {
        colaA.encolar(A[i]);
    }
    for (int i=0; B[i]!='\0'; i++)
    {
        colaB.encolar(B[i]);
    }
    for (int i=0; !colaB.esVacia() && !colaA.esVacia(); i++)
    {
        if(colaA.desencolar()!=colaB.desencolar())
        {cout<<"\nDistintas";
        return 0;}
    }
    if (colaB.esVacia()!=colaA.esVacia())
    {
        cout<<"\nDistintas";
        return 0;
    }
    cout<<"\nIguales";
    return 1;
}