#include<stdio.h>
#include<conio.h>
int main()
{
    int English,C,Microprocessor,Math,Account;
	float percentage;
    
    printf("Enter marks for 5 different subjects \n");
    scanf("%d %d %d %d %d",&English,&C,&Microprocessor,&Math,&Account);
    if (English >= 40 && C >= 40 && Microprocessor >= 40 && Math >= 40 && Account >= 40){
    	percentage = (English + C + Microprocessor + Math + Account)/5.0;
    	printf("The result is Pass. \n");
    	printf("The percentage is %f%% \n",percentage);
	}
	else
	printf("The result is fail. \n");
	if (English >= 40 && C >= 40 && Microprocessor >= 40 && Math >= 40 && Account >= 40) { 
	if (percentage>=80)
	printf("Division = Distinction");
	else if (percentage>=60 && percentage<80)
	printf("Division = 1st Div");
	else if (percentage>=40 && percentage<60)
	printf("Division = 2nd Div");
	else
	printf("Division = Fail!");
	}
	else
	printf("Division = Fail!");
}
