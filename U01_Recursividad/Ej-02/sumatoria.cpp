#include "sumatoria.h"


int sumatoria(int *arr, unsigned int size)
{
    if (size==1)
        return arr[size-1];
    else
    {
        arr[size-2]=arr[size-2]+arr[size-1];
        sumatoria(arr, size-1);
    }
    return arr[0];
}