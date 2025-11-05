// Convert a lowercase string to uppercase without using built-in functions.

#include <stdio.h>

int main() {
    char str[100];
    int i = 0;

    printf("Enter a lowercase string: ");
    gets(str);  // use fgets() in modern compilers for safety

    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;  // convert to uppercase by ASCII difference
        }
        i++;
    }

    printf("String in uppercase: %s\n", str);

    return 0;
}
