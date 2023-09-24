// implementation of Binary Search
// Array needs to be sorted before applying Binary Search
// Time Complexity: O(log n)
// Space Complexity: O(1)

#include <iostream>
using namespace std;

// An iterative binary search function.
int binarySearch(int arr[], int l, int r, int x)
{
	while (l <= r) {
		int m = l + (r - l) / 2;

		// Check if x is present at mid
		if (arr[m] == x) {
			return m;
		}

		// If x greater, ignore the  left half
		else if (arr[m] < x) {
			l = m + 1;
		}

		// If x is smaller, ignore the right half
		else {
			r = m - 1;
		}
	}

	// If we reach here, then element was not present
	return -1;
}

int main()
{
	int arr[] = { 6, 10, 12, 18, 23, 45, 67, 89, 100, 123, 200, 300, 400, 500 };
	int x = 10;
	int n = sizeof(arr) / sizeof(arr[0]);

	// Function call
	int result = binarySearch(arr, 0, n - 1, x);

	if (result != -1) {
		cout << "Element is present at index " << result;
	}
	else {
		cout << "Element is not present in array";
	}
	return 0;
}