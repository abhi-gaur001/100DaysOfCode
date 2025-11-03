//Search for an element in an array using linear search.

#include <stdio.h>
// linear_search returns the index of target in arr, or -1 if not found
int linear_search(int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;
}

int main() {
    int n, target;

    printf("Enter the number of elements: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid number of elements.\n");
        return 1;
    }

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &arr[i]) != 1) {
            printf("Invalid input.\n");
            return 1;
        }
    }

    printf("Enter the element to search for: ");
    if (scanf("%d", &target) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    int idx = linear_search(arr, n, target);
    if (idx >= 0) {
        printf("Element %d found at index %d.\n", target, idx);
    } else {
        printf("Element %d not found in the array.\n", target);
    }

    return 0;
}