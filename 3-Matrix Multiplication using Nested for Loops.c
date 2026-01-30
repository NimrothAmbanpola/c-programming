#include <stdio.h>   // Needed for input and output functions

//Number of columns of Matrix 1 = Number of rows of Matrix 2
int main() {

printf("***** Matrix Multiplication *****\n\n");
printf("Number of columns of Matrix 1 = Number of rows of Matrix 2\n\n");

    int r1, c1;      // Rows and columns of Matrix 1
    int r2, c2;      // Rows and columns of Matrix 2
    int i, j, k;     // Loop counters

    // Ask for size of Matrix 1
    printf("Enter rows and columns of Matrix 1: ");
    scanf("%d %d", &r1, &c1);

    // Ask for size of Matrix 2
    printf("Enter rows and columns of Matrix 2: ");
    scanf("%d %d", &r2, &c2);

    // Check if matrix multiplication is possible
    if (c1 != r2) {
        printf("Matrix multiplication is NOT possible.\n");
        printf("Columns of Matrix 1 must equal rows of Matrix 2.\n");
        return 0;   // Exit program
    }

    // Declare matrices
    int matrix1[r1][c1];
    int matrix2[r2][c2];
    int result[r1][c2];   // Result matrix size

    /* -------- Input Matrix 1 -------- */
    printf("\nEnter elements of Matrix 1:\n");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c1; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    /* -------- Input Matrix 2 -------- */
    printf("\nEnter elements of Matrix 2:\n");
    for (i = 0; i < r2; i++) {
        for (j = 0; j < c2; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    /* -------- Draw Matrix 1 -------- */
    printf("\nMatrix 1:\n");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c1; j++) {
            printf("%d\t", matrix1[i][j]);
        }
        printf("\n");
    }

    /* -------- Draw Matrix 2 -------- */
    printf("\nMatrix 2:\n");
    for (i = 0; i < r2; i++) {
        for (j = 0; j < c2; j++) {
            printf("%d\t", matrix2[i][j]);
        }
        printf("\n");
    }

    /* -------- Initialize result matrix to 0 -------- */
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            result[i][j] = 0;
        }
    }

    /* -------- Matrix Multiplication -------- */
    for (i = 0; i < r1; i++) {          // Loop over rows of Matrix 1
        for (j = 0; j < c2; j++) {      // Loop over columns of Matrix 2
            for (k = 0; k < c1; k++) {  // Loop for multiplication
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    /* -------- Draw Result Matrix -------- */
    printf("\nResult Matrix (Matrix 1 × Matrix 2):\n");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }

    /* -------- Time Complexity Explanation -------- */
    printf("\nTime Complexity Analysis:\n");
    printf("Matrix multiplication uses three nested loops.\n");
    printf("Operations ≈ r1 × c2 × c1.\n");
    printf("Time Complexity = O(r1 × c1 × c2).\n");

    /* -------- Space Complexity Explanation -------- */
    printf("\nSpace Complexity Analysis:\n");
    printf("Matrix 1 uses O(r1 × c1) space.\n");
    printf("Matrix 2 uses O(r2 × c2) space.\n");
    printf("Result matrix uses O(r1 × c2) space.\n");
    printf("Extra variables use constant space O(1).\n");
    printf("Overall Space Complexity = O(r1×c1 + r2×c2 + r1×c2).\n");

    return 0;   // End of program
}
