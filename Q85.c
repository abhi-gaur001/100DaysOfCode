// Reverse a string.

#include <stdio.h>

int main() {
    char str[100];
    int length = 0, i;

    printf("Enter a string: ");
    gets(str);  // use fgets() in modern compilers for safety

    // Find the length of the string manually
    while (str[length] != '\0') {
        length++;
    }

    printf("Reversed string: ");
    // Print string in reverse order
    for (i = length - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }

    printf("\n");
    return 0;
}
