// Copy
#include <stdio.h>
void main()
{
    int n, i = 0;
    char a[100];
    int leg;

    scanf(" %[^\n]",a);

    for (i = 0; a[i] != '\0'; i++)
    {
        printf("%c",a[i]);
    }
  
}