// Print all sub-strings of a string.

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, j, k, len;

    printf("Enter a string: ");
    gets(str);  // use fgets() for safer input

    len = strlen(str);

    printf("\nAll substrings of the string are:\n");

    // Outer loop for starting index
    for (i = 0; i < len; i++) {
        // Inner loop for ending index
        for (j = i; j < len; j++) {
            // Print characters from i to j
            for (k = i; k <= j; k++) {
                printf("%c", str[k]);
            }
            printf("\n");
        }
    }

    return 0;
}
