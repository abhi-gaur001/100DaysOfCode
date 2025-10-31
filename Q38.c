//Write a program to find the sum of digits of a number.

#include <stdio.h>

int main(void) {
    int n, sum = 0;
    printf("Enter an integer: ");
    if (scanf("%d", &n) != 1) {
        printf("Invalid input. Please enter an integer.\n");
        return 1;
    }

    /* make non-negative */
    if (n < 0) n = -n;

    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }

    printf("Sum of digits is %d\n", sum);
    return 0;
}                 