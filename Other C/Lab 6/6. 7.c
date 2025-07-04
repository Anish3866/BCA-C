#include<stdio.h>
int main()
{
    int a = 10, b = 20, c = 30;
    int *ptr[3];

    ptr[0] = &a;
    ptr[1] = &b;
    ptr[2] = &c;

    printf("Values using array of pointers:\n");
    printf("Value at ptr[0] = %d\n", *ptr[0]);
    printf("Value at ptr[1] = %d\n", *ptr[1]);
    printf("Value at ptr[2] = %d\n", *ptr[2]);

    return 0;
}
