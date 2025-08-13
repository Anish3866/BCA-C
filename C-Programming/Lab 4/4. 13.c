#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	int length;
	printf("\n Enter the string: ");
	gets(str);
	length = strlen(str);
	printf("\n Length of Given String : %d",length);
	return 0;
}
