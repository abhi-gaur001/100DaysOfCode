//Print each character of a string on a new line.

#include <stdio.h>

int main() {
    char str[100];
    int i = 0;

    printf("Enter a string: ");
    gets(str);  // Note: use fgets in modern compilers for safety

    printf("\nCharacters in the string are:\n");

    while (str[i] != '\0') {
        printf("%c\n", str[i]);
        i++;
    }

    return 0;
}
