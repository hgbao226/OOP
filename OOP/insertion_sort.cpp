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
        cout << endl;
        for (int k = 0; k < n; k++)
            cout << A[k] << " ";
        Sleep(1000);
        system("cls");
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
        cout << endl;
        for (int k = 0; k < n; k++)
            cout << A[k] << " ";
        Sleep(1000);
        system("cls");
    }
}

void Insertion_Sort(int A[], int n)
{
    int ch;
    do
    {
        cout << "\n1.Sap xep tang dan\n2.Sap xep giam dan\n3.Quay lai!\n";
        cin >> ch;
        switch (ch)
        {
        case 1:
            InsertionSort(A, n);
            break;
        case 2:
            InsertionSortDE(A, n);
            break;
        default:
            break;
        }
    } while (ch != 3);
}
