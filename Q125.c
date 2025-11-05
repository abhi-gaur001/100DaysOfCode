// Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content

#include <stdio.h>

int main() {
    FILE *file = fopen("info.txt", "a");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    char line[256];
    printf("Enter a line of text to append: ");
    // Clear input buffer before reading a new line
    int c;
    while ((c = getchar()) != '\n' && c != EOF);

    if (fgets(line, sizeof(line), stdin) != NULL) {
        fprintf(file, "%s", line);
        printf("Text successfully appended to info.txt\n");
    } else {
        printf("Error reading input.\n");
    }

    fclose(file);
    return 0;
}