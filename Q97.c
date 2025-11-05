// Print the initials of a name.

#include <stdio.h>

int main() {
    char name[100];
    int i = 0;

    printf("Enter your full name: ");
    gets(name);  // use fgets() for safer input

    printf("Initials: ");

    // Print first character if it's not a space
    if (name[0] != ' ')
        printf("%c", name[0]);

    // Print character after every space
    for (i = 0; name[i] != '\0'; i++) {
        if (name[i] == ' ' && name[i + 1] != ' ' && name[i + 1] != '\0')
            printf("%c", name[i + 1]); 
    }

    printf("\n");
    return 0;
}
