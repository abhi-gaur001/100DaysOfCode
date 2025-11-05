// Find the longest word in a sentence.

#include <stdio.h>
#include <string.h>

int main() {
    char str[200], word[50], longest[50];
    int i = 0, j = 0, maxLen = 0, currLen = 0;

    printf("Enter a sentence: ");
    if (fgets(str, sizeof(str), stdin) == NULL) {
        printf("Input error.\n");
        return 1;
    }
    // remove trailing newline if present
    size_t slen = strlen(str);
    if (slen > 0 && str[slen - 1] == '\n')
        str[slen - 1] = '\0';

    while (1) {
        if (str[i] == ' ' || str[i] == '\0') {
            word[j] = '\0';  // terminate current word
            // don't call strlen; j already holds the current word length
            currLen = j;

            if (currLen > maxLen) {
                maxLen = currLen;
                strcpy(longest, word);
            }

            j = 0;  // reset for next word

            if (str[i] == '\0')
                break;
        } else {
            word[j++] = str[i];
        }
        i++;
    }

    printf("The longest word is: %s\n", longest);
   

    return 0;
}
