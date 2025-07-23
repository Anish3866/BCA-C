#include <stdio.h>
#include <conio.h>
int main()
{
    int income, tax = 0, gender, ms;
    printf("Enter annual income: ");
    scanf("%d", &income);
    printf("Enter gender (1 for male and 2 for female): ");
    scanf("%d", &gender);
    printf("Enter marital status (1 for married and 2 for unmarried): ");
    scanf("%d", &ms);
    if (ms == 1) {
        if (income <= 450000)
            tax = 0.01 * income;
        else if (income <= 550000)
            tax = 4500 + 0.10 * (income - 450000);
        else if (income <= 750000)
            tax = 4500 + 10000 + 0.20 * (income - 550000);
        else if (income <= 1300000)
            tax = 4500 + 10000 + 40000 + 0.30 * (income - 750000);
        else
            tax = 4500 + 10000 + 40000 + 165000 + 0.35 * (income - 1300000);
    } else if (ms == 2) {
        if (income <= 400000)
            tax = 0.01 * income;
        else if (income <= 500000)
            tax = 4000 + 0.10 * (income - 400000);
        else if (income <= 750000)
            tax = 4000 + 10000 + 0.20 * (income - 500000);
        else if (income <= 1300000)
            tax = 4000 + 10000 + 50000 + 0.30 * (income - 750000);
        else
            tax = 4000 + 10000 + 50000 + 165000 + 0.35 * (income - 1300000);
    } else {
        printf("Invalid marital status entered.\n");
    }
    if (gender == 2) {
        tax =tax-(tax*0.1);
    }
    printf("Calculated tax: %d\n", tax);
}

