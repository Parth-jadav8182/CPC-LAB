// 1. Print contents of file in reverse order.  

#include <stdio.h>

int main()
{
    FILE *fp;
    long i;
    int ch;

    fp = fopen("input.txt", "r");

    if (fp == NULL)
    {
        printf("File not found.");
        return 1;
    }

    fseek(fp, 0, SEEK_END);
    i = ftell(fp);

    while (i > 0)
    {
        i--;
        fseek(fp, i, SEEK_SET);
        ch = fgetc(fp);
        putchar(ch);
    }

    fclose(fp);

    return 0;
}