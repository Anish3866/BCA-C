#include <stdio.h>

int main() {
    int number;
    printf("Enter an integer: ");
    scanf("%d", &number);
    if (number % 5 == 0) {
        printf("%d is a multiple of 5.\n", number);
    } else {
        printf("%d is NOT a multiple of 5.\n", number);
    }
    if (number % 7 == 0 && number % 11 != 0) {
        printf("%d is divisible by 7 but NOT by 11.\n", number);
    } else {
        printf("%d does NOT satisfy 'divisible by 7 but not by 11'.\n", number);
    }

    return 0;
}

