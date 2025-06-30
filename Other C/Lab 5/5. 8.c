#include<stdio.h>
#define N 10
int minimum (int[]);
int main()
{
	int scores[10],i,minScore;
	printf("Enter 10 scores:\n");
	for(i=0;i<N;++i)
	scanf("%i",&scores[i]);
	minScore = minimum (scores);
	printf("\n Minimum score is: %d\n",minScore);
	return 0;
}
int minimum (int values[])
{
	int minValue,i;
	minValue = values[0];
	for(i=0;i<N;++i)
	{
		if(values[i] < minValue)
		minValue = values[i];
	}
	return minValue;
}
