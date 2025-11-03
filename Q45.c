//Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.

#include <stdio.h>

int main() {
    int i, n;
    float numerator, denominator, sum = 0.0;

    printf("Enter number of terms (n): ");
    scanf("%d", &n);

    numerator = 2;      /* first numerator */
    denominator = 3;    /* first denominator */

    for (i = 1; i <= n; i++) {
        sum += numerator / denominator;
        numerator += 2;      /* next numerator */
        denominator += 4;    /* next denominator */
    }

    printf("Sum of the series up to %d terms = %.4f\n", n, sum);

    return 0;
}