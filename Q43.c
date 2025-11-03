//Write a program to check if a number is a strong number.

#include <stdio.h>

int main(void) {
    unsigned long long n;
    printf("Enter a positive integer: ");
    if (scanf("%llu", &n) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    if (n == 0) {
        printf("0 is not a strong number.\n");
        return 0;
    }

    unsigned long long sum = 0;
    unsigned long long temp = n;

    while (temp > 0) {
        int digit = temp % 10;

        // Calculate factorial of the digit
        unsigned long long fact = 1;
        for (int i = 1; i <= digit; ++i) {
            fact *= i;
        }

        sum += fact;
        temp /= 10;
    }

    if (sum == n)
        printf("%llu is a strong number.\n", n);
    else
        printf("%llu is not a strong number.\n", n);

    return 0;
}