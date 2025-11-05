// Count spaces, digits, and special characters in a string.
#include <stdio.h>

int main() {
    char str[200];
    int i = 0;
    int spaces = 0, digits = 0, special = 0;

    printf("Enter a string: ");
    gets(str);  // use fgets() in modern compilers for safety

    while (str[i] != '\0') {
        if (str[i] == ' ')
            spaces++;
        else if (str[i] >= '0' && str[i] <= '9')
            digits++;
        else if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            // do nothing for alphabets
        }
        else if (str[i] != '\n')  // ignore newline from input
            special++;
        i++;
    }

    printf("\nNumber of spaces: %d", spaces);
    printf("\nNumber of digits: %d", digits);
    printf("\nNumber of special characters: %d\n", special);

    return 0;
}
