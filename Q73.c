// Find the sum of each row of a matrix and store it in an array.

#include <stdio.h>

int main() {
    int matrix[10][10], rowSum[10];
    int rows, cols, i, j;

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
        }
    }

    // Calculating sum of each row
    for (i = 0; i < rows; i++) {
        rowSum[i] = 0;  // initialize sum for each row
        for (j = 0; j < cols; j++) {
            rowSum[i] += matrix[i][j];
        }
    }

    // Displaying sum of each row
    printf("\nSum of each row:\n");
    for (i = 0; i < rows; i++) {
        printf("Row %d sum = %d\n", i + 1, rowSum[i]);
    }

    return 0;
}
