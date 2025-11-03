//Write a program to check if a number is a perfect number.

#include <stdio.h>
#include <math.h>

int main(void) {
    unsigned long long n;
    printf("Enter a positive integer: ");
    if (scanf("%llu", &n) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    if (n == 0) {
        printf("0 is not a perfect number.\n");
        return 0;
    }

    if (n == 1) {
        printf("1 is not a perfect number.\n");
        return 0;
    }

    unsigned long long sum = 1; /* 1 is a proper divisor for n>1 */
    unsigned long long i;
    unsigned long long root = (unsigned long long)sqrt((long double)n);

    for (i = 2; i <= root; ++i) {
        if (n % i == 0) {
            sum += i;
            unsigned long long other = n / i;
            if (other != i) sum += other;
        }
        /* early exit if sum already exceeds n to save time */
        if (sum > n) break;
    }

    if (sum == n)
        printf("%llu is a perfect number.\n", n);
    else
        printf("%llu is not a perfect number.\n", n);

    return 0;
}
