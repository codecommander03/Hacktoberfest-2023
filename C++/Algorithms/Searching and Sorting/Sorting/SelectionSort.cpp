// implementation of selection sort
// Time Complexity: O(N^2)
// Space Complexity: O(1)

#include <iostream>
using namespace std;

// Function for Selection sort
void selectionSort(int arr[], int n)
{
	int i, j, min_idx;

	// One by one move boundary of unsorted subarray
	for (i = 0; i < n - 1; i++) {

		// Find the minimum element in unsorted array
		min_idx = i;
		for (j = i + 1; j < n; j++) {
			if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
		}

		// Swap the found minimum element with the first element
		if (min_idx != i) {
            swap(arr[min_idx], arr[i]);
        }
	}
}

// Function to print an array
void printArray(int arr[], int size)
{
	int i;
	for (i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
    cout << endl;
}

int main()
{
	int arr[] = { 75, 98, 23, 14, 100, 40, 89, 45, 67, 10, 76 };
	int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Given array: ";
	printArray(arr, n);

    // Function call
	selectionSort(arr, n);

	cout << "\nSorted array: ";
	printArray(arr, n);
	return 0;
}