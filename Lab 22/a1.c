// 1. Create, open and close a file.  

#include <stdio.h>

int main()
{
    FILE *fp;

    fp = fopen("test.txt", "w");

    if (fp == NULL)
    {
        printf("File cannot be created.");
        return 1;
    }

    printf("File created and opened successfully.");

    fclose(fp);

    printf("\nFile closed successfully.");

    return 0;
}