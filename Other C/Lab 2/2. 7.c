#include <stdio.h>

int main() {
    float principal, rate, amount, factor, compound_interest;
    int time;
    printf("Enter principal amount: ");
    scanf("%f", &principal);

    printf("Enter annual interest rate (in %%): ");
    scanf("%f", &rate);

    printf("Enter time in years (max 5): ");
    scanf("%d", &time);
    factor = 1 + rate / 100;

    if (time == 1) {
        amount = principal * factor;
    } else if (time == 2) {
        amount = principal * factor * factor;
    } else if (time == 3) {
        amount = principal * factor * factor * factor;
    } else if (time == 4) {
        amount = principal * factor * factor * factor * factor;
    } else if (time == 5) {
        amount = principal * factor * factor * factor * factor * factor;
    } else {
        printf("This program supports time up to 5 years\n");
        return 1;
    }

    compound_interest = amount - principal;
    printf("\nFinal Amount = %.2f\n", amount);
    printf("Compound Interest = %.2f\n", compound_interest);

    return 0;
}
