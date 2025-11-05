// Print initials of a name with the surname displayed in full.


#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    int len, i, lastSpace = -1;

    printf("Enter your full name: ");
    gets(name);  // use fgets() for safer input

    len = strlen(name);

    // Find the position of the last space (before surname)
    for (i = 0; i < len; i++) {
        if (name[i] == ' ')
            lastSpace = i;
    }

    printf("Formatted name: ");

    // Print initials for all names before surname
    if (name[0] != ' ')
        printf("%c. ", name[0]);

    for (i = 0; i < lastSpace; i++) {
        if (name[i] == ' ' && name[i + 1] != ' ' && name[i + 1] != '\0')
            printf("%c. ", name[i + 1]);
    }

    // Print surname in full
    for (i = lastSpace + 1; i < len; i++) {
        printf("%c", name[i]);
    }

    printf("\n");
    return 0;
}
