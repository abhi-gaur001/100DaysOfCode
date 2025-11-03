// Write a program to print the following pattern:
// *****
//  ****
//   ***
//    **
//     *

#include <stdio.h>

int main(void) {
    int i, j, spaces;
    for (i = 5; i >= 1; i--) {
        for (spaces = 0; spaces < 5 - i; spaces++) {
            printf(" ");
        }
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}