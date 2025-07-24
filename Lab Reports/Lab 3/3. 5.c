#include<stdio.h>
int main()
{
	int i,j=1,num;
	printf("Write a number which you want to factorize.\n");
	scanf("%d",&num);
	for(i=1;i<=num;++i)
	{
		j*=i;
	}
	printf("The answer is %d",j);
	return 0;
}
