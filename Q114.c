// Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.

#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    printf("Enter a string: ");
    scanf("%s", s);

    int n = strlen(s);
    int lastIndex[256]; // to store last index of every character
    for (int i = 0; i < 256; i++)
        lastIndex[i] = -1;

    int maxLen = 0;
    int start = 0;

    for (int end = 0; end < n; end++) {
        // if current character was seen before, move start
        if (lastIndex[(unsigned char)s[end]] >= start)
            start = lastIndex[(unsigned char)s[end]] + 1;

        // update last seen index of current character
        lastIndex[(unsigned char)s[end]] = end;

        // calculate length of current substring
        int currLen = end - start + 1;
        if (currLen > maxLen)
            maxLen = currLen;
    }

    printf("Length of the longest substring without repeating characters: %d\n", maxLen);
    return 0;
}
