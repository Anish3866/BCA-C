#include<stdio.h>
int main()
{
	struct student
	{
		char name[20];
		int roll;
		float marks;
		char remarks[20];
	};
	struct student s[5];
	int i;
	printf("Enter names of 5 students:\n");
	for(i=0;i<5;i++)
		scanf("%s",s[i].name);
	printf("Enter Roll No. of 5 students:\n");
	for(i=0;i<5;i++)
		scanf("%d",&s[i].roll);
	printf("Enter Marks of 5 students:\n");
	for(i=0;i<5;i++)
		scanf("%f",&s[i].marks);
	printf("Enter Remarks of 5 students:\n");
	for(i=0;i<5;i++)
		scanf("%s",s[i].remarks);
	printf("\nName \tRoll \tMarks \t Remarks\n");
	for(i=0;i<5;i++)
		printf("\n%s\t%d\t%.2f\t%s",s[i].name,s[i].roll,s[i].marks,s[i].remarks);
	return 0;
}
