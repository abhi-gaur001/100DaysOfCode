//Insert an element in a sorted array at the appropriate position.

#include <stdio.h>

// insert_into_sorted places `value` into the sorted array `arr` of length `n`.
// The result is written to `out` which must have space for n+1 elements.
// Behavior: inserts before the first element >= value (stable for equal values).
void insert_into_sorted(int arr[], int n, int value, int out[]) {
	int i = 0;
	// copy elements less than value
	while (i < n && arr[i] < value) {
		out[i] = arr[i];
		i++;
	}

	// place the new value
	out[i] = value;

	// copy remaining elements
	for (int j = i; j < n; j++) {
		out[j + 1] = arr[j];
	}
}

int main() {
	int n, value;

	printf("Enter number of elements in sorted array: ");
	if (scanf("%d", &n) != 1 || n < 0) {
		printf("Invalid input.\n");
		return 1;
	}

	int arr[n];
	if (n > 0) {
		printf("Enter %d sorted elements:\n", n);
		for (int i = 0; i < n; i++) {
			if (scanf("%d", &arr[i]) != 1) {
				printf("Invalid input.\n");
				return 1;
			}
		}
	}

	printf("Enter the element to insert: ");
	if (scanf("%d", &value) != 1) {
		printf("Invalid input.\n");
		return 1;
	}

	int out[n + 1];
	insert_into_sorted(arr, n, value, out);

	printf("Array after insertion:\n");
	for (int i = 0; i < n + 1; i++) {
		printf("%d", out[i]);
		if (i < n) printf(" ");
	}
	printf("\n");

	return 0;
}

