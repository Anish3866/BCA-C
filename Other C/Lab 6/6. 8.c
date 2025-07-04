#include <stdio.h>

int main() {
    char *names[] = {"Alice","Bob","Charlie","Daisy","Eve"};

    int i;

    printf("List of names:\n");

    for(i = 0; i < 5; i++)
	{
        printf("%s\n", names[i]);
    }

    return 0;
}

