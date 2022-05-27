#include "Header.h"

void CountingSort(int A[], int n) {
    int B[50000]{};
    int* index=new int[getMax(A,n)];
    int max = getMax(A, n);
    for (int i = 0; i <= max; ++i)
        index[i] = 0;
    for (int i = 0; i < n; i++) 
        index[A[i]]++;
    for (int i = 1; i <= max; i++) 
        index[i] += index[i - 1];
    for (int i = n - 1; i >= 0; i--) {
        B[index[A[i]] - 1] = A[i];
        index[A[i]]--;
        output(B);
    }
    for (int i = 0; i < n; i++)
        A[i] = B[i];
}

void CountingSort(int arr[], int n, int div)
{
    int* out = new int[n];
    int i, bucket[10] = { 0 };
    for (i = 0; i < n; i++)
        bucket[(arr[i] / div) % 10]++;
    for (i = 1; i < 10; i++)
        bucket[i] += bucket[i - 1];
    for (i = n - 1; i >= 0; i--)
    {
        out[bucket[(arr[i] / div) % 10] - 1] = arr[i];
        bucket[(arr[i] / div) % 10]--;
    }
    for (i = 0; i < n; i++)
        arr[i] = out[i];
}