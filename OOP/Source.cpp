#include "Header.h"
int getMax(int A[], int n) {
	int max = A[0];
	for (int i = 0; i < n; i++) {
		if (A[i] > max)
			max = A[i];
	}
	return max;
}
void output(int A[]) {
	if (speed == 1)
		output1(A);
	if (speed == 2)
		output2(A);
	if (speed == 3)
		output3(A);
}
void output1(int A[]) {
	cout << endl;
	for (int i = 0; i < arrCount; i++)
		cout << A[i] << " ";
	Sleep(200);
}
void output2(int A[]) {
	cout << endl;
	for (int i = 0; i < arrCount; i++)
		cout << A[i] << " ";
	Sleep(500);
}
void output3(int A[]) {
	cout << endl;
	for (int i = 0; i < arrCount; i++)
		cout << A[i] << " ";
	Sleep(1000);
}
void input_manual(int A[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "A[" << i << "]= ";
		cin >> A[i];
		arrCount++;
	}
	cout << "Mang da nhap: ";
	for (int i = 0; i < arrCount; i++) {
		cout << A[i] << " ";
	}
	cout << endl;
	Sleep(5000);
}
void input_random(int A[], int n)
{
	for (int i = 0; i < n; i++)
	{
		A[i] = rand() % 100000 + 0;
		arrCount++;
	}
	cout << "Mang da nhap: ";
	for (int i = 0; i < arrCount; i++) {
		cout << A[i] << " ";
	}
	cout << endl;
	Sleep(5000);
}
void input_from_file(int A[])
{
	ifstream ifs("data.txt");
	for (int i = 0;!ifs.eof(); i++)
	{
		ifs >> A[i];
		arrCount++;
	}
	ifs.close();
	for (int i = 0; i < arrCount; i++) {
		cout << A[i] << " ";
	}
	cout << endl;
	Sleep(5000);
}
void input(int A[])
{
	int ch;
	int n;
	do
	{
		system("cls");
		cout << "\n1.Nhap truc tiep tung phan tu\n2.Nhap ngau nhien\n3.Nhap qua file\n4.Quay lai!\n";
		cin >> ch;
		switch (ch)
		{
		case 1:
			cout << "Nhap so phan tu cua day: ";
			cin >> n;
			input_manual(A, n);
			break;
		case 2:
			cout << "Nhap so phan tu cua day: ";
			cin >> n;
			input_random(A, n);
			break;
		case 3:
			input_from_file(A);
			break;
		default:
			break;
		}
	} while (ch < 1 || ch > 4);
}
void chose(int A[])
{
	int ch = 0;
	do {
		cout << "Chon toc do thuc hien thuat toan\n1. Nhanh\n2. Binh thuong\n3. Cham\n";
		cin >> speed;
	} while (speed < 1 || speed > 3);
	do
	{
		system("cls");
		cout << "\n1.Selection Sort\n2.InterchangeSort\n3.InsertionSort\n4.Binary Insersion Sort\n5.Bubble Sort\n6.Shaker Sort";
		cout << "\n7.Shell Sort\n8.Counting Sort\n9.Radix Sort\n10.Heap Sort\n11.Quick Sort\n12.Merge Sort\n13.Quay lai!\n";
		cin >> ch;
		switch (ch)
		{
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
			Heap_Sort(A, arrCount);
			output(A);
		default:
			break;
		}
	} while (ch < 1 || ch > 13);
}
void menu()
{
	int A[50000];
	int ch;
	do
	{
		system("cls");
		cout << "\n1.Nhap day so\n2.Chon thuat toan sap xep\n3.Thoat!!\n";
		cin >> ch;
		switch (ch)
		{
		case 1:
			input(A);
			break;
		case 2:
			if (arrCount == 0) {
				cout << "Mang rong!!!" << endl;
				system("pause");
				continue;
			}
			chose(A);
			break;
		default:
			break;
		}
	} while (ch != 3);
}
