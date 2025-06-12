#include <stdio.h>

int main() {
    int a, b, c;
    int largest, smallest;

    printf("Enter three integers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a >= b && a >= c) {
        largest = a;
    } else if (b >= a && b >= c) {
        largest = b;
    } else {
        largest = c;
    }

    if (a <= b && a <= c) {
        smallest = a;
    } else if (b <= a && b <= c) {
        smallest = b;
    } else {
        smallest = c;
    }

    printf("Largest number is: %d - ", largest);
    if (largest % 2 == 0)
        printf("Even\n");
    else
        printf("Odd\n");

    printf("Smallest number is: %d - ", smallest);
    if (smallest % 2 == 0)
        printf("Even\n");
    else
        printf("Odd\n");

    return 0;
}

