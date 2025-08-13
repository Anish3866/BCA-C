#include <stdio.h>
int main() 
{
    // Define a structure named 'employee' to hold employee details
    struct employee
    {
        char name[20];   // String to store name
        int id;          // Integer to store ID
        float salary;    // Float to store salary
    };

    // Declare a structure variable 'emp' of type 'struct employee'
    struct employee emp;

    // Take input for employee details
    printf("Enter Employee name: ");
    scanf("%19s", emp.name); // %19s prevents buffer overflow

    printf("Enter Employee ID: ");
    scanf("%d", &emp.id); // '&' is used to store value in emp.id

    printf("Enter Salary of Employee: ");
    scanf("%f", &emp.salary); // '&' is also used for float inputs

    // Display the employee details
    printf("\nName\t\tID\tSalary\n");
    printf("%s\t\t%d\t%.2f\n", emp.name, emp.id, emp.salary);

    return 0;
}

