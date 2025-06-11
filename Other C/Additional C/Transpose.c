#include <stdio.h>

int main() {
    int matrix[10][10], transpose[10][10];
    int rows, columns, i, j;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &columns);
    printf("\nEnter elements of the matrix (%d x %d):\n", rows, columns);
    for(i = 1; i <= rows; i++) {
        for(j = 1; j <= columns; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
    for(i = 1; i <= rows; i++) {
        for(j = 1; j <= columns; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }
    printf("\nOriginal Matrix:\n");
    for(i = 1; i <= rows; i++) {
        for(j = 1; j <= columns; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
    printf("\nTranspose Matrix:\n");
    for(i = 1; i <= columns; i++) {
        for(j = 1; j <= rows; j++) {
            printf("%d\t", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}

