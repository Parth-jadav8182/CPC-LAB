//3. Use string handling functions strlen(), strcmp(), strcpy(), strcat(), strrev(), strlwr() and strupr()

#include <stdio.h>
#include <string.h>

void length(char a[]);

int main()
{
    char a[100];

    printf("Enter a string: ");
    scanf(" %[^\n]", a);

    length(a);

    return 0;
}

void length(char a[])
{
    printf("Length of string = %zu", strlen(a));
}