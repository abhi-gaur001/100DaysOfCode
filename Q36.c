//Write a program to find the HCF (GCD) of two numbers.

#include <stdio.h>

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main(void) {
    int a, b;
    printf("Enter two integers: ");
    if (scanf("%d %d", &a, &b) != 2) {
        printf("Invalid input. Please enter two integers.\n");
        return 1;
    }

    /* make non-negative */
    if (a < 0) a = -a;
    if (b < 0) b = -b;

    if (a == 0 && b == 0) {
        printf("GCD is undefined for 0 and 0.\n");
        return 1;
    }

    int result = gcd(a, b);
    printf("GCD of %d and %d is %d\n", a, b, result);
    return 0;
} 