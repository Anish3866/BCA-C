#include <stdio.h>

int main() {
    float numbers[10];
    int i;
    printf("Enter 10 float numbers:\n");
    for(i = 0; i < 10; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%f", &numbers[i]);
    }
    printf("\nYou entered:\n");
    for(i = 0; i < 10; i++) {
        printf("Number at index %d = %.2f\n", i, numbers[i]);
    }

    return 0;
}
