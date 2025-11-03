// Write a program to print the following pattern:
//
//    *
//   ***
//  *****
// *******
//  *****
//   ***
//    *

#include <stdio.h>

int main(void) {
    /* For the requested pattern the top half (including middle) has 4 lines
       which produce maximum 7 stars (2*4-1). We'll hardcode n = 4 here to
       match the example. If you want a configurable size, I can change it.
    */
    int n = 4;

    /* Top half (including middle line) */
    for (int i = 1; i <= n; ++i) {
        int spaces = n - i;          /* leading spaces */
        int stars = 2 * i - 1;      /* odd number of stars */
        for (int s = 0; s < spaces; ++s) putchar(' ');
        for (int s = 0; s < stars; ++s) putchar('*');
        putchar('\n');
    }

    /* Bottom half (excluding middle line) */
    for (int i = n - 1; i >= 1; --i) {
        int spaces = n - i;
        int stars = 2 * i - 1;
        for (int s = 0; s < spaces; ++s) putchar(' ');
        for (int s = 0; s < stars; ++s) putchar('*');
        putchar('\n');
    }

    return 0;
}

