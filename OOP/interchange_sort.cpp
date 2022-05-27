#include "Header.h"
void InterchangeSort(int A[], int n) {
    int i, j;
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (A[i] > A[j]) {
                swap(A[i], A[j]);
                output(A);
            }
        }
    }
}
void InterchangeSortDE(int A[], int n) {
    int i, j;
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (A[i] < A[j]) {
                swap(A[i], A[j]);
                output(A);
            }
        }
    }
}
void Interchange_Sort(int A[], int n)
{
    system("cls");
    int ch = 0;
    do
    {
        cout << "1. Sap xep tang dan\n2. Sap xep giam dan\n3. Quay lai!\n";
        cin >> ch;
        if (ch == 1)
            InterchangeSort(A, n);
        if (ch == 2)
            InterchangeSortDE(A, n);
        if (ch == 3)
            return;
    } while (ch != 1 && ch != 2 && ch != 3);
}