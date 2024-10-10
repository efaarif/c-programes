#include <stdio.h>

#define MAX 10

int main() {
    int matrix1[MAX][MAX], matrix2[MAX][MAX], product[MAX][MAX];
    int rows1, cols1, rows2, cols2, i, j, k;

    printf("Enter the number of rows and columns for the first matrix: ");
    scanf("%d %d", &rows1, &cols1);

    printf("Enter elements of the first matrix:\n");
    for (i = 0; i < rows1; i++) {
        for (j = 0; j < cols1; j++) {
            printf("Element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("Enter the number of rows and columns for the second matrix: ");
    scanf("%d %d", &rows2, &cols2);

    if (cols1 != rows2) {
        printf("Matrix multiplication not possible. Number of columns in first matrix must equal number of rows in second matrix.\n");
        return 1;
    }

    printf("Enter elements of the second matrix:\n");
    for (i = 0; i < rows2; i++) {
        for (j = 0; j < cols2; j++) {
            printf("Element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix2[i][j]);
        }
    }

    for (i = 0; i < rows1; i++) {
        for (j = 0; j < cols2; j++) {
            product[i][j] = 0;
        }
    }

    for (i = 0; i < rows1; i++) {
        for (j = 0; j < cols2; j++) {
            for (k = 0; k < cols1; k++) {
                product[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    printf("Product of the two matrices:\n");
    for (i = 0; i < rows1; i++) {
        for (j = 0; j < cols2; j++) {
            printf("%d ", product[i][j]);
        }
        printf("\n");
    }

    return 0;
}
