#include "Header.h"

void SelectionSort(int A[], int n)
{
    int min;
    for (int i = 0; i < n - 1; i++)
    {
        min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (A[j] < A[min])  min = j;
        }
        swap(A[i], A[min]);
        output(A);
    }
}
void SelectionSortDE(int A[], int n)
{
    int max;
    for (int i = 0; i < n - 1; i++)
    {
        max = i;
        for (int j = i + 1; j < n; j++)
        {
            if (A[j] > A[max])  max = j;
        }
        swap(A[i], A[max]);
        output(A);
    }
}
void Selection_Sort(int A[], int n)
{
    system("cls");
    int ch = 0;
    do
    {
        cout << "1. Sap xep tang dan\n2. Sap xep giam dan\n3. Quay lai!\n";
        cin >> ch;
        if (ch == 1)
            SelectionSort(A, n);
        if (ch == 2)
            SelectionSortDE(A, n);
        if (ch == 3)
            return;
    } while (ch != 1 && ch != 2 && ch != 3);
}
