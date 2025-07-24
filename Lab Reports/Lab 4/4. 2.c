#include <stdio.h>

int main() {
    int array[100], n, i;
    printf("Enter number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }
    printf("You entered.\n");
    for(i=0;i<n;i++)
    {
    	printf("Eleennn at %d is %d.\n",i,array[i]);
	}
    return 0;
}
