#include "Header.h"
void ShakerSort(int A[], int n)
{
	int left = 0, right = n - 1, k, i, j;
	while (left < right)
	{
		for (i = left; i < right; i++)
			if (A[i] > A[i + 1]) { 
				swap(A[i], A[i + 1]); 
				k = i; 
			};
		right = k;
		for (j = right; j > left; j--) 
			if (A[j] < A[j - 1]) {
				swap(A[j], A[j - 1]);
				k = j; 
			}
		left = k;
	}
}
void ShakerSortDE(int a[], int n) {
	int left = 0, right = n - 1, k, i, j;
	while (left < right)
	{
		for (i = left; i < right; i++)
			if (a[i] < a[i + 1]) {
				swap(a[i], a[i + 1]);
				k = i;
			};
		right = k;
		for (j = right; j > left; j--)
			if (a[j] > a[j - 1]) {
				swap(a[j], a[j - 1]);
				k = j;
			}
		left = k;
	}
}
void Shaker_Sort(int A[], int n) {
	system("cls");
	int ch = 0;
	if (!Start())
		return ;
	do
	{
		cout << "1. Sap xep tang dan\n2. Sap xep giam dan\n3. Quay lai!\n";
		cin >> ch;
		if (ch == 1)
		{
			if (!Start())
				return;
			ShakerSort(A, n);
		}
		if (ch == 2)
		{
			if (!Start())
				return;
			ShakerSortDE(A, n);
		}
		if (ch == 3)
			return;
	} while (ch != 1 && ch != 2 && ch != 3);
}