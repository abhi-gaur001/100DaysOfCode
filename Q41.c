//Write a program to swap the first and last digit of a number.


#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(void) {
    long long n;
    printf("Enter an integer: ");
    if (scanf("%lld", &n) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    if (n >= 0 && n <= 9) {
        printf("%lld\n", n);
        return 0;
    }

    if (n < 0 && n >= -9) {

        printf("%lld\n", n);
        return 0;
    }

    int sign = (n < 0) ? -1 : 1;
    unsigned long long un = (n < 0) ? (unsigned long long)(-n) : (unsigned long long)n;

    unsigned long long p = 1;
    unsigned long long temp = un;
    while (temp >= 10) {
        temp /= 10;
        p *= 10;
    }

    unsigned long long first = temp;
    unsigned long long last = un % 10ULL;

    if (p == 1) {
        unsigned long long swapped = last * p + first;
        long long out = (long long)swapped * sign;
        printf("%lld\n", out);
        return 0;
    }

    unsigned long long middle = (un % p) / 10ULL; 

    unsigned long long swapped = last * p + middle * 10ULL + first;

    long long result = (long long)swapped * sign;
    printf("%lld\n", result);
    return 0;
}
