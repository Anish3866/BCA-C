#include<stdio.h>
int add(int c, int d)
{
	int sum;
	sum = c+d;
	return sum;
}
int main()
{
	int a=50,b=100,x;
	x=add(a,b);
	printf("The sum of %d and %d is %d",a,b,x);
}

