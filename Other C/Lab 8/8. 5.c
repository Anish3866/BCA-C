#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *sfp, *dfp;
    char college[100], output[100];
    char sourcePath[200], destPath[200];
    char c;

    printf("Enter source filename (e.g., college.txt):\n");
    scanf("%s",college);

    printf("Enter destination filename (e.g., output.txt):\n");
    scanf("%s",output);

    sprintf(sourcePath, "D:\\Anish\\%s", college);
    sprintf(destPath, "D:\\Anish\\%s", output);

    sfp = fopen(sourcePath, "r");
    if (sfp == NULL)
    {
        printf("\nSource file can't be opened.\n");
        exit(1);
    }

    dfp = fopen(destPath, "w");
    if (dfp == NULL)
    {
        printf("\nDestination file can't be opened.\n");
        fclose(sfp);
        exit(1);
    }

    while ((c = fgetc(sfp)) != EOF)
    {
        fputc(c, dfp);
    }

    printf("\nCopied......\n");

    fclose(dfp);
    fclose(sfp);

    return 0;
}

