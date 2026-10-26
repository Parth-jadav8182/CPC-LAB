// 1. Manual implementation of strncmp(), strncpy(),strncat() function.

// *** Main Points ***
// strncmp() : બે strings ના પ્રથમ \(n\) characters સરખાવવા માટે થાય છે.
// strncpy() : એક string માંથી બીજી string માં વધુમાં વધુ \(n\) characters copy કરવા માટે થાય છે.
// strncat() : બીજી string માંથી વધુમાં વધુ \(n\) characters પહેલી string ના અંતે જોડવા માટે થાય છે.

#include <stdio.h>

// 1. Function Declaration
void my_strncmp(char *, char *, int);
void my_strncpy(char *, char *, int);
void my_strncat(char *, char *, int);

int main()
{
    char a[205], b[100], c[100];
    int n;

    printf("Enter first string: ");
    scanf("%s", a); // ex :hello

    printf("Enter second string: ");
    scanf("%s", b); // ex :world

    printf("Enter number of characters (1 to 99): ");
    if (scanf("%d", &n) != 1 || n < 1 || n > 99) // any 1 to 100 char to put  / ex : 2
    {
        printf("Invalid number!");
        return 0;
    }

    // 2. Function Calling
    my_strncmp(a, b, n);
    my_strncpy(c, a, n);
    my_strncat(a, b, n);

    return 0;
}

// 3. Function Definition

// Manual implementation of strncmp()
void my_strncmp(char *p, char *q, int n)
{
    int i = 0;

    while (i < n && *p == *q && *p != '\0') // Check that how many char are same in both string.
    {
        p++;
        q++;
        i++;
    }

    if (i == n || *p == *q) // h != w
        printf("\nFirst %d characters are equal.\n", n);
    else
        printf("\nFirst %d characters are not equal.\n", n); // ex first letter is not same
}

// Manual implementation of strncpy()
void my_strncpy(char *dest, char *src, int n) // this is copy the string like : he
{
    char *start = dest;
    int i = 0;

    while (i < n && *src != '\0')
    {
        *dest = *src;
        dest++;
        src++;
        i++;
    }

    *dest = '\0';

    printf("Copied string = %s\n", start);
}

// Manual implementation of strncat()
void my_strncat(char *dest, char *src, int n) // str1 to str2 to use that a ex : 2 so, print only he
{
    char *start = dest;
    int i = 0;

    while (*dest != '\0')
    {
        dest++;
    }

    while (i < n && *src != '\0')
    {
        *dest = *src;
        dest++;
        src++;
        i++;
    }

    *dest = '\0';

    printf("Concatenated string = %s\n", start); /// print he
}
