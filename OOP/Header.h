#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <Windows.h>
static int arrCount = 0;
static int speed = 3;
using namespace std;
//1
void SelectionSort(int A[], int n);
void SelectionSortDE(int A[], int n);
void Selection_Sort(int A[], int n);
//2
void InterchangeSort(int arr[], int n);
void InterchangeSortDE(int arr[], int n);
void Interchange_Sort(int A[], int n);
//3
void InsertionSort(int A[], int n);
void InsertionSortDE(int A[], int n);
void Insertion_Sort(int A[], int n);
//4

//5
void BubbleSort(int A[], int n);
void BubbleSortDE(int A[], int n);
void Bubble_Sort(int A[], int n);
//6
void ShakerSort(int a[], int n);
void ShakerSortDE(int a[], int n);
void Shaker_Sort(int a[], int n);

//7

//8
void Counting_Sort(int A[], int n);
void CountingSort(int A[], int n);
void CountingSortDE(int A[], int n);
void CountingSort(int A[], int n, int div);
void CountingSortDE(int A[], int n, int div);
//9
void RadixSort(int A[], int n);
void RadixSortDE(int A[], int n);
void Radix_Sort(int A[], int n);
//10
void heapify(int A[], int n, int i);
void HeapSort(int A[], int n);
void heapifyDE(int A[], int n, int i);
void HeapSortDE(int A[], int n);
void Heap_Sort(int A[], int n);
//11
int partition(int A[], int low, int high);
void QuickSort(int A[], int n);
//12
void Merge(int A[], int left, int mid, int right);
void MergeS(int A[], int left, int right);
void MergeSort(int A[], int n);



void input_manual(int A[], int n);//nhập trực tiếp từng số
void input_random(int A[], int n);//nhập ngẫu nhiên 
void input_from_file(int A[]);//nhập qua file
void input(int A[]);

void chose(int A[]);
void menu();
int getMax(int A[], int n);//trả về giá trị max trong mảng
void output(int A[]);
void outputFast(int A[]);
void outputNormal(int A[]);
void outputSlow(int A[]);
void swap(int& a, int& b);
void request();
