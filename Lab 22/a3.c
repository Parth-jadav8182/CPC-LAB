// 3. Demonstrate functions fprintf(), fscanf(), fputc(), fgetc(), fseek() and rewind().

#include <stdio.h>

int main()
{
    FILE *fp;
    char name[30], ch;
    int age;

    fp = fopen("demo.txt", "w+");

    if (fp == NULL)
    {
        printf("File cannot be opened.");
        return 1;
    }

    fprintf(fp, "Parth 18\n");
    fputc('A', fp);

    rewind(fp);

    fscanf(fp, "%s %d", name, &age);

    printf("Name = %s\n", name);
    printf("Age = %d\n", age);

    fseek(fp, 0, SEEK_SET);
    ch = fgetc(fp);

    printf("First character = %c\n", ch);

    rewind(fp);
    printf("File pointer moved to beginning.");

    fclose(fp);

    return 0;
}