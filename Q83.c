// Count vowels and consonants in a string.

#include <stdio.h>

int main() {
    char str[100];
    int vowels = 0, consonants = 0;
    int i = 0;

    printf("Enter a string: ");
    gets(str);  // use fgets for safer input in modern compilers

    while (str[i] != '\0') {
        char ch = str[i];

        // Check for alphabet letters
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            // Convert uppercase to lowercase for simplicity
            if (ch >= 'A' && ch <= 'Z')
                ch = ch + 32;

            // Check if it's a vowel
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vowels++;
            else
                consonants++;
        }

        i++;
    }

    printf("\nNumber of vowels: %d", vowels);
    printf("\nNumber of consonants: %d\n", consonants);

    return 0;
}


