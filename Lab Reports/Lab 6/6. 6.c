#include<stdio.h>
#define NULL 0
int main()
{
	int *ptr=NULL;
	if(ptr==NULL)
	printf("Change NULL to 1 and there will be warnings!!!");
	return 0;
}
