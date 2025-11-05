//Remove all vowels from a string.

#include <stdio.h>

int main() {
    char str[200], result[200];
    int i = 0, j = 0;

    printf("Enter a string: ");
    gets(str);  // use fgets() for safer input

    while (str[i] != '\0') {
        if (str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u' &&
            str[i] != 'A' && str[i] != 'E' && str[i] != 'I' && str[i] != 'O' && str[i] != 'U') {
            result[j++] = str[i];  // copy only non-vowel characters
        }
        i++;
    }

    result[j] = '\0';  // terminate the new string

    printf("String after removing vowels: %s\n", result);

    return 0;
}
