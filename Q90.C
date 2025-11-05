// Toggle case of each character in a string.
#include <stdio.h>

int main() {
    char str[200];
    int i = 0;

    printf("Enter a string: ");
    gets(str);  // use fgets() for safer input

    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;  // lowercase → uppercase
        }
        else if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32;  // uppercase → lowercase
        }
        i++;
    }

    printf("Toggled case string: %s\n", str);

    return 0;
}
