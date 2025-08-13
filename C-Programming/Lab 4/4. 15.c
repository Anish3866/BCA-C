#include<stdio.h>
#include<string.h>
int main()
{
	char upper[100],lower[100];
	printf("Enter a string in lowercase!\n");
	scanf("%s",&upper);
	printf("Enter a string in Uppercase!\n");
	scanf("%s",&lower);
	strupr(upper);
	strlwr(lower);
	printf("String after strupr is %s\n",upper);
	printf("String after strlwr is %s\n",lower);
}
