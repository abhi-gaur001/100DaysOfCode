// Find the first repeating lowercase alphabet in a string.

#include <stdio.h>

int main() {
    char str[200];
    int freq[26] = {0};  // to count frequency of each lowercase letter
    int i, index, found = 0;

    printf("Enter a string: ");
    gets(str);  // use fgets() for safer input

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            index = str[i] - 'a';   // map 'a'->0, 'b'->1, etc.
            freq[index]++;
            if (freq[index] == 2) { // found repeating character
                printf("First repeating lowercase alphabet: %c\n", str[i]);
                found = 1;
                break;
            }
        }
    }

    if (!found)
        printf("No repeating lowercase alphabet found.\n");

    return 0;
}
