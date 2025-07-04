#include <stdio.h>

int main() {
    char name[50];
    int age;
    float marks;
    char *p_name = name;
    int *p_age = &age;
    float *p_marks = &marks;

    printf("Enter student name: ");
    gets(p_name);

    printf("Enter age: ");
    scanf("%d", p_age);

    printf("Enter marks: ");
    scanf("%f", p_marks);

    printf("\n--- Student Details ---\n");
    printf("Name: %s\n", p_name);
    printf("Age: %d\n", *p_age);
    printf("Marks: %.2f\n", *p_marks);

    return 0;
}

