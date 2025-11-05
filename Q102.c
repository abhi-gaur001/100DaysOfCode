// Write a Program to take a sorted array arr[] and an integer x as input, find the index (0-based) of the smallest element in arr[] that is greater than or equal to x and print it. This element is called the ceil of x. If such an element does not exist, print -1. Note: In case of multiple occurrences of ceil of x, return the index of the first occurrence.

#include <stdio.h>

int main() {
    int n, x;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter sorted elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter x: ");
    scanf("%d", &x);

    int low = 0, high = n - 1;
    int ceilIndex = -1;

    // Binary Search to find ceil
    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] >= x) {
            ceilIndex = mid;     // possible ceil found
            high = mid - 1;      // look for smaller element on left
        } else {
            low = mid + 1;       // move right
        }
    }

    printf("%d\n", ceilIndex);

    return 0;
}

