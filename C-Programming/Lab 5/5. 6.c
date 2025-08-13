#include<stdio.h>
int addition(int,int);
int main()
{
	int a,b,sum;
	printf("Enter two numbers:\n");
	scanf("%d %d",&a,&b);
	sum = addition(a,b);
	printf("\n The sum is %d",sum);
	return 0;
}
int addition(int a, int b)
{
	int sum;
	sum = a+b;
	return sum;
}
