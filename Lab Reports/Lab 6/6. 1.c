#include<stdio.h>
int main()
{
	int x=10,*p=&x;
	printf("\n The address of x is: %u",&x);
	printf("\n The address of x(address pointed by p) is: %u",p);
	printf("\n The value of x is: %d",x);
	printf("\n The value of x(Value pointed by p)is: %u",p);
	printf("\n The address of p is: %u",&p);
	return 0;
}
