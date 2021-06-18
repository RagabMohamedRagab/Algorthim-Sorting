/*
 Quick Sort Algorthim 
*/
#include<iostream>
void QuickSort(int Arr[], int L, int R);
int QuickSortExe(int Arr[], int L,  int R);
void Swap(int* a, int* b);
void Print(int Arr[],int size);
using namespace std;
int main() {
	int Arr[] = { 60,50,30,10,20 };
	int size = sizeof(Arr) / sizeof(Arr[0]);
	QuickSort(Arr, 0, size - 1);
	Print(Arr,size);
}
// Call Method
void QuickSort(int Arr[], int L, int R) {
	if (L < R) {
	int pivot=QuickSortExe(Arr, L, R);
		QuickSort(Arr, L,pivot);
		QuickSort(Arr, pivot+1,R);
	}
}
//Execute Quick Sort
int QuickSortExe(int Arr[], int L, int R) {
	int i = L;
	int j = R;
	int pivot = L;
	while (true) {
		while (Arr[pivot] < Arr[j]) {
			j--;
		}
		if (i == j) {
			break;
		}
		else if (Arr[pivot] > Arr[j]) {
			Swap(&Arr[pivot], &Arr[j]);
			pivot = j;
			i++;
		}
		while (Arr[pivot] > Arr[i]) {
			i++;
		}
		if (i == j) {
			break;
		}
		else if (Arr[pivot] < Arr[i]) {
			Swap(&Arr[pivot], &Arr[i]);
			pivot = i;
			j--;
		}

		return pivot;
	}
}
// Swap
void Swap(int* a, int* b)
{
	int t = *a;
	*a = *b;
	*b = t;
}

//To Print Array
void Print(int Arr[], int size) {
	for (int i = 0; i < size; i++) {
		cout << "item -" << i + 1 << ":" << Arr[i] << "\n";
	}
}