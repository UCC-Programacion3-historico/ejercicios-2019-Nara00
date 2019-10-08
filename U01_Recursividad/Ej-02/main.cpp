#include <iostream>
#include "sumatoria.h"
using namespace std;
int main() {
    std::cout << "Ejercicio 01/02\n" << std::endl;
    int arr[5], t;
    for (int i=0; i<5; i++)
    {
        cin>>t;
        arr[i]=t;
    }
    int r;
    r=sumatoria(arr, 5);
    cout<<"\n"<<r;
    return 0;
}