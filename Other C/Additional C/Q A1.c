#include <stdio.h>

int main() {

    int base, result = 1, exp, i;
    
    printf("Enter a base number: ");
    scanf("%d", &base);

    printf("Enter exponent: ");
    scanf("%d", &exp);

    for (i=1; i<=exp; i++) {
        result *= base;
    }
    printf("%d^%d = %d", base,exp,result);

    return 0;
}
