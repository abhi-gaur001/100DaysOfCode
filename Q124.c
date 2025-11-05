// Take two filenames from the user – a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc().

#include <stdio.h>
#include <stdlib.h>
int main() {
    char source_filename[256];
    char dest_filename[256];

    printf("Enter source filename: ");
    if (scanf("%255s", source_filename) != 1) {
        fprintf(stderr, "Invalid input for source filename\n");
        return 1;
    }

    printf("Enter destination filename: ");
    if (scanf("%255s", dest_filename) != 1) {
        fprintf(stderr, "Invalid input for destination filename\n");
        return 1;
    }

    FILE *source_file = fopen(source_filename, "rb");
    if (!source_file) {
        fprintf(stderr, "Error opening source file '%s'\n", source_filename);
        return 1;
    }

    FILE *dest_file = fopen(dest_filename, "wb");
    if (!dest_file) {
        fprintf(stderr, "Error opening destination file '%s'\n", dest_filename);
        fclose(source_file);
        return 1;
    }

    int ch;
    while ((ch = fgetc(source_file)) != EOF) {
        fputc(ch, dest_file);
    }

    fclose(source_file);
    fclose(dest_file);

    printf("Content copied from '%s' to '%s'\n", source_filename, dest_filename);
    return 0;
}