#include <stdio.h>
#define MAX_ROWS 10
#define MAX_COLS 10
void readMatrix(int matrix[MAX_ROWS][MAX_COLS], int rows, int cols) {
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            scanf("%d", &matrix[i][j]);
        }
    }
}
void displayMatrix(int matrix[MAX_ROWS][MAX_COLS], int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}
void multiplyMatrices(int result[MAX_ROWS][MAX_COLS], int matrix1[MAX_ROWS][MAX_COLS], int matrix2[MAX_ROWS][MAX_COLS], int rows1, int cols1, int cols2) {
    for (int i = 0; i < rows1; ++i) {
        for (int j = 0; j < cols2; ++j) {
            result[i][j] = 0;
            for (int k = 0; k < cols1; ++k) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
}
int main() {
    int matrix1[MAX_ROWS][MAX_COLS], matrix2[MAX_ROWS][MAX_COLS], result[MAX_ROWS][MAX_COLS];
    int rows1, cols1, rows2, cols2;
    printf("Enter the number of rows and columns for matrix 1: ");
    scanf("%d %d", &rows1, &cols1);
    printf("Enter the number of rows and columns for matrix 2: ");
    scanf("%d %d", &rows2, &cols2);
    if (cols1 != rows2) {
        printf("Matrix multiplication is not possible. Number of columns in matrix 1 must be equal to the number of rows in matrix 2.\n");
        return 1; 
    }
    printf("Enter elements of matrix 1:\n");
    readMatrix(matrix1, rows1, cols1);
    printf("Enter elements of matrix 2:\n");
    readMatrix(matrix2, rows2, cols2);
    printf("\nMatrix 1:\n");
    displayMatrix(matrix1, rows1, cols1);
    printf("\nMatrix 2:\n");
    displayMatrix(matrix2, rows2, cols2);
    multiplyMatrices(result, matrix1, matrix2, rows1, cols1, cols2);
    printf("\nMatrix Multiplication:\n");
    displayMatrix(result, rows1, cols2);

    return 0;
}