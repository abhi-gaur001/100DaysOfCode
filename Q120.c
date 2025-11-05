// Write a program to take a string input. Change it to sentence case.

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char str[1000];

    // Read a single line of input
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove trailing newline if present
    str[strcspn(str, "\n")] = '\0';

    // Convert entire string to lowercase first (use unsigned char for safety)
    for (int i = 0; str[i]; i++)
        str[i] = tolower((unsigned char)str[i]);

    // Capitalize first letter of the string and the first letter after any
    // sentence terminator (., !, ?).
    int capitalize_next = 1;
    for (int i = 0; str[i]; i++) {
        unsigned char c = (unsigned char)str[i];
        if (isalpha(c)) {
            if (capitalize_next) {
                str[i] = toupper(c);
                capitalize_next = 0;
            }
        } else {
            if (c == '.' || c == '!' || c == '?') {
                capitalize_next = 1;
            }
        }
    }

    // Print the transformed string
    printf("Sentence case: %s\n", str);

    return 0;
}
