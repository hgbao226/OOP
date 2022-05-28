#include "Header.h"

void MergeSort(int A[], int left, int mid, int right)
{
    int n1 = mid - left + 1;
    int n2 = right - mid;
    int* LeftArr = new int[n1];
    int* RightArr = new int[n2];
    for (int i = 0; i < n1; i++)
        LeftArr[i] = A[left + i];
    for (int i = 0; i < n2; i++)
        RightArr[i] = A[mid + 1 + i];
    int i = 0, j = 0, current = left;
    while (i < n1 && j < n2)
        if (LeftArr[i] <= RightArr[j])
            A[current++] = LeftArr[i++];
        else
            A[current++] = RightArr[j++];
    while (i < n1)
        A[current++] = LeftArr[i++];
    while (j < n2)
        A[current++] = RightArr[j++];
}
void MergeSortDE(int A[], int left, int mid, int right)
{
    int n1 = mid - left + 1;
    int n2 = right - mid;
    int* LeftArr = new int[n1];
    int* RightArr = new int[n2];
    for (int i = 0; i < n1; i++)
        LeftArr[i] = A[left + i];
    for (int i = 0; i < n2; i++)
        RightArr[i] = A[mid + 1 + i];
    int i = 0, j = 0, current = left;
    while (i < n1 && j < n2)
        if (LeftArr[i] > RightArr[j])
            A[current++] = LeftArr[i++];
        else
            A[current++] = RightArr[j++];
    while (i < n1)
        A[current++] = LeftArr[i++];
    while (j < n2)
        A[current++] = RightArr[j++];
}

void MergeS(int A[], int left, int right,int ch)
{
    if (left >= right)
        return;
    int mid = left + (right - left) / 2;
    MergeS(A, left, mid, ch);
    MergeS(A, mid + 1, right, ch);
    if (ch == 1)
    MergeSort(A, left, mid, right);
    MergeSortDE(A, left, mid, right);
    output(A);
}

void Merge_Sort(int A[], int n)
{
    system("cls");
    int ch = 0;
    if (!Start())
        return;
    do
    {
        cout << "1. Sap xep tang dan\n2. Sap xep giam dan\n3. Quay lai!\n";
        cin >> ch;
        if (ch == 1)
        {
            if (!Start())
                return;
            MergeS(A, 0, n - 1, ch);
        }
        if (ch == 2)
        {
            if (!Start())
                return;
            MergeS(A, 0, n - 1, ch);
        }
        if (ch == 3)
            return;
    } while (ch != 1 && ch != 2 && ch != 3);
}