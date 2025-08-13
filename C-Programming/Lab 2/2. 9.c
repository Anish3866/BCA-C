#include <stdio.h>

int main() {
    float x, y, result;
    char ch1;
    printf("Enter first number (x): ");
    scanf("%f", &x);

    printf("Enter second number (y): ");
    scanf("%f", &y);

    while ((getchar()) != '\n'); 

    printf("Enter operator (+, -, *, /): ");
    ch1 = getchar();

    if (ch1 == '+') {
        result = x + y;
    } else if (ch1 == '-') {
        result = x - y;
    } else if (ch1 == '*') {
        result = x * y;
    } else if (ch1 == '/') {
        if (y != 0)
            result = x / y;
        else {
            printf("Error: Division by zero is not allowed.\n");
            return 1;
        }
    } else {
        printf("Invalid operator.\n");
        return 1;
    }

    printf("Result: %.2f %c %.2f = %.2f\n", x, ch1, y, result);

    return 0;
}

