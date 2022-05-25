#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <time.h>
#include <vector>
#include <Windows.h>
using namespace std;
//1
void SelectionSort(int A[], int n);
//2

//3
void InsertionSort(int A[], int n);
//4

//5
void BubbleSort(int A[], int n);
//6

//7

//8
void CountingSort(int A[], int n);
void CountingSort(int A[], int n, int div);
//9
int getMax(int A[], int n);//lấy giá trị lớn nhất trong mảng
void RadixSort(int A[], int n);
//10
void heapify(int A[], int n, int i);
void HeapSort(int A[], int n);
//11
int partition(int A[], int low, int high);
void QuickSort(int A[], int n);
//12
void Merge(int A[], int left, int mid, int right);
void MergeS(int A[], int left, int right);
void MergeSort(int A[], int n);




void input1(int A[], int n);//nhập trực tiếp từng số
void input2(int A[], int n);//nhập ngẫu nhiên 
void input3(int A[], int n);//nhập qua file
void input(int A[]);

void chose(int A[]);
void menu();
int getMax(int A[], int n);//trả về giá trị max trong mảng
