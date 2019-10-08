#include <iostream>
#include "digitos.h"

using namespace std;

unsigned int cociente(unsigned int a, unsigned int b)
{
    if (a<b)
        return 0;
    else
        return 1+cociente(a-b,b);
}


unsigned int resto(unsigned int a, unsigned int b)
{
    if (a<b)
    {return a;}
    else
    {
        resto(a-b, b);
    }
}


void escribir_espaciado(unsigned int num)
{
   if (num<10)
   {
       cout<<num<<" ";
       return;
   }
   else
   {
       escribir_espaciado(cociente(num, 10));
       cout<<resto(num, 10)<<" ";
   }

}
