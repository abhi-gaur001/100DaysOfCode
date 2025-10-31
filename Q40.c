//Write a program to find the 1’s complement of a binary number and print it.

#include <stdio.h>

int main(void) {
    char bin[1024];
    printf("Enter a binary number (e.g. 10101): ");
    if (scanf("%1023s", bin) != 1) {
        printf("Input error.\n");
        return 1;
    }

    // Validate and compute 1's complement by flipping each bit character
    for (int i = 0; bin[i] != '\0'; i++) {
        if (bin[i] == '0') bin[i] = '1';
        else if (bin[i] == '1') bin[i] = '0';
        else {
            printf("Invalid binary number: contains '%c'.\n", bin[i]);
            return 1;
        }
    }

    printf("1's complement is: %s\n", bin);
    return 0;
}