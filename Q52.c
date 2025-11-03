// Write a program to print the following pattern:

// *

// *
// *
// *

// *
// *
// *
// *
// *

// *
// *
// *

// *

#include <stdio.h>

int main(void) {
    /* Print groups of stars with exact blank lines between groups.
       The required group sizes are: 1, 3, 5, 3, 1 (each star on its own line).
    */
    int groups[] = {1, 3, 5, 3, 1};
    int gcount = sizeof(groups) / sizeof(groups[0]);

    for (int gi = 0; gi < gcount; ++gi) {
        int lines = groups[gi];
        for (int k = 0; k < lines; ++k) {
            printf("*\n");
        }
        /* print a blank line between groups, but not after the last group */
        if (gi != gcount - 1) printf("\n");
    }
    return 0;
}