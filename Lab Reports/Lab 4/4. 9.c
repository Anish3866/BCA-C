#include <stdio.h>

int main() {
    int number[100], n, i, j, a;
    printf("Enter how many numbers you want to input: ");
    scanf("%d", &n);
    printf("Enter %d numbers:\n", n);
    for(i = 0; i < n; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &number[i]);
    }
    for(i = 0; i < n - 1; i++) {
        for(j = 0; j < n - 1 - i; j++) {
            if(number[j] > number[j + 1]) {
                a = number[j];
                number[j] = number[j + 1];
                number[j + 1] = a;
            }
        }
    }
    printf("\nnumber sorted in ascending order:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", number[i]);
    }
    printf("\n");

    return 0;
}

