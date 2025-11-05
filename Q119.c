// Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.

#include <stdio.h>

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter elements of array (one number is repeated): ");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    // Expected sum of numbers from 1 to n-1
    int expected_sum = (n - 1) * (n - 2) / 2;  
    int actual_sum = 0;

    for (int i = 0; i < n; i++)
        actual_sum += arr[i];

    int repeated = actual_sum - expected_sum;
    printf("Repeated element is: %d\n", repeated);

    return 0;
}
