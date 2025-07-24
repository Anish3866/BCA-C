#include <stdio.h>

int main() {
    float price[5], total = 0;
    int stock[5], i;
    printf("Enter price and stock for 5 bulbs:\n");
    for(i = 1; i <= 5; i++) {
        printf("Bulb %d:\n", i);
        printf("  Price: ");
        scanf("%f", &price[i]);
        printf("  Stock: ");
        scanf("%d", &stock[i]);
    }
    for(i = 1; i <= 5; i++) {
        total += price[i] * stock[i];
    }
    printf("\nTotal price of all bulbs in stock is %.2f\n", total);

    return 0;
}

