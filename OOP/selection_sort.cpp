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
    cout << "Mang sau khi sap xep: ";
    output(A);
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
    cout << "Mang sau khi sap xep: ";
    output(A);
}
void Selection_Sort(int A[], int n)
{
    int ch;
    do
    {
        cout << "\n1.Sap xep tang dan\n2.Sap xep giam dan\n3.Quay lai!\n";
        cin >> ch;
        switch (ch)
        {
        case 1:
            SelectionSort(A, n);
            break;
        case 2:
            SelectionSortDE(A, n);
            break;
        default:
            break;
        }
    } while (ch != 3);
}
