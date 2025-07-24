#include <stdio.h>

int main() {
    int number[100], n, i, j, a;

    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d integers:\n", n);
    for(i = 0; i < n; ++i) {
        scanf("%d", &number[i]);
    }
    for(i = 0; i < n ; i++) {
        for(j = i + 1; j < n; ++j) {
            if(number[i] > number[j])
            {
		        a = number[i];
		        number[i] = number[j];
		        number[j] = a;
    		}
    	}
    }
    printf("Sorted number in ascending order:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", number[i]);
    }

    return 0;
}

