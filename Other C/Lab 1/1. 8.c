#include<stdio.h>
int main()
{
	float R,H,TSA;
	const float PI = 3.14159;
	printf("Enter the Radius and Height of the cylinder.\n");
	scanf("%f %f",&R,&H);
	TSA = 2*PI*R*(R+H);
	printf("The TSA of the given cylinder is %f",TSA);
}
