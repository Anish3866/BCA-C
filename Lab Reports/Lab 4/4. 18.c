#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, len, palindrome = 1;
    printf("Enter a word: ");
    scanf("%s", str);
    len = strlen(str);
    for(i = 0; i < len / 2; i++) {
        if(str[i] != str[len - 1 - i]) {
            palindrome = 0;
            break;
        }
    }
    if(palindrome)
        printf("The word '%s' is a palindrome.\n", str);
    else
        printf("The word '%s' is NOT a palindrome.\n", str);

    return 0;
}

