// Delete an element from an array

#include <stdio.h>

int main() {
    int arr[100], n, pos, i;

    // Taking array size
    printf("Enter number of elements in array: ");
    scanf("%d", &n);

    // Taking array elements
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Taking position to delete
    printf("Enter position to delete (1 to %d): ", n);
    scanf("%d", &pos);

    // Check for valid position
    if (pos < 1 || pos > n) {
        printf("Invalid position!\n");
    } else {
        // Shift elements to left
        for (i = pos - 1; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }
        n--;  // reduce array size

        // Print updated array
        printf("Array after deletion: ");
        for (i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}
