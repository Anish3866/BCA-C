#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j;
	for(i=1;i<=10;i++)
	{
		printf("The multiplication table of %d is:- \n",i);
		for(j=1;j<=10;j++)
		{
			printf("%d x %d = %d \n", i,j,i*j);
		}
	}
}
