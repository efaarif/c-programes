#include <stdio.h>

#define MAX 10 /

int main() {
	int rows, cols, i, j;
    
    
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &rows, &cols);
    int matrix1[rows][cols];
	int matrix2[rows][cols];
	int sum[rows][cols];
    

    printf("Enter elements of the first matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("Enter elements of the second matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix2[i][j]);
        }
    }

    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    printf("Sum of the two matrices:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}
