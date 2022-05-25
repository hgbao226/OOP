#include "Header.h"
void RadixSort(int arr[], int n)
{
    int m = getMax(arr, n);
    for (int div = 1; m / div > 0; div *= 10)
        CountingSort(arr, n, div);
}