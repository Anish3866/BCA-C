#include<stdio.h>
#include<conio.h>
int main()
{
	float F,C;
	printf("Write Farenheit value:\n");
	scanf("%f",&F);
	C=((F-32)/180)*100;
	printf("The Celsius value is :- %f",C);
}
