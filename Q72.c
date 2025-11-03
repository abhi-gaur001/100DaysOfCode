// Find the sum of all elements in a matrix.

#include <stdio.h>

int main() {
    int matrix[10][10];
    int rows, cols, i, j, sum = 0;

    // Taking number of rows and columns
    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &cols);

    // Reading matrix elements
    printf("Enter elements of the matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
            sum += matrix[i][j];  // Add element to sum
        }
    }

    // Displaying the sum
    printf("\nSum of all elements = %d\n", sum);

    return 0;
}
