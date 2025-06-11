#include <stdio.h>

int main() {
	
    char letters;
    
    printf("Enter a character: ");
    scanf(" %c", &letters);

    if (letters >= 'a' && letters <= 'z') {
        if (letters == 'a' || letters == 'e' || letters == 'i' || letters == 'o' || letters == 'u') {
            printf("The character '%c' is a small vowel.\n", letters);
        } else {
            printf("The character '%c' is a small consonant.\n", letters);
        }
    } else {
        printf("The character '%c' is NOT a small letter (a-z).\n", letters);
    }
}

