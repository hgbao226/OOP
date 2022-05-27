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
		outputFast(A);
	if (speed == 2)
		outputNormal(A);
	if (speed == 3)
		outputSlow(A);
}
void outputFast(int A[]) {
	system("cls");
	cout << endl;
	cout << "Mang dang duoc sap xep: ";
	for (int i = 0; i < arrCount; i++)
		cout << A[i] << " ";
	Sleep(100);
}
void outputNormal(int A[]) {
	system("cls");
	cout << endl;
	cout << "Mang dang duoc sap xep: ";
	for (int i = 0; i < arrCount; i++)
		cout << A[i] << " ";
	Sleep(500);
}
void outputSlow(int A[]) {
	system("cls");
	cout << endl;
	cout << "Mang dang duoc sap xep: ";
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
	Sleep(3000);
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
	Sleep(3000);
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
	Sleep(3000);
}
void input(int A[])
{
	int ch = 0;
	int n;
	do
	{
		system("cls");
		cout << "\n1. Nhap truc tiep tung phan tu\n2. Nhap ngau nhien\n3. Nhap qua file\n4. Quay lai!\n";
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
	} while (ch <= 0 || ch >= 5);
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
		cout << "\n1. Selection Sort\n2. InterchangeSort\n3. InsertionSort\n4. Binary Insersion Sort\n5. Bubble Sort\n6. Shaker Sort\n7. Shell Sort\n8. Counting Sort\n9. Radix Sort\n10. Heap Sort\n11. Quick Sort\n12. Merge Sort\n13. Quay lai\n";
		cin >> ch;
		switch (ch)
		{
		case 1:
			break;
		case 2:
			break;
		case 3:
			Insertion_Sort(A, arrCount);
			system("cls");
			cout << "Mang da duoc sap xep: ";
			output(A);
			system("pause");
			break;
		case 4:
			break;
		case 5:
			Bubble_Sort(A, arrCount);
			system("cls");
			cout << "Mang da duoc sap xep: ";
			output(A);
			system("pause");
			break;
		case 6:
			break;
		case 7:
			break;
		case 8:
			break;
		case 9:
			break;
		case 10:
			break;
		case 11:
			break;
		case 12:
			MergeSort(A, arrCount);
			system("cls");
			cout << "Mang da duoc sap xep: ";
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
		cout << "\n1. Nhap day so\n2. Chon thuat toan sap xep\n3. Thoat!!\n";
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
	} while (ch != 3 || ch != 2 || ch != 1);

}
