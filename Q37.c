//Write a program to find the LCM of two numbers.

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

    int aa = a < 0 ? -a : a;
    int bb = b < 0 ? -b : b;

    if (aa == 0 && bb == 0) {
        printf("LCM is undefined for 0 and 0.\n");
        return 1;
    }

    if (aa == 0 || bb == 0) {
        printf("LCM of %d and %d is 0\n", a, b);
        return 0;
    }

    int g = gcd(aa, bb);
    long long lcm = (long long)aa / g * bb; /* compute in 64-bit to reduce overflow risk */
    printf("LCM of %d and %d is %lld\n", a, b, lcm);
    return 0;
}