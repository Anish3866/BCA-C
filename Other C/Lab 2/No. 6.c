#include <stdio.h>

int main() {
    int a, b, temp;
    printf("Enter two numbers:\n");
    printf("a = ");
    scanf("%d", &a);
    printf("b = ");
    scanf("%d", &b);
    printf("\n Swapping using third variable \n");
    printf("Before: a = %d, b = %d\n", a, b);
    temp = a;
    a = b;
    b = temp;
    printf("After using 3rd variable:  a = %d, b = %d\n", a, b);
    printf("\nEnter two numbers again for swapping without third variable:\n");
    printf("a = ");
    scanf("%d", &a);
    printf("b = ");
    scanf("%d", &b);
    printf("\n Swapping without third variable \n");
    printf("Before: a = %d, b = %d\n", a, b);
    
    a = a + b;
    b = a - b;
    a = a - b;

    printf("After without using 3rd variable:  a = %d, b = %d\n", a, b);

    return 0;
}

