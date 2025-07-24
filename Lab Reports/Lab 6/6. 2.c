#include<stdio.h>
int main()
{
	int x=10;
	int *p;
	int **q;
	p=&x;
	printf("\nValue of x= %d",x);
	printf("\nAddress of x= %u",&x);
	printf("\nValue of x= %d",*p);
	printf("\nAddress of x(or value of p)= %u",p);
	printf("\nAddress of p= %u",&p);
	q=&p;
	printf("\nValue of x= %d",**q);
	printf("\nAddress of x= %u",*q);
	printf("\nAddress of p= %u",q);
	return 0;
}
