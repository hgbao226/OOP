#include"Header.h"

void InterChangeSort(int A[], int n)
{
    for (int i = 0; i < n - 1; i++)
        for (int j = i+1; j < n; j++)
            if (A[i] > A[j])
                swap(A[j], A[j + 1]);
}
void InterChangeSortDE(int A[], int n)
{
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if (A[i] < A[j])
                swap(A[j], A[j + 1]);
}
void InterChange_Sort(int A[], int n)
{
    int ch;
    do
    {
        cout << "\n1.Sap xep tang dan\n2.Sap xep giam dan\n3.Quay lai!\n";
        cin >> ch;
        switch (ch)
        {
        case 1:
            InterChangeSort(A, n);
            break;
        case 2:
            InterChangeSortDE(A, n);
            break;
        default:
            break;
        }
    } while (ch != 3);
}