#include "Header.h"
//trả về giá trị max trong mảng
vector<int> a;
vector<int> b;
vector<int> c;
void input1(int A[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "A[" << i << "]= ";
		cin >> A[i];
		a.push_back(A[i]);
	}
}
void input2(int A[], int n)
{
	for (int i = 0; i < n; i++)
	{
		A[i] = rand() % 100000 + 0;
		a.push_back(A[i]);
	}
}
void input3(int A[])
{
	ifstream ifs("data.txt");
	for (int i = 0; i < 20000; i++)
	{
		ifs >> A[i];
		c.push_back(A[i]);
	}
	ifs.close();
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
			input1(A, n);
			break;
		case 2:
			cout << "Nhap so phan tu cua day: ";
			cin >> n;
			input2(A, n);
			break;
		case 3:
			input3(A);
			break;
		default:
			break;
		}
	} while (ch != 4);
}
void chose(int A[])
{
	int ch;

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
		default:
			break;
		}
	} while (ch != 13);
}
void Menu()
{
	int A[50000];
	int ch;
	do
	{
		system("cls");
		cout << "\n1.Khoi tao day so\n2.Chon thuat toan sap xep\n3.Thoat!!\n";
		cin >> ch;
		switch (ch)
		{
		case 1:
			input(A);
			break;
		case 2:
			chose(A);
			break;
		default:
			break;
		}
	} while (ch != 3);
}
