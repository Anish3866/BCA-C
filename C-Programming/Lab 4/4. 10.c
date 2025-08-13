#include <stdio.h>

int main() {
    int number[100], n, i, s, found = 0;
    printf("Enter how many numbers you want to input: ");
    scanf("%d", &n);
    printf("Enter %d numbers:\n", n);
    for(i = 0; i < n; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &number[i]);
    }
    printf("Enter the number to search: ");
    scanf("%d", &s);
    for(i = 0; i < n; i++) {
        if(number[i] == s) {
            found = 1;
            break;
        }
    }
    if(found)
        printf("Number %d found at position %d.\n", s, i + 1);
    else
        printf("Number %d not found.\n", s);

    return 0;
}

