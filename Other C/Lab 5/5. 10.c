#include <stdio.h>
void swap(int a, int b);

int main() {
    int x = 10, y = 20;

    printf("Before swapping: x = %d, y = %d\n", x, y);
    swap(x, y);

    printf("After swapping (in main): x = %d, y = %d\n", x, y);

    return 0;
}
void swap(int a, int b) {
    int temp;
    temp = a;
    a = b;
    b = temp;

    printf("Inside swap function: a = %d, b = %d\n", a, b);
}

