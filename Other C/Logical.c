#include<stdio.h>
int main()
{
	int a = 12, result;
	printf("Initial value of a = %d\n", a);
	result = (a==12) && (a==13);
	printf("Final value of a = %d\n", a);
	printf("Result of logical expression = %d\n", result);
	return 0;
}
