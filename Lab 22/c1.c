// 1. Capitalize the first letter of every word in a file. 

#include <stdio.h>
#include <ctype.h>

int main()
{
    FILE *fp1, *fp2;
    char ch;
    int newWord = 1;

    fp1 = fopen("input.txt", "r");
    fp2 = fopen("output.txt", "w");

    if (fp1 == NULL || fp2 == NULL)
    {
        printf("File cannot be opened.");
        return 1;
    }

    while ((ch = fgetc(fp1)) != EOF)
    {
        if (isspace((unsigned char)ch))
        {
            newWord = 1;
        }
        else if (newWord == 1)
        {
            ch = toupper((unsigned char)ch);
            newWord = 0;
        }

        fputc(ch, fp2);
    }

    printf("First letter of every word capitalized.");

    fclose(fp1);
    fclose(fp2);

    return 0;
}