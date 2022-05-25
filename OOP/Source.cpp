#include "Header.h"
/*khởi tạo giá trị cho mảng*/
void setArrayAuto(int A[], int n) {
	for (int i = 0; i < n; i++) {
		A[i] = rand() % 100000 + 0;
	}
}
int getMax(int A[], int n) {
	int max = A[0];
	for (int i = 0; i < n; i++)
	{
		if (A[i] > max)
			max = A[i];
	}
	return max;
}