#include<stdio.h>
int main()
{
	FILE *fp;
	fp=fopen("D:\\Anish\\bca.txt","w");
	if(fp==NULL)
	{
		printf("\nCannot create file");
	}
	else
	{
		printf("\nFile is created");
	}
	fputs("I study BCA",fp);
	fclose(fp);
}
