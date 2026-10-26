// 2. Capitalize first letter of each word in file. 

#include <stdio.h>
#include <ctype.h>

int main()
{
    FILE *fp1, *fp2;
    int ch, newWord = 1;

    fp1 = fopen("input.txt", "r");
    fp2 = fopen("output.txt", "w");

    if (fp1 == NULL || fp2 == NULL)
    {
        printf("Error opening file.");

        if (fp1 != NULL)
            fclose(fp1);

        if (fp2 != NULL)
            fclose(fp2);

        return 1;
    }

    while ((ch = fgetc(fp1)) != EOF)
    {
        if (isspace((unsigned char)ch))
        {
            newWord = 1;
        }
        else if (newWord)
        {
            ch = toupper((unsigned char)ch);
            newWord = 0;
        }

        fputc(ch, fp2);
    }

    printf("First letter capitalized successfully.");

    fclose(fp1);
    fclose(fp2);

    return 0;
}