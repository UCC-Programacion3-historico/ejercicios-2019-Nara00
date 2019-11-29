#include <iostream>
#include "../Pila/Pila.h"
#include <string.h>
using namespace std;
/*
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
}*/

void invertirFrase(char* frase)
{
    Pila<char*> stack;
    int ubic=0;
    for (int i=0; *(frase+ubic)!='\0'; i++)
    {
        char *aux;
        aux = new char[15];
        for(int j=ubic, jp=0; (*(frase+j)!=' ') && (*(frase+j)!='\0'); j++, jp++, ubic++)
            {
                *(aux+jp)= *(frase+j);
            }
        stack.push(aux);
        delete[] aux;
    }
    while(!stack.esVacia())
    {
        cout<<stack.pop();
    }
}

int main()
{
    char frase[100], *frasep;
    int tamanio;
    cout<<"Inserte frase: \t";
    cin.getline(frase, 100);
    tamanio=strlen(frase);
    frasep= new char[tamanio];
    strcpy(frasep,frase);
    invertirFrase(frasep);
    return 0;
}