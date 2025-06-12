#include <stdio.h>

int main() {
    int a = 0, b = 1, next;

    printf("Fibonacci series up to 300:\n");
    printf("%d, %d", a, b);

    next = a + b;
    while (next <= 300) {
        printf(", %d", next);
        a = b;
        b = next;
        next = a + b;
    }
    return 0;
}

