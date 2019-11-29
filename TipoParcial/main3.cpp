#include <iostream>

using namespace std;

void Aste(int cant)
{
    if(cant==0)
    {
        return;
    }
    else
    {
        Aste(cant-1);
        cout<<"*";
    }
}

int main()
{
    Aste(12);
}
