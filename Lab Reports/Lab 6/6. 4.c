#include<stdio.h>
int main()
{
	int *p,x;
	p=&x;
	printf("Enter x: ");
	scanf("%d",p);
	printf("\nThe value of x is %d\n",*p);
	printf("Address of x:%u\n",p);
	printf("p+1=%u\n",p+1);
	printf("p-1=%u\n",p-1);
	getch();
}
