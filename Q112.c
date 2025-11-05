// Write a program to take an integer array arr as input. The task is to find the maximum sum of any contiguous subarray using Kadane's algorithm. Print the maximum sum as output. If all elements are negative, print the largest (least negative) element.

#include <stdio.h>
#include <limits.h>

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter elements of array: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int max_so_far = arr[0];
    int current_max = arr[0];

    for (int i = 1; i < n; i++) {
        // Step 1: extend or start new subarray
        current_max = (arr[i] > current_max + arr[i]) ? arr[i] : current_max + arr[i];

        // Step 2: update max sum found so far
        if (current_max > max_so_far)
            max_so_far = current_max;
    }

    printf("Maximum subarray sum: %d\n", max_so_far);
    return 0;
}
