#include <stdio.h>

int main() {
    int array[100], n, i, key, found = 0;
    printf("Enter number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }
    printf("Enter the element to search: ");
    scanf("%d", &key);
    for(i = 0; i < n; i++) {
        if(array[i] == key) {
        	printf("Element %d found at position %d.\n",key,i+1);
            found = 1;
        }
    }
    if(!found)
        printf("Element %d not found in the array.\n", key);
    return 0;
}
