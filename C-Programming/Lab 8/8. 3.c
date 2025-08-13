#include <stdio.h>

int main() {
    FILE *fp;
    char ch;
    fp = fopen("D:\\Anish\\output.txt", "w");

    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Enter characters (press Enter to stop):\n");

    while (1) {
        ch = getchar();
        if (ch == '\n') {
            break;
        }

        fputc(ch, fp);
    }

    fclose(fp);
    
    printf("Data written to file 'output.txt'.\n");

    return 0;
}

