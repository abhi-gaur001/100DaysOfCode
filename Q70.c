//Rotate an array to the right by k positions.

#include <stdio.h>

int main() {
    int arr[100], n, k, i, j, temp[100];

    // Taking array size
    printf("Enter number of elements in array: ");
    scanf("%d", &n);

    // Taking array elements
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Taking number of rotations
    printf("Enter number of positions to rotate right: ");
    scanf("%d", &k);

    // Adjust k if greater than n
    k = k % n;

    // Store last k elements in temp
    for (i = 0; i < k; i++) {
        temp[i] = arr[n - k + i];
    }

    // Shift remaining elements to the right
    for (i = n - 1; i >= k; i--) {
        arr[i] = arr[i - k];
    }

    // Copy elements from temp to beginning
    for (i = 0; i < k; i++) {
        arr[i] = temp[i];
    }

    // Print rotated array
    printf("Array after rotating right by %d positions: ", k);
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
