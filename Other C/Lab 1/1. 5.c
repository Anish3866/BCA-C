#include<stdio.h>
int main()
{
	float A,R,C;
	printf("Write the radius of the circle!\n");
	scanf("%f",&R);
	A = 3.14159*R*R;
	C = 2*3.14159*R;
	printf("The area of the circle is:- %f\n",A);
	printf("The circumference of the circle is:- %f",C);
}
