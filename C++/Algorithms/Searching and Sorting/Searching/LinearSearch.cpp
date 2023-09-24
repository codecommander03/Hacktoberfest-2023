// code to linearly search x in arr[]
// Time Complexity: O(N)
// Space Complexity: O(1)


#include <iostream>
using namespace std;

int search(int arr[], int N, int x) {
	for (int i = 0; i < N; i++) {
		if (arr[i] == x) {
			// x found at index i
			return i;
		}
	}
	return -1;
}

int main()
{
	int arr[] = { 11, 54, 23, 14, 100, 40, 89, 45, 67, 10, 76 };
	int x = 10;
	int n = sizeof(arr) / sizeof(arr[0]);

	// Function call
	int result = search(arr, n, x);

	if (result != -1) {
		cout << "Element is present at index " << result;
	} else {
		cout << "Element is not present in array";
	}
	return 0;
}