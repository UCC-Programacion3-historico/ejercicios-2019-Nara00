#include <iostream>
#include "../Pila/Pila.h"

using namespace std;

int main() {
    cout << "Ejercicio 03/04\n" << endl;
    Pila<char> func;
    char arr[50];
    cout<<"Ingrese función matemática: ";
    cin>> arr;
    for (int i=0; arr[i] != '\0'; i++)
    {
        if (arr[i]=='('||arr[i]=='['||arr[i]=='{')
            func.push(arr[i]);
        if (arr[i]==')')
        {
            if (func.pop()!='(')
            {
                cout<<"\nNo correlation";
                return 0;
            }
        }
        if (arr[i]==']')
        {
            if (func.pop()!='[')
            {
                cout<<"\nNo correlation";
                return 0;
            }
        }
        if (arr[i]=='}')
        {
            if (func.pop()!='{')
            {
                cout<<"\nNo correlation";
                return 0;
            }
        }

    }
    cout<<"\nCorrelation";
    return 1;

}