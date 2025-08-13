#include<stdio.h>
void sum();
void main()
{
	sum();
	printf("\n It is the function with no return type and with no return value:");
	return 0;
}
void sum()
{
	int a,b,s;
	printf("Enter two numbers:");
	scanf("%d %d",&a,&b);
	s=a+b;
	printf("Sum = %d",s);
}
