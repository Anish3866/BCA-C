#include <stdio.h>

int main() {
    int num1, num2, i, sum = 0;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    if (num1 > num2) {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }

    for (i = num1 + 1; i < num2; i++) {
        if (i % 2 == 0) {
            sum += i;
        }
    }

    printf("Sum of even numbers between %d and %d is: %d\n", num1, num2, sum);

    return 0;
}

