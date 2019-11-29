//
// Created by Abril on 15/10/2019.
//
#include <iostream>
using namespace std;
void imparesMenores(int n)
{
    if (n==1)
    {
        cout<<n;
        return;
    }
    else
    {
        if ((n%2)==0)
            imparesMenores(n-1);
        else
        {
            cout<<n<<endl;
            imparesMenores(n-2);
        }

    }

}

int main()
{
    imparesMenores(26);
}

