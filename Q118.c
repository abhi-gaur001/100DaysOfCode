// Write a program to take an input array of size n. The array should contain all the integers between 0 to n except for one. Print that missing number

#include <stdio.h>

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter elements of array (from 0 to %d with one missing): ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int expected_sum = n * (n + 1) / 2;
    int actual_sum = 0;

    for (int i = 0; i < n; i++)
        actual_sum += arr[i];

    int missing = expected_sum - actual_sum;
    printf("Missing number is: %d\n", missing);

    return 0;
}
