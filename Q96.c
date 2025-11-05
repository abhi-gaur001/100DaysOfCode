// Reverse each word in a sentence without changing the word order.

#include <stdio.h>
#include <string.h>

void reverse(char str[], int start, int end) {
    char temp;
    while (start < end) {
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

int main() {
    char str[200];
    int i = 0, start = 0;

    printf("Enter a sentence: ");
    gets(str);  // use fgets() for safer input

    while (1) {
        if (str[i] == ' ' || str[i] == '\0') {
            reverse(str, start, i - 1);  // reverse current word
            if (str[i] == '\0')
                break;
            start = i + 1;  // move to next word
        }
        i++;
    }

    printf("Sentence after reversing each word:\n%s\n", str);

    return 0;
}
