#include<stdio.h>
#include<conio.h>
int main()
{
	int sales, commission;
	printf("Write your total sales! \n");
	scanf("%d",&sales);
	if(sales < 5000)
	commission = sales * 0.01;
	else if(sales >= 5000 && 8000 > sales)
	commission = sales * 0.03;
	else if(sales >= 8000 && 11000 > sales)
	commission = sales * 0.05;
	else
	commission = sales * 0.1;
	printf("Your commission amount is %d", commission);
}
