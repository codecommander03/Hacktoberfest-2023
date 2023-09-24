// Optimized implementation of Bubble sort
// Time Complexity: O(n^2)
// Space Complexity: O(1)

#include <iostream>
using namespace std;

// An optimized version of Bubble Sort
void bubbleSort(int arr[], int n) {
	int i, j;
	bool swapped;
	for (i = 0; i < n - 1; i++) {
		swapped = false;
		for (j = 0; j < n - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				swap(arr[j], arr[j + 1]);
				swapped = true;
			}
		}

		// If no two elements were swapped by inner loop, then break
		if (swapped == false) {
			break;
		}
	}
}

// Function to print an array
void printArray(int arr[], int size) {
	int i;
	for (i = 0; i < size; i++) {
		cout << " " << arr[i];
	}
}

int main()
{
	int arr[] = { 5, 18, 53, -6, 23, 14, 100, 40, 89, 45, 67, 10, 76 };
	int n = sizeof(arr) / sizeof(arr[0]);

	cout << "Given array: ";
	printArray(arr, n);

	// Function call
	bubbleSort(arr, n);

	cout << "\nSorted array: ";
	printArray(arr, n);
	return 0;
}