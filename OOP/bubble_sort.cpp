#include "Header.h"

void BubbleSort(int A[], int n)
{
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (A[j] > A[j + 1]) {
                swap(A[j], A[j + 1]);
                output(A);
            }
        }
    }
}
void BubbleSortDE(int A[], int n)
{
    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - i - 1; j++)
            if (A[j] < A[j + 1]) {
                swap(A[j], A[j + 1]);
                output(A);
            }
}
void Bubble_Sort(int A[], int n)
{
    int ch;
    do
    {
        cout << "\n1.Sap xep tang dan\n2.Sap xep giam dan\n3.Quay lai!\n";
        cin >> ch;
        switch (ch)
        {
        case 1:
            BubbleSort(A, n);
            break;
        case 2:
            BubbleSortDE(A, n);
            break;
        default:
            break;
        }
    } while (ch < 1 || ch > 2);
}
