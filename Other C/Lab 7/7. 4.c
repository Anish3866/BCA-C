#include <stdio.h>

int main() {
    struct employee {
        char name[20];
        int age;
        float salary;
        char department[20];
    };

    struct employee s[20];
    int i;
    float Age_sum = 0.0, Salary_sum = 0.0, AS, AA;
    printf("Enter names of 20 employees:\n");
    for(i = 0; i < 20; i++) {
        printf("Employee %d Name: ", i + 1);
        scanf("%s", s[i].name);
    }

    printf("\nEnter ages of 20 employees:\n");
    for(i = 0; i < 20; i++) {
        printf("Employee %d Age: ", i + 1);
        scanf("%d", &s[i].age);
    }

    printf("\nEnter salaries of 20 employees:\n");
    for(i = 0; i < 20; i++) {
        printf("Employee %d Salary: ", i + 1);
        scanf("%f", &s[i].salary);
    }

    printf("\nEnter departments of 20 employees:\n");
    for(i = 0; i < 20; i++) {
        printf("Employee %d Department: ", i + 1);
        scanf("%s", s[i].department);
    }

    printf("\nName\t Age\t Salary\t Department\n");
    for(i = 0; i < 20; i++) {
        printf("%s\t %d\t %.2f\t %s\n", s[i].name, s[i].age, s[i].salary, s[i].department);
        Age_sum += s[i].age;
        Salary_sum += s[i].salary;
    }

    AA = Age_sum / 20;
    AS = Salary_sum / 20;

    printf("\nAverage Age = %.2f\nAverage Salary = %.2f\n", AA, AS);

    return 0;
}

