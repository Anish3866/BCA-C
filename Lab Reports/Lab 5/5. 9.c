#include<stdio.h>
void swap(int*,int*);
int main()
{
	int a,b;
	printf("Enter two numbers\n");
	scanf("%d %d",&a,&b);
	printf("\nBefore swap a=%d and b=%d",a,b);
	swap(&a,&b);
	printf("\nAfter swap a=%d and b=%d",a,b);
	return 0;
}
void swap(int *x, int *y)
{
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
	printf("\nx=%d and y=%d\n",*x,*y);
}
