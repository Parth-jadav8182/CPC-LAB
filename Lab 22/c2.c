// 2. Delete all blank lines in a file then insert a blank line after the third line in a file. 


#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    FILE *fp1, *fp2;
    char line[200];
    int i, blank, count = 0;

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

    while (fgets(line, sizeof(line), fp1) != NULL)
    {
        blank = 1;

        for (i = 0; line[i] != '\0'; i++)
        {
            if (!isspace((unsigned char)line[i]))
            {
                blank = 0;
                break;
            }
        }

        if (blank)
            continue;

        fputs(line, fp2);
        count++;

        if (count == 3)
        {
            if (strchr(line, '\n') == NULL)
                fputc('\n', fp2);

            fputc('\n', fp2);
        }
    }

    printf("Blank lines removed and new line inserted.");

    fclose(fp1);
    fclose(fp2);

    return 0;
}