#include "Header.h"
void RadixSort(int A[], int n)
{
    int m = getMax(A, n);
    for (int div = 1; m / div > 0; div *= 10) {
        CountingSort(A, n, div);
        output(A);
    }
}
void RadixSortDE(int A[], int n)
{
    int m = getMax(A, n);
    for (int div = 1; m / div > 0; div *= 10) {
        CountingSortDE(A, n, div);
        output(A);
    }
}

void Radix_Sort(int A[], int n)
{
    system("cls");
    int ch = 0;
    do
    {
        cout << "1. Sap xep tang dan\n2. Sap xep giam dan\n3. Quay lai!\n";
        cin >> ch;
        if (ch == 1)
            RadixSort(A, n);
        if (ch == 2)
            RadixSortDE(A, n);
        if (ch == 3)
            return;
    } while (ch != 1 && ch != 2 && ch != 3);
}