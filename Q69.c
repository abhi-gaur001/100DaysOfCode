// Find the second largest element in an array.

#include <stdio.h>

int main() {
    int arr[100], n, i;
    int largest, second;

    // Taking array size
    printf("Enter number of elements in array: ");
    scanf("%d", &n);

    // Taking array elements
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Initialize largest and second
    if (arr[0] > arr[1]) {
        largest = arr[0];
        second = arr[1];
    } else {
        largest = arr[1];
        second = arr[0];
    }

    // Find second largest
    for (i = 2; i < n; i++) {
        if (arr[i] > largest) {
            second = largest;
            largest = arr[i];
        } else if (arr[i] > second && arr[i] != largest) {
            second = arr[i];
        }
    }

    printf("Second largest element = %d\n", second);

    return 0;
}
