#include<stdio.h>
#include<string.h>
int main()
{
	char s1[20] = "Anish ";
	char s2[] = "Gautam";
	char s3[40] = " ";
	printf("s1 = %s\nS2 = %s\n",s1,s2);
	printf("\nstrcat (s1, s2) = %s\n",strcat(s1,s2));
}
