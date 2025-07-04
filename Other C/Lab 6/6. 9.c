#include <stdio.h>

void values(int *a, int *b);

int main() {
    int x = 5, y = 10;

    printf("Before function call:\n");
    printf("x = %d, y = %d\n", x, y);

    values(&x, &y);

    printf("After function call:\n");
    printf("x = %d, y = %d\n", x, y);

    return 0;
}

void values(int *a, int *b) {
    *a = *a + 10;
    *b = *b * 2;
}

