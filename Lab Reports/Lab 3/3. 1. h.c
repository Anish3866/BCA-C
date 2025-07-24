#include<stdio.h>
#include<conio.h>
int main()
{
	char i,j;
	for(i='a';i<='e';++i)
	{
		for(j='a';j<=i;++j)
		{
			printf("%c\t",j);
		}
		printf("\n");
	}
}
