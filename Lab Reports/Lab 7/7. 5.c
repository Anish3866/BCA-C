#include <stdio.h>

int main() {
	
	struct customer 
	{
    char name[50];
    int account_no;
    float balance;
	};

    int n, i, high = 0, low = 0;

    printf("Enter number of customers: ");
    scanf("%d", &n);

    struct customer c[n];

    for (i = 0; i < n; i++) {
        printf("\nEnter details for customer %d:\n", i + 1);
        printf("Name: ");
        scanf(" %s", c[i].name);
        printf("Account number: ");
        scanf("%d", &c[i].account_no);
        printf("Balance: ");
        scanf("%f", &c[i].balance);
    }

    for (i = 1; i < n; i++) {
        if (c[i].balance > c[high].balance) {
            high = i;
        }
        if (c[i].balance < c[low].balance) {
            low = i;
        }
    }

    printf("\nCustomer with Highest Balance:\n");
    printf("Name: %s\nAccount No: %d\nBalance: %.2f\n", c[high].name, c[high].account_no, c[high].balance);

    printf("\nCustomer with Lowest Balance:\n");
    printf("Name: %s\nAccount No: %d\nBalance: %.2f\n", c[low].name, c[low].account_no, c[low].balance);

    return 0;
}

