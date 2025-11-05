// Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k.

#include <stdio.h>

int main() {
    int n, k;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &k);

    int maxSum = -1000000;  // Initialize with a very small number

    // Loop through all subarrays of size k
    for (int i = 0; i <= n - k; i++) {
        int currentSum = 0;

        for (int j = i; j < i + k; j++) {
            currentSum += arr[j];
        }

        if (currentSum > maxSum) {
            maxSum = currentSum;
        }
    }

    printf("%d\n", maxSum);
    return 0;
}
