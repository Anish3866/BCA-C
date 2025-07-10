#include<stdio.h>
int main()
{
	struct personal_record
	{
		char name[20];
		struct
		{
			int day_of_birth;
			int month_of_birth;
			int year_of_birth;
		}birthday;
		float salary;
	}person;
	printf("Enter name:\n");
	scanf("%s",person.name);
	
	printf("Enter the day of birthday:\n");
	scanf("%d",&person.birthday.day_of_birth);
	
	printf("Enter the month of birthday:\n");
	scanf("%d",&person.birthday.month_of_birth);
	
	printf("Enter the year of birthday:\n");
	scanf("%d",&person.birthday.year_of_birth);
	
	printf("\nEnter salary:\n");
	scanf("%f",&person.salary);
	
	printf("\nName:%s",person.name);
	printf("\nBirthday:%d-%d-%d",person.birthday.day_of_birth,person.birthday.month_of_birth,person.birthday.year_of_birth);
	
	printf("\nSalary:%.2f",person.salary);
	
	return 0;
	
}
