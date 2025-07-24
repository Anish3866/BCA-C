#include <stdio.h>

int main() {
    char str1[100], str2[100];
    printf("Enter a string without spaces: ");
    scanf("%s", str1);
    getchar();
    printf("Enter a string with spaces: ");
    scanf("%[^\n]",str2);
    printf("\nString without spaces: %s\n", str1);
    printf("String with spaces: %s", str2);

    return 0;
}

