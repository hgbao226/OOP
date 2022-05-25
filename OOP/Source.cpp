#include "Header.h"
//trả về giá trị max trong mảng
int getMax(int A[], int n) {
	int max = A[0];
	for (int i = 0; i < n; i++)
	{
		if (A[i] > max)
			max = A[i];
	}
	return max;
}