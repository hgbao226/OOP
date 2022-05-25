#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <time.h>
#include <vector>
using namespace std;

void BubbleSort(int A[], int n);

void SelectionSort(int A[], int n);

void InsertionSort(int A[], int n);

void heapify(int A[], int n, int i);
void HeapSort(int A[], int n);

void Merge(int A[], int left, int mid, int right);
void MergeS(int A[], int left, int right);
void MergeSort(int A[], int n);

int partition(int A[], int low, int high);
void QuickSort(int A[], int n);

void CountingSort(int A[], int n);
void CountingSort(int A[], int n, int div);

void RadixSort(int arr[], int n);

int getMax(int A[], int n);//lấy giá trị lớn nhất trong mảng

void setArrayAuto(int A[], int n);//tự set mảng random

void input1(int A[], int n);
void input2(int A[], int n);
void input3(int A[], int n);
void input(int A[]);