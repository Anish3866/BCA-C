#include <stdio.h>

int main() {
	int i, j;
    int rows = 4; // Number of rows
    int num = 1;  // Starting number

    for(i = 1; i <= rows; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d ", num);
            num += 2;
        }
        printf("\n");
    }

    return 0;
}

