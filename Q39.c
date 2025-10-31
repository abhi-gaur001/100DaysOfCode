//Write a program to find the product of odd digits of a number.

#include <stdio.h>

int main(void) {
    int n;
    long long product = 1;
    int has_odd_digit = 0;

    printf("Enter an integer: ");
    if (scanf("%d", &n) != 1) {
        printf("Invalid input. Please enter an integer.\n");
        return 1;
    }

    /* make non-negative */
    if (n < 0) n = -n;

    if (n == 0) {
        printf("Product of odd digits is 0\n");
        return 0;
    }

    while (n > 0) {
        int digit = n % 10;
        if (digit % 2 != 0) {
            product *= digit;
            has_odd_digit = 1;
        }
        n /= 10;
    }

    if (has_odd_digit) {
        printf("Product of odd digits is %lld\n", product);
    } else {
        printf("No odd digits found. Product is undefined.\n");
    }

    return 0;
}