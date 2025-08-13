#include<stdio.h>
void sum(int,int);
int main()
{
	int a,b;
	printf("Enter two numbers:\n");
	scanf("%d %d",&a,&b);
	sum(a,b);
	printf("\n It is a function with arguements and no return types:");
	return 0;
}
void sum(int a, int b)
{
	int s;
	s=a+b;
	printf("\n The sum is %d",s);
}
