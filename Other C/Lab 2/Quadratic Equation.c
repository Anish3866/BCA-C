#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,d,root1,root2,real,img;
	printf("Enter the values a, b and c of the quadric equation:");
	scanf("%f %f %f",&a,&b,&c);
	d=b*b-4*a*c;
	if(d<0)
	{
		printf("\n Imaginary roots\n");
		d = sqrt(fabs(d));
		real = -b/(2*a);
		img = d/(2*a);
		printf("\nRoot1 = %.2f +i %.2f",real,img);
		printf("\nRoot2 = %.2f -i %.2f",real,img);
	}
	else
	{
		printf("\nRoots are real.\n");
		d = sqrt(d);
		root1 = (-b+d)/(2*a);
		root2 = (-b-d)/(2*a);
		printf("\nRoot1 = %.2f \nRoot2 = %.2f",root1,root2);
	}
}
