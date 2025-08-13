#include <stdio.h>

int main() {
    char name[50];
    char address[100];
    int age;
    float weight, height;
    printf("Enter your name: ");
    gets(name);
    printf("Enter your address: ");
    gets(address);
    printf("Enter your age (in years): ");
    scanf("%d", &age);
    printf("Enter your weight (in kg): ");
    scanf("%f", &weight);
    printf("Enter your height (in meters): ");
    scanf("%f", &height);
    printf("\n--- Personal Information ---\n");
    printf("Name   : %s\n", name);
    printf("Address: %s\n", address);
    printf("Age    : %d years\n", age);
    printf("Weight : %.2f kg\n", weight);
    printf("Height : %.2f meters\n", height);

    return 0;
}

