// Check if two strings are anagrams of each other.

#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int freq1[26] = {0}, freq2[26] = {0};
    int i, isAnagram = 1;

    printf("Enter first string: ");
    gets(str1);  // use fgets() for safer input

    printf("Enter second string: ");
    gets(str2);

    // Count frequency of each lowercase letter in str1
    for (i = 0; str1[i] != '\0'; i++) {
        if (str1[i] >= 'a' && str1[i] <= 'z')
            freq1[str1[i] - 'a']++;
        else if (str1[i] >= 'A' && str1[i] <= 'Z')
            freq1[str1[i] - 'A']++;
    }

    // Count frequency of each lowercase letter in str2
    for (i = 0; str2[i] != '\0'; i++) {
        if (str2[i] >= 'a' && str2[i] <= 'z')
            freq2[str2[i] - 'a']++;
        else if (str2[i] >= 'A' && str2[i] <= 'Z')
            freq2[str2[i] - 'A']++;
    }

    // Compare frequency arrays
    for (i = 0; i < 26; i++) {
        if (freq1[i] != freq2[i]) {
            isAnagram = 0;
            break;
        }
    }

    if (isAnagram)
        printf("The strings are anagrams of each other.\n");
    else
        printf("The strings are NOT anagrams.\n");

    return 0;
}
