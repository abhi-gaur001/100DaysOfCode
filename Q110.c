// Write a program to take an integer array arr and an integer k as inputs.
// The task is to find the maximum element in each subarray of size k moving from left to right.
// Print the maximum elements for each window separated by spaces as output.

#include <stdio.h>
#include <stdlib.h>

// Deque-based O(n) sliding window maximum. We store indices in the deque.
int main() {
    int n, k;
    if (scanf("%d", &n) != 1 || n < 0) {
        fprintf(stderr, "Invalid input for n\n");
        return 1;
    }

    if (n == 0) {
        // No elements => no windows
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

    if (scanf("%d", &k) != 1 || k <= 0) {
        fprintf(stderr, "Invalid input for k\n");
        free(arr);
        return 1;
    }

    if (k > n) {
        // No valid windows; spec could differ, but we'll print newline
        printf("\n");
        free(arr);
        return 0;
    }

    // deque to hold indices, capacity n
    int *dq = malloc((size_t)n * sizeof *dq);
    if (!dq) {
        fprintf(stderr, "Memory allocation failed\n");
        free(arr);
        return 1;
    }
    int head = 0, tail = 0; // deque stores indices in dq[head..tail-1]

    for (int i = 0; i < n; i++) {
        // Remove indices out of this window (i - k)
        while (head < tail && dq[head] <= i - k) head++;

        // Remove from back while current element is greater or equal
        while (head < tail && arr[dq[tail - 1]] <= arr[i]) tail--;

        // Push current index
        dq[tail++] = i;

        // If we've processed at least k elements, output current max
        if (i >= k - 1) {
            if (i > k - 1) printf(" ");
            printf("%d", arr[dq[head]]);
        }
    }

    printf("\n");

    free(arr);
    free(dq);
    return 0;
}
