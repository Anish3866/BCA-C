#include<stdio.h>
int main()
{
	float A,R,C;
	const float PI=3.14159;
	printf("Write the radius of the circle!\n");
	scanf("%f",&R);
	A = PI*R*R;
	C = 2*PI*R;
	printf("The area of the circle is:- %f\n",A);
	printf("The circumference of the circle is:- %f",C);
}
