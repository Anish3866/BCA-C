#include<stdio.h>
int main()
{
	int a,b,sum;
	int *pa,*pb;
	pa = &a;
	pb = &b;
	printf("Enter two numbers:\n");
	scanf("%d %d",pa,pb);
	sum = *pa + *pb;
	printf("The sum of %d and %d is %d",*pa,*pb,sum);
}
