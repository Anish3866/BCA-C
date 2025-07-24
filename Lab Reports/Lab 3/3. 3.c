#include<stdio.h>
int main()
{
	int num, i; 
	for(i=1;i<=20;i++)
	{
		if(i%2==0)
		printf("%d = %d (cube)\n",i, i*i*i);
		else
		printf("%d = %d (square)\n",i , i*i);
	}
}
