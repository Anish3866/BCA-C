#include<stdio.h>
#include<conio.h>
int main()
{
	char i,j;
	for(i=0;i<5;++i)
	{
		for(j='A';j<='F'-i;++j)
		{
			printf("%c",j);
		}
		printf("\n");
	}
}
