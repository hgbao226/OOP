#include "Header.h"

void InsertionSort(int A[], int n)
{
    int p, j;
    for (int i = 1; i < n; i++)
    {
        p = A[i];
        j = i - 1;
        while (j >= 0 && A[j] > p)
        {

            A[j + 1] = A[j];
            j--;
        }
        A[j + 1] = p;
        output(A);
    }
}
void InsertionSortDE(int A[], int n)
{
    int p, j;
    for (int i = 1; i < n; i++)
    {
        p = A[i];
        j = i - 1;
        while (j >= 0 && A[j] < p)
        {

            A[j + 1] = A[j];
            j--;
        }
        A[j + 1] = p;
        output(A);
    }
}

void Insertion_Sort(int A[], int n)
{
    system("cls");
    int ch = 0;
    do
    {
        cout << "1. Sap xep tang dan\n2. Sap xep giam dan\n3. Quay lai!\n";
        cin >> ch;
        if (ch == 1)
            InsertionSort(A, n);
        if (ch == 2)
            InsertionSortDE(A, n);
        if (ch == 3)
            return;
    } while (ch != 1 && ch != 2 && ch != 3);
}
