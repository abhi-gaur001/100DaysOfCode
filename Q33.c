//Write a program to check if a number is an Armstrong number.

#include <stdio.h>
#include <math.h>

int main() {
    int num, original, remainder, n = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    original = num;

    // Find the number of digits
    while (original != 0) {
        original /= 10;
        n++;
    }

    original = num;

    // Check if the number is an Armstrong number
    int sum = 0;
    while (original != 0) {
        remainder = original % 10;
        sum += pow(remainder, n);
        original /= 10;
    }

    if (sum == num) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }

    return 0;
}