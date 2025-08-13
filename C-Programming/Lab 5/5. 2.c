#include<stdio.h>
int greatest(int, int);
void main()
{
	int a,b,c;
	printf("Enter two numbers:\n");
	scanf("%d %d",&a,&b);
	c=greatest(a,b);
	printf("\n The greatest number is: %d",c);
}
int greatest (int x,int y)
{
	if(x>y)
	return(x);
	else
	return y;
}
