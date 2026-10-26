// 4. Append one file at the end of other. 5. Copy one file to another file. 

#include <stdio.h>

int main()
{
    FILE *fp1, *fp2;
    char ch;

    fp1 = fopen("first.txt", "a");
    fp2 = fopen("second.txt", "r");

    if (fp1 == NULL || fp2 == NULL)
    {
        printf("Error opening file.");
        if (fp1 != NULL)
            fclose(fp1);
        if (fp2 != NULL)
            fclose(fp2);
        return 1;
    }

    while ((ch = fgetc(fp2)) != EOF)
    {
        fputc(ch, fp1);
    }

    printf("File appended successfully.");

    fclose(fp1);
    fclose(fp2);

    return 0;
}