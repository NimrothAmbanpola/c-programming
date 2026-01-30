#include <stdio.h>   // Required for input and output functions

int main() {

    int rows, cols;        // Store number of rows and columns
    int i, j;              // Loop counters
    int sumMatrix[100][100]; // Matrix to store sum (fixed max size for safety)

    // Ask user for matrix size
    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &cols);

    // Declare two matrices
    int matrix1[rows][cols];
    int matrix2[rows][cols];

    /* -------- Input first matrix -------- */
    printf("\nEnter elements of Matrix 1:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    /* -------- Input second matrix -------- */
    printf("\nEnter elements of Matrix 2:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    /* -------- Draw (print) Matrix 1 -------- */
    printf("\nMatrix 1:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d\t", matrix1[i][j]);
        }
        printf("\n");
    }

    /* -------- Draw (print) Matrix 2 -------- */
    printf("\nMatrix 2:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d\t", matrix2[i][j]);
        }
        printf("\n");
    }

    /* -------- Calculate sum of two matrices -------- */
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            sumMatrix[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    /* -------- Draw sum matrix -------- */
    printf("\nSum of Matrix 1 and Matrix 2:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d\t", sumMatrix[i][j]);
        }
        printf("\n");
    }

    /* -------- Time Complexity Explanation -------- */
    printf("\nTime Complexity Analysis:\n");
    printf("1. Reading Matrix 1: rows × columns operations\n");
    printf("2. Reading Matrix 2: rows × columns operations\n");
    printf("3. Printing matrices and summation: rows × columns operations\n");
    printf("Overall Time Complexity = O(rows × columns)\n");

    /* -------- Space Complexity Explanation -------- */
    printf("\nSpace Complexity Analysis:\n");
    printf("1. Two input matrices: O(rows × columns)\n");
    printf("2. One sum matrix: O(rows × columns)\n");
    printf("3. Extra variables use constant space: O(1)\n");
    printf("Overall Space Complexity = O(rows × columns)\n");

    return 0;   // End of program
}
