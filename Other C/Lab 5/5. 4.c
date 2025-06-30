#include<stdio.h>
int sum();
int main()
{
	int r;
	r = sum();
	printf("Sum = %d\n",r);
	printf("This is function with no arguments and return type");
	return 0;
}
int sum()
{
	int s,a,b;
	printf("Enter two numbers\n");
	scanf("%d %d",&a,&b);
	s = a+b;
	return s;
}
