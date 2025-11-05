// Write a program to take an integer array nums of size n, and print the majority element. The majority element is the element that appears strictly more than ⌊n / 2⌋ times. Print -1 if no such element exists. Note: Majority Element is not necessarily the element that is present most number of times.

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int nums[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    // Phase 1: Find candidate
    int candidate = 0, count = 0;
    for (int i = 0; i < n; i++) {
        if (count == 0) {
            candidate = nums[i];
            count = 1;
        } else if (nums[i] == candidate) {
            count++;
        } else {
            count--;
        }
    }

    // Phase 2: Verify candidate
    int freq = 0;
    for (int i = 0; i < n; i++) {
        if (nums[i] == candidate) freq++;
    }

    if (freq > n / 2)
        printf("%d\n", candidate);
    else
        printf("-1\n");

    return 0;
}
