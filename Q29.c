//Write a program to calculate the factorial of a number.

#include <stdio.h>

int main() {
    int n;
    long long factorial = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        factorial *= i;
    }

    printf("The factorial of %d is: %lld\n", n, factorial);

    return 0;
}