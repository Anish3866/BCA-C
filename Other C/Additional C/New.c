#include <stdio.h>
int main(){
int i, n, r = 0,k;
printf("Enter any number: ");
scanf("%d", &n);
k=n;
while (n != 0) {
i = n % 10;
r = r * 10+ i;
n = n / 10;
}
if (k==r)
printf("This is a Palindrome number");
else
printf("This is not a Palindrome number");
return 0;
}
