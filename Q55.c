//Write a program to print all the prime numbers from 1 to n.

#include <stdio.h>

int isPrime(int num) {
    if (num <= 1) {
        return 0; // not prime
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0; // not prime
        }
    }
    return 1; // prime
}

int main() {
    int n;
    printf("Enter a positive integer n: ");
    if (scanf("%d", &n) != 1 || n < 1) {
        printf("Invalid input. Please enter a positive integer.\n");
        return 1;
    }

    printf("Prime numbers from 1 to %d are:\n", n);
    for (int num = 2; num <= n; num++) {
        if (isPrime(num)) {
            printf("%d\n", num);
        }
    }

    return 0;
}