// Print the following pattern:
// *
// ***
// *****
// *******
// *********
// *******
// *****
// ***
// *

#include <stdio.h>

int main(void) {
    int n = 5; /* number of lines in the top half (produces 2*n-1 max stars) */

    /* Top half including middle line */
    for (int i = 1; i <= n; ++i) {
        int stars = 2 * i - 1;
        for (int j = 0; j < stars; ++j) putchar('*');
        putchar('\n');
    }

    /* Bottom half (excluding middle line) */
    for (int i = n - 1; i >= 1; --i) {
        int stars = 2 * i - 1;
        for (int j = 0; j < stars; ++j) putchar('*');
        putchar('\n');
    }

    return 0;
}
