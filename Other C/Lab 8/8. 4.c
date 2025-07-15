#include <stdio.h>

int main() {
    FILE *fp;
    char name[20];
    int age;

    fp = fopen("D:\\Anish\\record.txt", "w");

    if (fp == NULL) {
        printf("\nCannot create file");
        return 1;
    }

    printf("Write the name of the person:\n");
    gets(name);

    printf("Write the age of the person:\n");
    scanf("%d", &age);

    fprintf(fp, "Name: %s",name);

    fprintf(fp, "\nAge: %d\n", age);

    fclose(fp);
    printf("\nFile is created and data are stored\n");

    return 0;
}

