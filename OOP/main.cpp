#include "Header.h"

void swap(int& a, int& b) {
	int x = a;
	a = b;
	b = x;
}
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
		outputFast(A);
	if (speed == 2)
		outputNormal(A);
	if (speed == 3)
		outputSlow(A);
}
void outputFast(int A[]) {
	system("cls");
	cout << "Mang: ";
	for (int i = 0; i < arrCount; i++)
		cout << A[i] << " ";
	Sleep(100);
}
void outputNormal(int A[]) {
	system("cls");
	cout << "Mang: ";
	for (int i = 0; i < arrCount; i++)
		cout << A[i] << " ";
	Sleep(500);
}
void outputSlow(int A[]) {
	system("cls");
	cout << "Mang: ";
	for (int i = 0; i < arrCount; i++)
		cout << A[i] << " ";
	Sleep(1000);
}
void request()
{
	bool flag = false;
	char key;
	if (_kbhit())
	{
		key = _getch();
		if (key == 32)
		{
			if (flag == false)
			{
				cout << "\nNhan Spacebar de tiep tuc!\n";
			}
			flag = !flag;
		}
		else if (key == 27)
		{
			cout << "\nDang huy...";
			Sleep(2000);
			return;
		}
	}
	if (flag)
	{
		char key1 = _getch();
		if (key1 == 27)
		{
			Sleep(2000);
			return;
		}
		else
		{
			Sleep(1000);
		}
		flag = !flag;
	}
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
	Sleep(1000);
}
void input_random(int A[], int n)
{
	for (int i = 0; i < n; i++)
	{
		A[i] = rand() % 1000 + 0;
		arrCount++;
	}
	cout << "Mang da nhap: ";
	for (int i = 0; i < arrCount; i++) {
		cout << A[i] << " ";
	}
	cout << endl;
	Sleep(1000);
}
void input_from_file(int A[])
{
	arrCount = 0;
	for (int i = 0; i < 50000; i++)
		A[i] = 0;
	ifstream ifs("data.txt");
	for (int i = 0;!ifs.eof(); i++)
	{
		ifs >> A[i];
		arrCount++;
	}
	ifs.close();
	cout << "Mang da nhap: ";
	for (int i = 0; i < arrCount; i++) {
		cout << A[i] << " ";
	}
	cout << endl;
	Sleep(1000);
}
void input(int A[])
{
	int ch = 0;
	int n;
	do
	{
		system("cls");
		cout << "1. Nhap truc tiep tung phan tu\n2. Nhap ngau nhien\n3. Nhap qua file\n4. Quay lai!\n";
		cin >> ch;
		switch (ch)
		{
		case 1:
			system("cls");
			cout << "Nhap so phan tu cua day: ";
			cin >> n;
			arrCount = 0;
			for (int i = 0; i < n; i++)
				A[i] = 0;
			input_manual(A, n);
			break;
		case 2:
			system("cls");
			cout << "Nhap so phan tu cua day: ";
			cin >> n;
			arrCount = 0;
			for (int i = 0; i < n; i++)
				A[i] = 0;
			input_random(A, n);
			break;
		case 3:
			system("cls");
			input_from_file(A);
			break;
		default:
			break;
		}
	} while (ch <= 0 || ch >= 5);
}
void chose(int A[])
{
	int ch = 0;
	do {
		system("cls");
		cout << "Chon toc do thuc hien thuat toan\n1. Nhanh\n2. Binh thuong\n3. Cham\n";
		cin >> speed;
	} while (speed < 1 || speed > 3);
	do
	{
		system("cls");
		cout << "1. Selection Sort\n2. Interchange Sort\n3. Insertion Sort\n4. Binary Insersion Sort\n5. Bubble Sort\n6. Shaker Sort\n7. Shell Sort\n8. Counting Sort\n9. Radix Sort\n10. Heap Sort\n11. Quick Sort\n12. Merge Sort\n13. Quay lai\n";
		cin >> ch;
		switch (ch)
		{
		case 1:
			Selection_Sort(A, arrCount);
			system("cls");
			cout << "Mang: ";
			output(A);
			system("pause");
			break;
		case 2:
			Interchange_Sort(A, arrCount);
			system("cls");
			cout << "Mang: ";
			output(A);
			system("pause");
			break;
		case 3:
			Insertion_Sort(A, arrCount);
			system("cls");
			cout << "Mang: ";
			output(A);
			system("pause");
			break;
		case 4:
			break;
		case 5:
			Bubble_Sort(A, arrCount);
			system("cls");
			cout << "Mang: ";
			output(A);
			system("pause");
			break;
		case 6:
			Shaker_Sort(A, arrCount);
			system("cls");
			cout << "Mang: ";
			output(A);
			system("pause");
			break;
			break;
		case 7:
			break;
		case 8:
			Counting_Sort(A, arrCount);
			system("cls");
			cout << "Mang: ";
			output(A);
			system("pause");
			break;
		case 9:
			Radix_Sort(A, arrCount);
			system("cls");
			cout << "Mang: ";
			output(A);
			system("pause");
			break;
		case 10:
			break;
		case 11:
			break;
		case 12:
			MergeSort(A, arrCount);
			system("cls");
			cout << "Mang: ";
			output(A);
			system("pause");
			break;
		default:
			menu();
			break;
		}
	} while (ch <= 0 || ch >= 14);
}
void menu()
{
	int A[50000]{};
	int ch = 0;
	do
	{
		system("cls");
		cout << "1. Nhap day so\n2. Chon thuat toan sap xep\n3. Thoat!!\n";
		cin >> ch;
		switch (ch)
		{
		case 1:
			input(A);
			break;
		case 2:
			if (arrCount == 0) {
				cout << "!!! Mang rong !!!" << endl;
				system("pause");
				continue;
			}
			chose(A);
			break;
		default:
			return;
			break;
		}
	} while (ch != 3);

}
