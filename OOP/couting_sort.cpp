#include "Header.h"

void CountingSort(int A[], int n) {
    int B[50000]{};
    int* index=new int[getMax(A,n)];
    int max = getMax(A, n);
    for (int i = 0; i <= max; ++i)
        index[i] = 0;
    for (int i = 0; i < n; i++) 
        index[A[i]]++;
    for (int i = 1; i <= max; i++) 
        index[i] += index[i - 1];
    for (int i = n - 1; i >= 0; i--) {
        B[index[A[i]] - 1] = A[i];
        index[A[i]]--;
    }
    for (int i = 0; i < n; i++) {
        A[i] = B[i];
        output(A);
        request();
    }
}
void CountingSortDE(int A[], int n) {
    int B[50000]{};
    int* index = new int[getMax(A, n)];
    int max = getMax(A, n);
    for (int i = 0; i <= max; ++i)
        index[i] = 0;
    for (int i = 0; i < n; i++)
        index[A[i]]++;
    for (int i = 1; i <= max; i++)
        index[i] += index[i - 1];
    for (int i = n - 1; i >= 0; i--) {
        B[index[A[i]] - 1] = A[i];
        index[A[i]]--;
    }
    for (int i = 0; i < n; i++)
    {
        A[i] = B[n-i-1];
        output(A);
        request();
    }
}

void Counting_Sort(int A[], int n)
{
    system("cls");
    int ch = 0;
    do
    {
        cout << "1. Sap xep tang dan\n2. Sap xep giam dan\n3. Quay lai!\n";
        cin >> ch;
        if (ch == 1)
        {
            if (!Start())
                return;
            CountingSort(A, n);
        }
        if (ch == 2)
        {
            if (!Start())
                return;
            CountingSortDE(A, n);
        }
        if (ch == 3)
            return;
    } while (ch != 1 && ch != 2 && ch != 3);
}

void CountingSort(int A[], int n, int div)
{
    int* B = new int[n];
    int i, index[10]{};
    for (i = 0; i < n; i++)
        index[(A[i] / div) % 10]++;
    for (i = 1; i < 10; i++)
        index[i] += index[i - 1];
    for (i = n - 1; i >= 0; i--)
    {
        B[index[(A[i] / div) % 10] - 1] = A[i];
        index[(A[i] / div) % 10]--;
    }
    for (int i = 0; i < n; i++)
    {
        A[i] = index[i];
        output(A);
    }
}

void CountingSortDE(int A[], int n, int div)
{
    int* B = new int[n];
    int i, index[10]{};
    for (i = 0; i < n; i++)
        index[(A[i] / div) % 10]++;
    for (i = 1; i < 10; i++)
        index[i] += index[i - 1];
    for (i = n - 1; i >= 0; i--)
    {
        B[index[(A[i] / div) % 10] - 1] = A[i];
        index[(A[i] / div) % 10]--;
    }
    for (int i = 0; i < n; i++)
    {
        A[i] = index[n - i - 1];
        output(A);
    }
}