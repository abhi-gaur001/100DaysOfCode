// Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.

#include <stdio.h>

int main() {
    int i, n;
    float numerator, denominator, sum = 0.0;

    printf("Enter number of terms (n): ");
    scanf("%d", &n);

    numerator = 1;      
    denominator = 2;    

    for (i = 1; i <= n; i++) {
        sum += numerator / denominator;
        numerator += 2;      
        denominator += 2;  

    printf("Sum of the series up to %d terms = %.4f\n", n, sum);

    return 0;
}

