#include<stdio.h>
#include<stdlib.h>

int main() {
    FILE *df, *of, *ef;
    int N, num,i;

    df = fopen("D:\\Anish\\data.txt", "w");
    if (df == NULL) {
        printf("Failed to create data.txt\n");
        return 1;
    }

    printf("Enter the number of integers (N): ");
    scanf("%d", &N);

    printf("Enter %d integers:\n", N);
    for (i = 0; i < N; i++) {
        scanf("%d", &num);
        fprintf(df, "%d ", num);
    }
    fclose(df);

    df = fopen("D:\\Anish\\data.txt", "r");
    of = fopen("D:\\Anish\\odd.txt", "w");
    ef = fopen("D:\\Anish\\even.txt", "w");

    if (df == NULL || of == NULL || ef == NULL) {
        printf("Error opening one of the files.\n");
        return 1;
    }

    while (fscanf(df, "%d", &num) != EOF) {
        if (num % 2 == 0)
            fprintf(ef, "%d ", num);
        else
            fprintf(of, "%d ", num);
    }

    printf("Numbers separated into odd.txt and even.txt successfully.\n");

    fclose(df);
    fclose(of);
    fclose(ef);

    return 0;
}

