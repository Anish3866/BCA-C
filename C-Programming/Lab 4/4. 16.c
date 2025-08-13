#include <stdio.h>
#include <string.h>

int main() {
    char names[100][100], temp[100];
    int i, j, n;

    printf("Enter how many students you want to enter names of:\n");
    scanf("%d", &n);
    getchar(); 
    for(i = 0; i < n; i++) {
        printf("Enter name of student %d: \n", i + 1);
        scanf("%s",&names[i]);
    }
    for(i = 0; i < n - 1; i++) {
        for(j = 0; j < n - 1 - i; j++) {
            if(strcmp(names[j], names[j + 1]) > 0) {
                strcpy(temp, names[j]);
                strcpy(names[j], names[j + 1]);
                strcpy(names[j + 1], temp);
            }
        }
    }
    printf("\nSorted list is:\n");
    for(i = 0; i < n; i++) {
        printf("%s\n", names[i]);
    }

    return 0;
}

