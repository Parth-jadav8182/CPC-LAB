// revec
#include <stdio.h>
void main()
{
    int n, i = 0;
    char a[100];
    int leg, s;

    scanf(" %[^\n]", a);

    for (i = 0; a[i] != '\0'; i++)
    {
        leg++;
    }
    for (i = 0; i < leg / 2; i++)
    {

        s = a[i];
        a[i] = a[leg - i - 1];
        a[leg - i - 1] = s;
    }
    for (i = 0; a[i] != 0; i++)
    {
        printf("%c", a[i]);
    }
}