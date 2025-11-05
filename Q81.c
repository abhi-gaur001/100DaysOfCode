//Count characters in a string without using built-in length functions.

#include <stdio.h>

int main() {
    char str[100];
    int count = 0;

    printf("Enter a string: ");
    gets(str);  // Note: unsafe, use fgets in modern compilers

    // Count characters until null character '\0' is reached
    while (str[count] != '\0') {
        count++;
    }

    printf("Number of characters in the string: %d\n", count);

    return 0;
}


