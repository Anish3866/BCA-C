#include<stdio.h>
int main()
{
	int i,j=0,num;
	printf("Enter any number:\n");
	scanf("%d",&num);
	for(i=2;i<num;++i)
	{
		if(num%i==0)
		{
		j++;
		}
	}
	if(j==0){
	printf("%d is a prime number",num);
	}
	else{
	printf("%d is a composite number",num);
	}
	return 0;
}
