// Insert an element in an array at a given position.


#include <stdio.h>

int main() {
    int arr[100], n, pos, element, i;

    // Taking array size
    printf("Enter number of elements in array: ");
    scanf("%d", &n);

    // Taking array elements
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Taking element and position
    printf("Enter position to insert (1 to %d): ", n + 1);
    scanf("%d", &pos);

    printf("Enter element to insert: ");
    scanf("%d", &element);

    // Shift elements to the right
    for (i = n - 1; i >= pos - 1; i--) {
        arr[i + 1] = arr[i];
    }

    // Insert new element
    arr[pos - 1] = element;
    n++;

    // Print updated array
    printf("Array after insertion: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
