#include<stdio.h>
const int CITY = 2; const int WEEK = 7;
int main()
{
 int temperature[CITY][WEEK],i,j, sum=0; 
 float avg,total;
 for(i = 0; i < CITY; ++i) 
 {
 for(j = 0; j < WEEK; ++j) 
 	{
 		printf("City %d, Day %d: ", i + 1, j + 1);
 		scanf("%d", &temperature[i][j]);
 	}
 }
printf("\nDisplaying values: \n\n");
 for (i = 0; i < CITY; ++i) 
 {
 	for (j = 0; j < WEEK; ++j)
	 {
 		printf("City %d, Day %d = %d\n", i + 1, j + 1,temperature[i][j]);
	}
 }
 printf("\nAverage temperatures for each city:\n");
    for (i = 0; i < CITY; ++i) {
        for (j = 0; j < WEEK; ++j) {
            sum += temperature[i][j];
        }
        avg = sum / (float)WEEK;
        printf("City %d average temperature = %.2f\n", i + 1, avg);
}
/*        total = avg/(float)CITY;
        printf("Total average temperature of both cities= %.2f\n",total);*/
}
