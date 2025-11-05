// Write a program to take an array arr[] of integers as input, the task is to find the next greater element for each element of the array in order of their appearance in the array. Next greater element of an element in the array is the nearest element on the right which is greater than the current element. If there does not exist next greater of current element, then next greater element for current element is -1.

// N.B:
// - Print the output for each element in a comma separated fashion.
// - Do not use Stack, use brute force approach (nested loop) to solve.


#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    if (scanf("%d", &n) != 1 || n < 0) {
        fprintf(stderr, "Invalid input for n\n");
        return 1;
    }

    if (n == 0) {
        printf("\n");
        return 0;
    }

    int *arr = malloc((size_t)n * sizeof *arr);
    if (!arr) {
        fprintf(stderr, "Memory allocation failed\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        if (scanf("%d", &arr[i]) != 1) {
            fprintf(stderr, "Invalid input for array element\n");
            free(arr);
            return 1;
        }
    }

    for (int i = 0; i < n; i++) {
        int next = -1;  // Default next greater element
        for (int j = i + 1; j < n; j++) {
            if (arr[j] > arr[i]) {
                next = arr[j];
                break;  // First greater element found
            }
        }

        printf("%d", next);
        if (i != n - 1) printf(",");  // Comma-separated output
    }

    printf("\n");
    free(arr);
    return 0;
}
