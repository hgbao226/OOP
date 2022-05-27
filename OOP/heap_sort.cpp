#include "Header.h"

void heapify(int A[], int n, int i)
{
    int left = 2 * i + 1;
    int right = 2 * i + 2;
    int Max = i;

    if (left < n && A[left] < A[Max])
        Max = left;
    if (right < n && A[left] < A[Max])
        Max = right;
    if (Max != i)
    {
        swap(A[i], A[Max]);
        heapify(A, n, Max);
    }
}
void HeapSort(int A[], int n)
{
    for (int i = n / 2 - 1; i >= 0; i--)
    {
        heapify(A, n, i);
        output(A);
    }
    for (int j = n - 1; j > 0; j--)
    {
        swap(A[j], A[0]);
        heapify(A, j, 0);
        output(A);
    }
}

void heapifyDE(int A[], int n, int i)
{
    int left = 2 * i + 1;
    int right = 2 * i + 2;
    int Min = i;

    if (left < n && A[left] > A[Min])
        Min = left;
    if (right < n && A[left] > A[Min])
        Min = right;

    if (Min != i)
    {
        swap(A[i], A[Min]);
        heapify(A, n, Min);
    }
}
void HeapSortDE(int A[], int n)
{
    for (int i = n / 2 - 1; i >= 0; i--)
    {
        heapifyDE(A, n, i);
    }
    for (int j = n - 1; j > 0; j--)
    {
        swap(A[j], A[0]);
        heapifyDE(A, j, 0);
    }
}


void Heap_Sort(int A[], int n)
{
    system("cls");
    int ch = 0;
    do
    {
        cout << "1. Sap xep tang dan\n2. Sap xep giam dan\n3. Quay lai!\n";
        cin >> ch;
        if (ch == 1)
            HeapSort(A, n);
        if (ch == 2)
            HeapSortDE(A, n);
        if (ch == 3)
            return;
    } while (ch != 1 && ch != 2 && ch != 3);
}
