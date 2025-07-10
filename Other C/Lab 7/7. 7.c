#include <stdio.h>
#include <string.h>

int main()
{
	
	struct employee
	{
    	char name[50];
    	char address[100];
    	float salary;
	};

    int n, i, j;
    struct employee temp;

    printf("Enter number of employees: ");
    scanf("%d", &n);

    struct employee e[n];

    for(i = 0; i < n; i++) {
        printf("\nEnter details for employee %d:\n", i + 1);
        printf("Name: ");
        scanf(" %s", e[i].name); 
        printf("Address: ");
        scanf(" %s", e[i].address); 
        printf("Salary: ");
        scanf("%f", &e[i].salary);
    }

    for(i = 0; i < n - 1; i++) {
        for(j = i + 1; j < n; j++) {
            if(strcmp(e[i].name, e[j].name) > 0) {
                temp = e[i];
                e[i] = e[j];
                e[j] = temp;
            }
        }
    }

    printf("\nEmployee Records (Sorted by Name):\n\n");
    printf("%s\t\t%s\t\t%s\n\n", "Name", "Address", "Salary");
    for(i = 0; i < n; i++) {
        printf("%s\t\t%s\t\t%.2f\n", e[i].name, e[i].address, e[i].salary);
    }

    return 0;
}

