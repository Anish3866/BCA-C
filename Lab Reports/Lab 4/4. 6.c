#include <stdio.h>

int main() {
    int a[10][10], b[10][10], product[10][10];
    int r1, c1, r2, c2, i, j, k;
    printf("Enter rows and columns for the first matrix: ");
    scanf("%d %d", &r1, &c1);
    printf("Enter rows and columns for the second matrix: ");
    scanf("%d %d", &r2, &c2);
    if(c1 != r2) {
        printf("Matrix multiplication not possible!\n");
        return 0;
    }
    printf("\nEnter elements of the first matrix:\n");
    for(i = 1; i <= r1; i++) {
        for(j = 1; j <= c1; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("\nEnter elements of the second matrix:\n");
    for(i = 1; i <= r2; i++) {
        for(j = 1; j <= c2; j++) {
            printf("b[%d][%d] = ", i, j);
            scanf("%d", &b[i][j]);
        }
    }
	for(i = 1; i <= r1; i++) {
        for(j = 1; j <= c2; j++) {
            product[i][j] = 0;
        }
    }
    for(i = 1; i <= r1; i++) {
        for(j = 1; j <= c2; j++) {
            for(k = 1; k <= c1; k++) {
                product[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    printf("\nProduct of the two matrices:\n");
    for(i = 1; i <= r1; i++) {
        for(j = 1; j <= c2; j++) {
            printf("%d\t", product[i][j]);
        }
        printf("\n");
    }

    return 0;
}

