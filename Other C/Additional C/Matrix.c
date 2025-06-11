#include <stdio.h>

int main() {
    int a[10][10], b[10][10], sum[10][10];
    int rows, columns, i, j;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &columns);
    printf("\nEnter elements of first matrix (%d x %d):\n", rows, columns);
    for(i = 1; i <= rows; i++) {
        for(j = 1; j <= columns; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("\nEnter elements of second matrix (%d x %d):\n", rows, columns);
    for(i = 1; i <= rows; i++) {
        for(j = 1; j <= columns; j++) {
            printf("b[%d][%d] = ", i, j);
            scanf("%d", &b[i][j]);
        }
    }
    for(i = 1; i <= rows; i++) {
        for(j = 1; j <= columns; j++) {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }
    printf("\nSum of the two matrices:\n");
    for(i = 1; i <= rows; i++) {
        for(j = 1; j <= columns; j++) {
            printf("%d\t", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}

