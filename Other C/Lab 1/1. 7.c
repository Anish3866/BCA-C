#include<stdio.h>
int main()
{
	float SI,P,T,R;
	printf("Write the principle amount.\n");
	scanf("%f",&P);
	printf("Write the time in years.\n");
	scanf("%f",&T);
	printf("Write the rate of interest.\n");
	scanf("%f",&R);
	SI = P*T*R/100;
	printf("The simple interest is %f.\n",SI);
}
