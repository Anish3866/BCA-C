#include<stdio.h>
long fact(int);
int main()
{
	int a;
	printf("Enter a number:\n");
	scanf("%d",&a);
	printf("The factorial of the %d number is %ld",a,fact(a));
	return 0;
}
long fact(int n)
{
	if(n==0)
	return 1;
	else
	return(n*fact(n-1));
}
