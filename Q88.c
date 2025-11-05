// Replace spaces with hyphens in a string.

#include <stdio.h>

int main() {
    char str[200];
    int i = 0;

    printf("Enter a string: ");
    gets(str);  // use fgets() for safer input

    while (str[i] != '\0') {
        if (str[i] == ' ')
            str[i] = '-';   // replace space with hyphen
        i++;
    }

    printf("String after replacing spaces with hyphens: %s\n", str);

    return 0;
}
