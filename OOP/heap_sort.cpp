#include "Header.h"

void heapify(int A[], int n, int i)
{
    int max = i;
    int l = 2 * i + 1;
    int r = 2 * i + 2;
    if (l < n && A[l] > A[max])
        max = l;
    if (r < n && A[r] > A[max])
        max = r;
    if (max != i) {
        swap(A[i], A[max]);
        heapify(A, n, max);
    }
}
void HeapSort(int A[], int n)
{
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(A, n, i);
    for (int i = n - 1; i > 0; i--) {
        swap(A[0], A[i]);
        heapify(A, i, 0);
        output(A);
    }
}

void heapifyDE(int A[], int n, int i)
{
    int min = i;
    int l = 2 * i + 1;
    int r = 2 * i + 2;
    if (l < n && A[l] < A[min])
        min = l;
    if (r < n && A[r] < A[min])
        min = r;
    if (min != i) {
        swap(A[i], A[min]);
        heapifyDE(A, n, min);
    }
}

void HeapSortDE(int A[], int n)
{
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(A, n, i);
    for (int i = n - 1; i >= 0; i--) {
        swap(A[0], A[i]);
        heapifyDE(A, i, 0);
        output(A);
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
