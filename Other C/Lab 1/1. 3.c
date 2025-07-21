#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter the 2 numbers!\n");
	scanf("%d %d",&a,&b);
	c=a+b;
	printf("The sum of %d and %d is %d.\n",a,b,c);
	c=a-b;
	printf("The difference of %d and %d is %d.\n",a,b,c);
	c=a*b;
	printf("The product of %d and %d is %d.\n",a,b,c);
	c=a/b;
	printf("The division of %d and %d is %d.\n",a,b,c);
}
