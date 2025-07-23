#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,k;
	for(i=1;i<=5;++i)
	{
		for(j=1;j<=5-i;j++)
		{
			printf("\t");
		}
		for(k=1;k<=(2*i)-1;k++)
		{
			printf("%d\t",i);
		}
		printf("\n");
	}
}
