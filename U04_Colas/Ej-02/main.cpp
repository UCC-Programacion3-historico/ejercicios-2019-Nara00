#include <iostream>
//#include <stdio.h>
//#include <stdlib.h>
#include "../Cola/Cola.h"
#include "C:\Users\Abril\Documents\Facu\2doS-Segundo\Programacion-III\ejercicios-2019-Nara00\U03_Pilas\Pila\Pila.h"

using namespace std;

int main() {
    std::cout << "Ejercicio 04/02\n" << std::endl;
    char frase[70];
    Pila<char> pila;
    Cola<char> cola;
    cout<<"\nIngrese su frase: ";
    cin.getline(frase, 70);
    for (int i=0; frase[i]!= '\0'; i++)
    {
        if (frase[i]!='.' && frase[i]!=' '&& frase[i]!=',')
        {
            pila.push(frase[i]);
            cola.encolar(frase[i]);
        }
    }

    while (!pila.esVacia())
    {
        if (pila.pop()!=cola.desencolar())
        {cout<<"No es palindromo";
        return 0;}
    }
    cout<<"Es palindromo";
    return 0;
}