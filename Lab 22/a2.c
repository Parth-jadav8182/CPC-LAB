// 2. Count chars, spaces, tabs and new lines in a file.  

#include <stdio.h>

int main()
{
    FILE *fp;
    char ch;
    int chars = 0, spaces = 0, tabs = 0, lines = 0;

    fp = fopen("input.txt", "r");

    if (fp == NULL)
    {
        printf("File not found.");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF)
    {
        chars++;

        if (ch == ' ')
            spaces++;

        if (ch == '\t')
            tabs++;

        if (ch == '\n')
            lines++;
    }

    printf("Characters = %d\n", chars);
    printf("Spaces = %d\n", spaces);
    printf("Tabs = %d\n", tabs);
    printf("New lines = %d\n", lines);

    fclose(fp);

    return 0;
}