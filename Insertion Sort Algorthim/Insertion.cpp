#include<iostream>
using namespace std;
void insertion(int Arr1[], int row);
void Print(int Arr[], int row);
int main() {
	const int size=5;
	int Arr[size];
	for (int i = 0; i < size; i++) {
		cout << "Item-" << i + 1 << ":";
		cin >> Arr[i];
	}
	// Insertion
	insertion(Arr, size);
	// print
	Print(Arr, size);
	return 0;
}
void insertion(int Arr1[], int row) {
	int key, j;
	for (int i = 1; i < row; i++) {
		key = Arr1[i];
		j = i - 1;
		while (j >= 0 && Arr1[j] > key) {
			Arr1[j + 1] = Arr1[j];
			j--;
		}
		Arr1[j + 1] = key;
	}
}
void Print(int Arr2[], int row) {
	for (int i = 0; i < row; i++) {
		cout << "item-" << i + 1 << ":" << Arr2[i] << "\n";
	}
}






