#include<stdio.h>
int main()
{
	FILE *fp;
	int ID;
	char name[20];
	char post[20];
	float salary;
	fp=fopen("D:\\Anish\\employees.txt","w");
	if(fp==NULL)
	{
		printf("File can't be created!");
	}
	else
	{
		printf("File is created!\n\n");
	}
	printf("Write the ID of the employee.\n");
	scanf("%d",&ID);
	printf("Write the name of the employee!\n");
	scanf("%s",name);
	printf("Write the post of the employee!\n");
	scanf("%s",post);
	printf("Write the salary of the employee!\n");
	scanf("%f",&salary);
	printf("Now writing data to the file.\n");
	fprintf(fp,"ID = %d\nName = %s\nPost = %s\nSalary = %.2f",ID,name,post,salary);
	printf("Completed!!");
	fclose(fp);
}
